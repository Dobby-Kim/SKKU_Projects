#include <iostream>
#include <fstream>
#include "ExprBaseListener.h"
#include "ExprLexer.h"
#include "ExprParser.h"
using namespace std;
using namespace antlr4;
using namespace antlr4::tree;

class EvalListener: public ExprBaseListener {
  map<string, double> vars;
  stack<double> evalStack;
  stack<double> reverse_evalStack;

public:
  
  virtual void exitAssn(ExprParser::AssnContext *ctx) {
        double value = stod(ctx->signedNum()->num()->getText());
        if (ctx->signedNum()->getText()[0] == '-') {
            value = -value;
        }
        vars[ctx->ID()->getText()] = value;
        //cout << "Assigned " << ctx->ID()->getText() << " = " << value << endl;
    }


  virtual void exitExpr(ExprParser::ExprContext *ctx) {
        if (ctx->signedNum()) {
            double value = stod(ctx->signedNum()->num()->getText());
            if (ctx->signedNum()->getText()[0] == '-') {
            value = -value;
            }
            evalStack.push(value);
            //cout << "Pushed number " << value << " to the stack" << endl;
        }else if (ctx->signedID()) {
            string varName = ctx->signedID()->ID()->getText();
            if (vars.find(varName) == vars.end()) {
                cerr << "Error: Variable '" << varName << "' not defined." << endl;
                exit(1);
            }
            double value = vars[varName];
            if (ctx->signedID()->getText()[0] == '-') {
                value = -value;
            }
            evalStack.push(value);
            //cout << "Pushed variable " << ctx->ID()->getText() << " with value " << value << " to the stack" << endl;
        } else if (ctx->signedExpr()) {
        double value = evalStack.top();
        evalStack.pop();
        if (ctx->signedExpr()->getText()[0] == '-') {
            value = -value;
        }
        evalStack.push(value);
        }else if (ctx->expr().size() == 2) {
            double right = evalStack.top();
            evalStack.pop();
            if (evalStack.empty()) {
                cerr << "Error: An undefined expression has been entered." << endl;
                exit(1);
            }
            
            double left = evalStack.top();
            evalStack.pop();
            char op = ctx->children[1]->getText()[0];
            double result;
            switch (op) {
            case '+':
                result = left + right;
                break;
            case '-':
                result = left - right;
                break;
            case '*':
                result = left * right;
                break;
            case '/':
                result = left / right;
                break;
            default:
                cerr << "Invalid operator" << endl;
                exit(1);
            }
            evalStack.push(result);
            //cout << "Evaluated expression: " << left << " " << op << " " << right << " = " << result << endl;
        }
    }


  virtual void exitProg(ExprParser::ProgContext *ctx) {
    for (auto result : ctx->expr()) {
        double value = evalStack.top();
        reverse_evalStack.push(value);
        evalStack.pop();
    }
    for (auto result : ctx->expr()) {
        double real_result = reverse_evalStack.top();
        cout << real_result << endl;
        reverse_evalStack.pop();
    }
}

};

int main(int argc, char *argv[]) {
  if (argc != 2) {
    cerr << "Usage: " << argv[0] << " input.txt" << endl;
    return 1;
  }

  ifstream inputFile(argv[1]);

  if (!inputFile) {
    cerr << "Error: Could not open input file." << endl;
    return 1;
  }

  ANTLRInputStream input(inputFile);
  ExprLexer lexer(&input);
  CommonTokenStream tokens(&lexer);
  ExprParser parser(&tokens);
  ParseTree *tree = parser.prog();

  ParseTreeWalker walker;
  EvalListener listener;
  walker.walk(&listener, tree);

  return 0;
}
