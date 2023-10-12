// B2CMain.cpp
#include <iostream>
#include <map>
#include <unordered_map>
#include <stack>
#include <vector>
#include <algorithm>
#include <sstream>


#include "antlr4-runtime.h"
#include "antlr4-cpp/BBaseVisitor.h"
#include "antlr4-cpp/BLexer.h"
#include "antlr4-cpp/BParser.h"

using namespace std;
using namespace antlr4;
using namespace antlr4::tree;

std::map<std::string, std::string> symbolTable;

std::map<std::string, std::string> arg_symbolTable;

std::map<std::string, std::string> func_TypeTable;

std::map<std::string, std::map<string,string>> function_map ; //^ function 이름 : ( arg 및 변수 : 타입)
std::map<std::string, std::map<string,string>> function_agrv_map ;//^ function 이름 :( arg : 타입)
std::map<std::string, std::vector<string>> function_agrc_map ; //^ `` argv 1234 순서대로
std::map<std::string, std::string> arg_in_func ; //^ ( arg : 타입 )
std::vector<std::string> argc_in_func ;


std:: string assn_varName ;
std:: string assn_varType;
std:: string assn_funcName ;
std:: string assn_arg ;
string functionName;

int var_assign_flag = 0;
int func_flag = 0;
int arg_flag =0 ;

class TypeAnalysisVisitor : public BBaseVisitor {
private:
    // Each symbol table maps a variable name to its inferred type
    // A stack of symbol tables is used to handle variable scoping
    std::stack<std::map<std::string, std::string>> symbolTableStack;

public:
   any visitProgram(BParser::ProgramContext *ctx) override {
       // Perform some actions when visiting the program
       for (int i=0; i< ctx->children.size(); i++) {
            visit(ctx->children[i]);
       }
       return nullptr;
    }

   any visitDefinition(BParser::DefinitionContext *ctx) override {
        visit(ctx->children[0]);
        return nullptr;
    }

   any visitFuncdef(BParser::FuncdefContext *ctx) override {
    // Handle function definition
        string functionName = ctx->name(0)->getText();
        assn_funcName = ctx->name(0)->getText();

        string argv ;
        
        for (int i=1; i < ctx->name().size(); i++) {
            argv = ctx->name(i)->getText();
            arg_in_func[argv]="auto";
            argc_in_func.push_back(argv);
            //argc_in_func[argv]="auto";
            //cout<< "어디 함 보자 : " << argv <<endl<<endl;
            
            //visit(ctx->statement());
        }
        //cout<< "func 이름 : " << functionName <<endl<<endl;
        function_agrv_map[functionName]=arg_in_func;
        function_agrc_map[functionName]=argc_in_func;

        arg_flag = 1 ;
        
        // visit statement

        func_flag = 1 ;
        
        
        visit(ctx->statement());
        if(functionName.compare("main") == 0){
            func_TypeTable[functionName] = "int";
            func_flag =0 ;
        }
        function_map[assn_funcName] = arg_in_func;
        //function_agrc_map[assn_funcName] = argc_in_func;
        arg_in_func.erase(arg_in_func.begin(),arg_in_func.end());
        argc_in_func.clear();
        return nullptr;
    }

   any visitStatement(BParser::StatementContext *ctx) override {
        visit(ctx->children[0]);
        return nullptr;
    }

    std::any visitAutostmt(BParser::AutostmtContext *ctx) override {
        std::string varName;
        std::string inferredType;

        for (int i=0, j=0; i < ctx->name().size(); i++) {
            int idx_assn = 1 + i*2 + j*2 + 1;  // auto name (= const)?, name (= const)?, ...
            if (ctx->children[idx_assn]->getText().compare("=") == 0) { 
                if (ctx->constant(j)) {
                    varName = ctx->children[idx_assn-1] -> getText();
                    inferredType = inferType(ctx->constant(j));  // Infer type from the constant
                    //inferredType = determineType(ctx->constant(j)->getText());
                    symbolTable[varName] = inferredType;
                    if(func_flag){
                        assn_arg =  ctx->children[idx_assn-1] -> getText();
                        arg_in_func[assn_arg] = inferredType;
                        //argc_in_func[assn_arg] = inferredType;
                    }
                    //cout << "-->name : " << varName << "| -->type : " << inferredType << " 끝\n";
                    visit(ctx->constant(j));
                    j++;
                }
            }
        }
        //return BBaseVisitor::visitAutostmt(ctx);
        return nullptr;
    }

    std::any visitDeclstmt(BParser::DeclstmtContext *ctx) override {
        // Handle function declaration
        std::string functionName = ctx->name()->getText();

        if(functionName.compare("main") == 0){
            func_TypeTable[functionName] = "int";
            func_flag = 0 ;
        }

        return nullptr;
    }


    // When we enter a new block (i.e., a new scope), we push a new symbol table onto the stack
    any visitBlockstmt(BParser::BlockstmtContext *ctx) override {
       // Perform some actions when visiting a block statement
       for (auto stmt : ctx->statement()) {
            visit(stmt);
       }
       return nullptr;
    }

    // Handle variable declaration with type inference

   any visitIfstmt(BParser::IfstmtContext *ctx) override {
        visit(ctx->expr());
        visit(ctx->statement(0));
        if (ctx->ELSE()) {
            visit(ctx->statement(1));
        }
        return nullptr;
    }

   any visitWhilestmt(BParser::WhilestmtContext *ctx) override {
        visit(ctx->expr());
        visit(ctx->statement());
        return nullptr;
    }

   any visitExpressionstmt(BParser::ExpressionstmtContext *ctx) override {
      visit(ctx->expression());
        return nullptr;
    }


    any visitReturnstmt(BParser::ReturnstmtContext *ctx) override {
        if (ctx->expression()) {
            visit(ctx->expression());
            string return_var = ctx->expression()->getText();
            string return_type;
            //cout << "----> Return 값 :" <<ctx->expression()->getText() << endl;
            
            int func_type_incompat = 0 ;
            map<string,string> tmp_map = function_map[functionName];

            //^ 여기다가 함수 리턴값 타입가져오는거. 리턴값 타입은 전역map 에 있음.
            if(checkTable(arg_in_func,return_var)){
                return_type = arg_in_func[return_var] ;
                
                if((assn_funcName.compare("main") == 0) && !(return_type.compare("int")==0))
                    func_type_incompat = 1 ;
                
            }else{
                return_type = determineType(return_var);
                
                if((assn_funcName.compare("main") == 0) && !(return_type.compare("int")==0))
                    func_type_incompat = 1 ;
            }

            if(func_type_incompat){
                cout << "/*[Return Type Error] In int main() Function > return value : " << return_var << " ( type : " << return_type
                    <<" ) imcompatible ! */" << endl;
            }

            func_TypeTable[assn_funcName] = return_type;
        }
        func_flag =0;
        return nullptr;
    }
    

    any visitExpr(BParser::ExprContext *ctx) override {
        std::string inferredType;
        string name ;
        
        // unary operator
        if (ctx->atom() ) {
            /* name = ctx->getText();
            
            inferredType = function_map[assn_funcName][ctx->atom()->getText()];
            cout<< "Atom의 아부지 : " << ctx->getText() <<endl;
            cout<< "현재 func name : " << assn_funcName <<endl;
            cout<< "현재 assn var : " << assn_varName << endl;
            cout<< "현재 assn var type : " << function_map[assn_funcName][assn_varName] << endl;
            cout<< "현재 assn name  : " << name << endl;
            cout<< "현재 assn name type : " << inferredType << endl;

            cout << "_________________________________________" << endl; */

            //^ 여기 건들다 잤다.
            //^ i = last 처럼 name으로 주어지면 type 등록이 안됨ㅋㅋ
            if(ctx->atom()->name()){
                /* cout<< "Atom의 아부지 : " << ctx->getText() <<endl;
                cout<< "Atom의 아들 : " << ctx->children[0]->getText() <<endl;
                cout<< "ATOM의 손자 : " <<inferredType << endl; */
                /* if(inferredType.compare(assn_varType)!=0)
                    cout << "___________________잘못됐노______________________" << endl;
                else{
                    function_map[assn_funcName][name]=inferredType;
                    cout<< "할당받은 assn var type : " << inferredType << endl;
                } */
            }
            if (ctx->PLUS() || ctx->MINUS()) {
                checkTypeIsNumeric(inferredType);
            } else if (ctx->NOT()) {
                if(func_flag){
                    func_TypeTable[assn_funcName] = "bool";
                    func_flag = 0;
                }
            }
            visit(ctx->atom());
        }
        // binary operator
        else if (ctx->MUL() || ctx->DIV() || ctx->PLUS() || ctx->MINUS() || 
                ctx->GT() || ctx->GTE() || ctx->LT() || ctx->LTE() || ctx->EQ() || ctx->NEQ() ||
                ctx->AND() || ctx->OR()) {

            name = ctx->getText();
            string left = ctx->expr(0)->getText();
            string left_Type;
            //cout << "--> name : "<< name <<" || --> left : " << left << "\n";
            visit(ctx->expr(0));
            
            string right = ctx->expr(1)->getText();
            string right_Type;
            //cout << "--> name : "<< name <<" || --> right : " << right << "\n";
            visit(ctx->expr(1));

            int incompat_t_err = 0;
            
            if (ctx->PLUS() || ctx->MINUS() || ctx->MUL() || ctx->DIV()) {
                
                /* inferredType = "numeric";
                cout << name<< " : " << inferredType << " 끝\n"; */
                incompat_t_err = Type_Check(arg_in_func,left,right);
                
            } else {
                inferredType = "bool";
                
            }
            
            switch(incompat_t_err){
                case 1 :
                    cout << " /*[Incompatible Type Error] " << name << " : "<< left<<"("<< arg_in_func[left] << ") != "
                            << right << "("<< arg_in_func[right] << ") */" << endl ;
                    break;
                case 2 :
                    cout << " /*[Incompatible Type Error] " << name << " : "<< left<<"("<< arg_in_func[left] << ") != "
                            << right << "("<< determineType(right) << ") */" << endl ;
                    break;
                case 3 :
                    cout << " /*[Incompatible Type Error] " << name << " : "<< left<<"("<< determineType(left) << ") != "
                            << right << "("<< arg_in_func[right] << ")*/" << endl ;
                    break;
                case 4 :
                    cout << " /*[Incompatible Type Error] " << name << " : "<< left<<"("<< determineType(left) << ") != "
                        << right << "("<< determineType(right) << ") */" << endl ;
                    break;
                //exit(-1);
                return nullptr;
            }
                
            //checkTypesMatch(leftType, rightType);
            
            // If the operator is '+', '-', '*', or '/', the result type is numeric.
            // If the operator is '<', '<=', '>', '>=', '==', '!=', '&&', or '||', the result type is boolean.
            
        }
        // ternary operator
        else if (ctx->QUEST()) {
            std::string condType = ctx->expr(0)->getText();
            visit(ctx->expr(0));
            checkTypeIsBoolean(condType);

            std::string leftType = ctx->expr(1)->getText();
            visit(ctx->expr(1));
            std::string rightType = ctx->expr(2)->getText();
            visit(ctx->expr(2));
            //checkTypesMatch(leftType, rightType);

            inferredType = leftType;
            
        }

        return inferredType;
    }

    

    any visitAtom(BParser::AtomContext *ctx) override {
        
        int check_flag = 0;
        map<string,string> tmp_Table= arg_in_func;

        if (ctx->expression()) { // ( expression )
            visit(ctx->expression());
        }
        else if (ctx -> constant())
        {
            std :: string inferredType;
            
            inferredType = inferType(ctx->constant());
            
            if(arg_in_func.find(assn_varName)!=arg_in_func.end()){
                //^ 여기서 auto가 전 형식으로 여겨져 타입 충돌이 발생. auto인 var은 할당할 수 있게 수정하였음_0601 20:32
                if((arg_in_func[assn_varName]).compare(inferredType) && (arg_in_func[assn_varName].compare("auto")!=0)
                    && var_assign_flag) {
                    cout << "/* [Redifination Error] Redifining "<< assn_varName << "(type: "<< arg_in_func[assn_varName] <<")"
                        <<" to " << inferredType <<", ONLY the SAME type of redifinations are allowed */" << endl;
                    /* cout << "--> Func : " << assn_varName << "| --> 전 type : " << arg_in_func[assn_varName] << "\n";

                    cout << "--> name : " << assn_varName << "| --> 후 type : " << inferredType << "\n";  */
                    return nullptr;
                    //exit(-1);
                }
            }
            if(func_TypeTable.find(assn_funcName)==symbolTable.end()){
                
                cout << "/* [Redifination Error] Function "<< assn_funcName <<", redifination occured */" << endl;
                    //exit(-1);
                
            }

            

            // name | constant | funcinvocation
            check_flag = checkTable(tmp_Table,assn_varName);
                
            if(var_assign_flag && (check_flag==0)){
                
                arg_in_func[assn_varName] = inferredType;
                                
                var_assign_flag=0;
                func_flag = 0;
            }
            else if(arg_in_func[assn_varName].compare("auto")==0){
                arg_in_func[assn_varName]=inferredType;
            }

        }
        else{
            if(var_assign_flag){
                map<string,string> tmp_Table= arg_in_func;

                string right_name = ctx->getText();
                int right_flag = 0;
                string right_Type;
                if(checkTable(tmp_Table,right_name)==1){
                    right_Type = tmp_Table[right_name];
                    right_flag = 1;
                }

                string left_name = assn_varName;
                int left_flag = 0;
                string left_type ;
                if(checkTable(tmp_Table,left_name)==1){
                    left_type = tmp_Table[left_name];
                    left_flag = 1;
                }


                if( left_flag==0 && right_flag == 1){
                    //function_map[assn_funcName][left_name]=right_Type;
                    arg_in_func[left_name]=right_Type;

                    cout << "_________할당___________" << endl;

                    cout<< "현재 func name : " << assn_funcName <<endl;
                    cout<< " = 왼쪽 : " << left_name << endl;
                    cout<< "왼쪽 type : " << arg_in_func[left_name] << endl;
                    cout<< "= 오른쪽 name  : " << right_name << endl;
                    cout<< "오른쪽 type : " << right_Type << endl;
                }else if(left_type.compare("auto")==0){
                    arg_in_func[left_name]=right_Type;
                    /* arg_in_func[right_name]=right_Type;
                    cout << "_________할당___________" << endl;

                    cout<< "현재 func name : " << assn_funcName <<endl;
                    cout<< " = 왼쪽 : " << left_name << endl;
                    cout<< "왼쪽 type : " << left_type << endl;
                    cout<< "= 오른쪽 name  : " << right_name << endl;
                    cout<< "오른쪽 type : " << right_Type << endl; */
                }else if(right_Type.compare(left_type)!=0){
                    // cout << "/* [Difination Error] Difining "<< assn_varName << "(type: "<< tmp_Table[assn_varName] <<")"
                    //     <<" to " << right_Type <<", ONLY the SAME type of Difinations are allowed */" << endl;
                }else{
                    
                    //cout<< "할당받은 assn var type : " << inferredType << endl;
                }
                
            }

            
        }
        visit(ctx->children[0]);
        var_assign_flag =0;
        return nullptr;
    }

    any visitExpression(BParser::ExpressionContext *ctx) override {
        
        if (ctx->ASSN()) { // assignment
            assn_varName = ctx->name()->getText();
            map<string,string> tmp_table = function_map[assn_funcName];
            
            if(checkTable(tmp_table,assn_varName))
                assn_varType = tmp_table[assn_varName];
            var_assign_flag = 1;
            func_flag = 1;
            visit(ctx->name());
            
        }
        visit(ctx->expr());
        
        
        return nullptr;
    }

    any visitFuncinvocation(BParser::FuncinvocationContext *ctx) override {
        string assigned_func_Name = ctx->children[0]->getText();

        for (int i=0; i < ctx->expr().size(); i++) {
            visit(ctx->expr(i));
            /* cout << "Funcinvoc의 아빠 : " << ctx->getText() << endl;
            cout << "Funcinvoc의 아들 : " << ctx->expr(i)->getText() << endl;
            cout << "Funcinvoc의 손자 : " << ctx->children[0]->getText() << endl;
            cout << "__________________________________________" << endl; */
        }
        return nullptr;
    }

    any visitConstant(BParser::ConstantContext *ctx) override {
        //cout << ctx->children[0]->getText();
        return nullptr;
    }

    any visitName(BParser::NameContext *ctx) override {
        
        return nullptr;
    }

    any visitDirective(BParser::DirectiveContext *ctx) override {
        return nullptr;
    }


    // A helper function to infer type from a constant
    std::string inferType(BParser::ConstantContext *ctx) {
        if (ctx->INT()) {
            return "int";
        } else if (ctx->REAL()) {
            return "double";
        } else if (ctx->STRING()) {
            if( ctx->getText().compare("true") == 0 ){
                return "bool";
            }else if(ctx->getText().compare("false")==0){
                return "bool";
            }else{
                return "string";
            }
        } else if (ctx->BOOL()) {
            return "bool";
        } else if (ctx->CHAR()) {
            return "char";
        } else {
            cout << "NO such type" << endl;
            exit(-1);
        }
    }

    void checkTypeIsNumeric(const std::string& type) {
        if (type != "int" && type != "real") {
            throw std::runtime_error("Type " + type + " is not numeric");
        }
    }

    void checkTypeIsBoolean(const std::string& type) {
        if (type != "boolean") {
            throw std::runtime_error("Type " + type + " is not boolean");
        }
    }

    void checkTypesMatch(const std::string& type1, const std::string& type2) {
        if (type1 != type2) {
            throw std::runtime_error("Types " + type1 + " and " + type2 + " do not match");
        }
    }

    int checkTable(map<string,string>& Table, std::string& keyvalue){
        if(Table.find(keyvalue)!=Table.end())
            return 1 ;
        else
            return 0 ;
    }

    string determineType(const std::string& str) {
    std::stringstream ss(str);

        
        int i;
        if (ss >> i) {
            // Check if there's anything left in the stringstream
            if (ss.eof()) { 
                return "int";
            }
            // Reset the stringstream
            ss.clear();
            ss.str(str);
        }

        double d;
        if (ss >> d) {
            if (ss.eof()) {
                return "double";
            }
            ss.clear();
            ss.str(str);
        }

        float f;
        if (ss >> f) {
            if (ss.eof()) {
                return "float";
            }
            ss.clear();
            ss.str(str);
        }

        
        std::string lowerStr = str;
        //std::transform(lowerStr.begin(), lowerStr.end(), lowerStr.begin(), ::tolower);
        if (lowerStr.compare("true")==0){
            return "bool";

        }else if(lowerStr.compare("false")==0) {
            return "bool";
        }

        return "string";
    }

    int Type_Check(map<string,string>& table, string& left, string& right ){
        string right_Type;
        string left_Type;

        if((checkTable(table,left) && checkTable(table,right))){
            if(table[left].compare(table[right]) < 0)
                return 1 ;

        }else if((checkTable(table,left)) && !checkTable(table,right)){
            right_Type = determineType(right);
            if(table[left].compare(right_Type) < 0)
                return 2 ;
            
        }else if((!checkTable(table,left)) && checkTable(table,right)){
            left_Type = determineType(left);
            if(table[right].compare(left_Type) < 0)
                return 3 ;

        }else{
            right_Type = determineType(right);
            left_Type = determineType(left);
            if(right_Type.compare(left_Type) < 0)
                return 4 ;
        }
        
        return 0;
    }

    string getFunctionName(string& str) {
        size_t pos = str.find("(");
        if (pos != string::npos) {
            return str.substr(0, pos);
        } else {
            return str;  // Return the whole string if "(" was not found
    }
}
    
    
    
};

class TypeAugmentationVisitor : public BBaseVisitor {
public:
   // Replace 'auto' in parse tree with inferred types
   // ...
};

class PrintTreeVisitor : public BBaseVisitor {
public:
    any visitProgram(BParser::ProgramContext *ctx) override {
    	// Perform some actions when visiting the program
    	for (int i=0; i< ctx->children.size(); i++) {
      	    visit(ctx->children[i]);
    	}
    	return nullptr;
    }

    any visitDefinition(BParser::DefinitionContext *ctx) override {
	    visit(ctx->children[0]);
        return nullptr;
    }

    any visitFuncdef(BParser::FuncdefContext *ctx) override {
	// Handle function definition
        functionName = ctx->name(0)->getText();
        string funcType = func_TypeTable[functionName];
        string argv ;
        string argvType ;
        //cout << "\n\n-->>이거 뭐냐 : " << functionName << endl;

        cout << funcType<< " " << functionName << "(" ;
            // You can retrieve and visit the parameter list using ctx->name(i)
        for (int i=1; i < ctx->name().size(); i++) {
            if (i != 1) cout << ", ";
            argv = ctx->name(i)->getText();
            argvType = function_map[functionName][argv];
            cout << argvType << " " << argv;	
        }
        cout << ")";

        // visit statement
        visit(ctx->statement());
            return nullptr;
    }

    any visitStatement(BParser::StatementContext *ctx) override {
	    visit(ctx->children[0]);
        return nullptr;
    }

    any visitAutostmt(BParser::AutostmtContext *ctx) override {
    	// You can retrieve the variable names and constants using ctx->name(i) and ctx->constant(i)
        string var;
        string type;
        for(auto iter=function_map[functionName].begin();iter != function_map[functionName].end(); ++iter){
            type = iter->second;
            var = iter -> first;
            //cout << "\n여기를 보자꾸나\n var|type : " << var << "|" << type <<endl;
            //if(!checkTable(arg_in_func,var))
            if(function_agrv_map[functionName].find(var) == function_agrv_map[functionName].end())
                cout << type << " " << var << ";"<< endl;
        }
            
        
        for (int i=0, j=0; i < ctx->name().size(); i++) {
            //if (i != 0) cout << " ,";
            //cout << ctx->name(i)->getText();

            int idx_assn = 1 + i*2 + j*2 + 1;  // auto name (= const)?, name (= const)?, ...
            if (ctx->children[idx_assn]->getText().compare("=") == 0) { 
                              
                var = ctx->children[idx_assn-1]->getText();
                //cout << symbolTable[var] << " ";
                cout << var;
                if (ctx->constant(j)) {
                    cout << " = ";    
                    visit(ctx->constant(j));
                    j++;
                }
            }
        }
        cout << ";" << endl;
        return nullptr;
    }

    any visitDeclstmt(BParser::DeclstmtContext *ctx) override {
	// Handle function declaration
        
        functionName = ctx->name()->getText();
        string funcType = func_TypeTable[functionName];
        string argv ;
        string argvType ;

        cout << funcType<< " " << functionName << "(" ;
            // You can retrieve and visit the parameter list using ctx->name(i)
        for (int i=1; i < ctx->AUTO().size(); i++) {
            if (i != 1) cout << ", ";
            
            //^ name(i) 포인터 에러	
        }
        cout << ");";
        
        return nullptr;
    }

    any visitBlockstmt(BParser::BlockstmtContext *ctx) override {
    	// Perform some actions when visiting a block statement
        cout << "{" << endl;
            for (auto stmt : ctx->statement()) {
                visit(stmt);
            }
        cout << "}" << endl;
    	return nullptr;
    }

    any visitIfstmt(BParser::IfstmtContext *ctx) override {
        cout << "if (";
        visit(ctx->expr());
        cout << ") " ;
        visit(ctx->statement(0));
        if (ctx->ELSE()) {
        cout << endl << "else ";
        visit(ctx->statement(1));
        }
        return nullptr;
    }

    any visitWhilestmt(BParser::WhilestmtContext *ctx) override {
        cout << "while (";
        visit(ctx->expr());
        cout << ") ";
        visit(ctx->statement());
        return nullptr;
    }

    any visitExpressionstmt(BParser::ExpressionstmtContext *ctx) override {
        visit(ctx->expression());
        cout << ";" << endl;
        return nullptr;
    }

    any visitReturnstmt(BParser::ReturnstmtContext *ctx) override {
        cout << "return";
        if (ctx->expression()) {
            cout << " (";
            visit(ctx->expression());
            cout << ")";
            string return_var = ctx->expression()->getText();
            string return_type;
            //cout << "----> Return 값 :" <<ctx->expression()->getText() << endl;
            
            int func_type_incompat = 0 ;

            //^ 여기다가 함수 리턴값 타입가져오는거. 리턴값 타입은 전역map 에 있음.
            if(checkTable(arg_in_func,return_var)){
                return_type = arg_in_func[return_var] ;
                
                if((assn_funcName.compare("main") == 0) && !(return_type.compare("int")==0))
                    func_type_incompat = 1 ;
                
            }else{
                return_type = determineType(return_var);
                
                if((assn_funcName.compare("main") == 0) && !(return_type.compare("int")==0))
                    func_type_incompat = 1 ;
            }

            if(func_type_incompat){
                cout << "/* ---> [Return Type Error] In int main() Function > return value : " << return_var << " ( type : " << return_type
                    <<" ) imcompatible ! */" << endl;
                
                return nullptr;
            }

        }
        cout << ";" << endl;

        
        
        return nullptr;
    }

    any visitNullstmt(BParser::NullstmtContext *ctx) override {
	    cout << ";" << endl;
        return nullptr;
    }

    any visitExpr(BParser::ExprContext *ctx) override {
	    // unary operator
        if(ctx->atom()) {
            if (ctx->PLUS()) cout << "+";
            else if (ctx->MINUS()) cout << "-";
            else if (ctx->NOT()) cout << "!";
            visit(ctx->atom()); 
        }
	    // binary operator
        else if (ctx->MUL() || ctx->DIV() || ctx->PLUS() || ctx->MINUS() || 
            ctx->GT() || ctx->GTE() || ctx->LT() || ctx->LTE() || ctx->EQ() || ctx->NEQ() ||
            ctx->AND() || ctx->OR() ) {
            
            visit(ctx->expr(0));
            cout << " " << ctx->children[1]->getText() << " "; // print binary operator
            visit(ctx->expr(1));

            string name = ctx->getText();
            string left = ctx->expr(0)->getText();
            string left_Type;
            //cout << "--> name : "<< name <<" || --> left : " << left << "\n";
            
            string right = ctx->expr(1)->getText();
            string right_Type;
            //cout << "--> name : "<< name <<" || --> right : " << right << "\n";

            int incompat_t_err = 0;
            
            if (ctx->PLUS() || ctx->MINUS() || ctx->MUL() || ctx->DIV()) {
                
                /* inferredType = "numeric";
                cout << name<< " : " << inferredType << " 끝\n"; */
                map<string,string> tmp_map = function_map[functionName];
                incompat_t_err = Type_Check(tmp_map,left,right);
                
                
            }
            
            switch(incompat_t_err){
                case 1 :
                    cout << " /* ---> [Incompatible Type Error] " << name << " : "<< left<<"("<< function_map[functionName][left] << ") != "
                            << right << "("<< function_map[functionName][right] << ") */"  ;
                    break;
                case 2 :
                    cout << " /* ---> [Incompatible Type Error] " << name << " : "<< left<<"("<< function_map[functionName][left] << ") != "
                            << right << "("<< determineType(right) << ") */"  ;
                    break;
                case 3 :
                    cout << " /* ---> [Incompatible Type Error] " << name << " : "<< left<<"("<< determineType(left) << ") != "
                            << right << "("<< function_map[functionName][right] << ") */"  ;
                    break;
                case 4 :
                    cout << " /* ---> [Incompatible Type Error] " << name << " : "<< left<<"("<< determineType(left) << ") != "
                        << right << "("<< determineType(right) << ") */"  ;
                    break;
                //exit(-1);
                return nullptr;
            }
        }
	    // ternary operator
        else if (ctx->QUEST()) {
            visit(ctx->expr(0));
            cout << " ? ";
            visit(ctx->expr(1));
            cout << " : ";
            visit(ctx->expr(2));
        }
        else {
            int lineNum = ctx->getStart()->getLine();
            cerr << endl << "[ERROR] visitExpr: unrecognized ops in Line " << lineNum << " --" << ctx->children[1]->getText() << endl;
            exit(-1); // error
        }	
        return nullptr;
    }
   
    any visitAtom(BParser::AtomContext *ctx) override {
	if (ctx->expression()) { // ( expression )
	    cout << "(";
	    visit(ctx->expression());
	    cout << ")";
	} else	// name | constant | funcinvocation
	    visit(ctx->children[0]);
        return nullptr;
    }
    
    any visitExpression(BParser::ExpressionContext *ctx) override {
        if (ctx->ASSN()) { // assignment
            var_assign_flag =1;
            visit(ctx->name());
            cout << " = ";
        }
        visit(ctx->expr());
        string expr_right = ctx->expr()->children[0]->children[0]->getText();
        string expr_left = ctx->children[0]->getText();
        string tmp_funcName = getFunctionName(expr_right);

        

        /* cout << "expr Func Name : " << tmp_funcName << endl;
        cout << "expr Func Type : " << exprFuncType << endl;
        cout << "expr  Var Type : " <<exprVarType << endl;
        cout << "__________________________________________" << endl; */
        if(checkTable(func_TypeTable,tmp_funcName)){
            expr_right = getFunctionName(expr_right);
            string exprFuncType = func_TypeTable[expr_right];
            string exprVarType = function_map[functionName][expr_left];
            
            if(exprFuncType.compare(exprVarType)!=0){
                int lineNum = ctx->getStart()->getLine();
                cout << " /* ---> [Incompatible Return Type] " << lineNum << " : "<< expr_left<<" ("<< exprVarType << ") != "
            << expr_right << "("<< exprFuncType << ") */"  ;
            }

        }
        return nullptr;
    }

    any visitFuncinvocation(BParser::FuncinvocationContext *ctx) override {
        cout << ctx->name()->getText() << "(";
        //vector<string> tmp_argv_map = function_agrc_map[functionName];
        int type_error_flag =0;
        string tmp_funcName = ctx->children[0]->getText();
        for (int i=0; i < ctx->expr().size(); i++) {
            if (i != 0) cout << ", ";
            visit(ctx->expr(i));
            if(checkTable(func_TypeTable,tmp_funcName)){
                string tmp_arg = ctx->expr(i)->getText();
                string tmp_arg_type = function_map[functionName][tmp_arg];
                string tmp_actual_arg = function_agrc_map[tmp_funcName][i];
                string tmp_actual_arg_type = function_map[tmp_funcName][tmp_actual_arg];
                /* cout << "\n지금 함수: " << functionName << endl;
                cout << "func argv type : " << tmp_actual_arg_type << endl;
                cout << "입력된 type : " << tmp_arg_type << endl;
                cout << "__________________________________________" << endl; */
                if(tmp_arg_type.compare(tmp_actual_arg_type) != 0)
                    type_error_flag = 1 ;
            }
        }
        cout << ")";
        if(type_error_flag){
            int lineNum = ctx->getStart()->getLine();
            cout << " /* ---> [Incompatible Call site Type] Line " << lineNum << ": "<< tmp_funcName <<" */"  ;
        }
        return nullptr;
    }
    
    any visitConstant(BParser::ConstantContext *ctx) override {
        cout << ctx->children[0]->getText();
        return nullptr;
    }
    
    any visitName(BParser::NameContext *ctx) override {
	    cout << ctx->NAME()->getText();
        return nullptr;
    }
    
    any visitDirective(BParser::DirectiveContext *ctx) override {
        cout << ctx->SHARP_DIRECTIVE()->getText();
        cout << endl;
        return nullptr;
    }

    int checkTable(map<string,string>& Table, std::string& keyvalue){
        if(Table.find(keyvalue)!=Table.end())
            return 1 ;
        else
            return 0 ;
    }

    string determineType(const std::string& str) {
    std::stringstream ss(str);

        
        int i;
        if (ss >> i) {
            // Check if there's anything left in the stringstream
            if (ss.eof()) { 
                return "int";
            }
            // Reset the stringstream
            ss.clear();
            ss.str(str);
        }

        double d;
        if (ss >> d) {
            if (ss.eof()) {
                return "double";
            }
            ss.clear();
            ss.str(str);
        }

        float f;
        if (ss >> f) {
            if (ss.eof()) {
                return "float";
            }
            ss.clear();
            ss.str(str);
        }

        
        std::string lowerStr = str;
        //std::transform(lowerStr.begin(), lowerStr.end(), lowerStr.begin(), ::tolower);
        if (lowerStr.compare("true")==0 || lowerStr.compare("false")==0) {
            return "bool";
        }

        return "string";
    }

    int Type_Check(map<string,string>& table, string& left, string& right ){
        string right_Type;
        string left_Type;

        if((checkTable(table,left) && checkTable(table,right))){
            if(table[left].compare(table[right]) < 0)
                return 1 ;

        }else if((checkTable(table,left)) && !checkTable(table,right)){
            right_Type = determineType(right);
            if(table[left].compare(right_Type) < 0)
                return 2 ;
            
        }else if((!checkTable(table,left)) && checkTable(table,right)){
            left_Type = determineType(left);
            if(table[right].compare(left_Type) < 0)
                return 3 ;

        }else{
            right_Type = determineType(right);
            left_Type = determineType(left);
            if(right_Type.compare(left_Type) < 0)
                return 4 ;
        }
        
        return 0;
    }

    string getFunctionName(string& str) {
        size_t pos = str.find("(");
        if (pos != string::npos) {
            return str.substr(0, pos);
        } else {
            return str;  // Return the whole string if "(" was not found
        }
    }
};

int main(int argc, const char* argv[]) {
    if (argc < 2) {
            cerr << "[Usage] " << argv[0] << "  <input-file>\n";
            exit(0);
    }
    std::ifstream stream;
    stream.open(argv[1]);
    if (stream.fail()) {
            cerr << argv[1] << " : file open fail\n";
            exit(0);
    }

    cout << "/*-- B2C ANTLR visitor --*/\n";

    ANTLRInputStream inputStream(stream);
    BLexer lexer(&inputStream);
    CommonTokenStream tokenStream(&lexer);
    BParser parser(&tokenStream);
    ParseTree* tree = parser.program();

    // visit parse tree and perform type inference for expressions, function calls
    TypeAnalysisVisitor AnalyzeTree;
    AnalyzeTree.visit(tree);

    // visit parse tree and augment types for 'auto' typed variables
    TypeAugmentationVisitor AugmentTree;
    AugmentTree.visit(tree);

    /* for(auto k = function_map.begin(); k != function_map.end() ; k++){
        map<string,string> func_argv = k->second;
        for(auto iter = func_argv.begin(); iter != func_argv.end(); iter++){
            string check_bool = iter->second;
            
            
            if(check_bool.compare("true")==0 || check_bool.compare("false") == 0 ){
                function_map[k->first][iter->first] = "bool";
                
            }
        }
    } */

    // visit parse tree and print out C code with augmented types
    PrintTreeVisitor PrintTree;
    PrintTree.visit(tree);

    return 0;
}
