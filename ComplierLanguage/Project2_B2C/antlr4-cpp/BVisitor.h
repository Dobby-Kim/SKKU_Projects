
// Generated from B.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"
#include "BParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by BParser.
 */
class  BVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by BParser.
   */
    virtual std::any visitProgram(BParser::ProgramContext *context) = 0;

    virtual std::any visitDefinition(BParser::DefinitionContext *context) = 0;

    virtual std::any visitFuncdef(BParser::FuncdefContext *context) = 0;

    virtual std::any visitStatement(BParser::StatementContext *context) = 0;

    virtual std::any visitAutostmt(BParser::AutostmtContext *context) = 0;

    virtual std::any visitDeclstmt(BParser::DeclstmtContext *context) = 0;

    virtual std::any visitBlockstmt(BParser::BlockstmtContext *context) = 0;

    virtual std::any visitIfstmt(BParser::IfstmtContext *context) = 0;

    virtual std::any visitWhilestmt(BParser::WhilestmtContext *context) = 0;

    virtual std::any visitExpressionstmt(BParser::ExpressionstmtContext *context) = 0;

    virtual std::any visitReturnstmt(BParser::ReturnstmtContext *context) = 0;

    virtual std::any visitNullstmt(BParser::NullstmtContext *context) = 0;

    virtual std::any visitExpr(BParser::ExprContext *context) = 0;

    virtual std::any visitAtom(BParser::AtomContext *context) = 0;

    virtual std::any visitExpression(BParser::ExpressionContext *context) = 0;

    virtual std::any visitFuncinvocation(BParser::FuncinvocationContext *context) = 0;

    virtual std::any visitConstant(BParser::ConstantContext *context) = 0;

    virtual std::any visitName(BParser::NameContext *context) = 0;

    virtual std::any visitDirective(BParser::DirectiveContext *context) = 0;


};

