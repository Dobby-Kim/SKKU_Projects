
// Generated from B.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"
#include "BVisitor.h"


/**
 * This class provides an empty implementation of BVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  BBaseVisitor : public BVisitor {
public:

  virtual std::any visitProgram(BParser::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDefinition(BParser::DefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFuncdef(BParser::FuncdefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatement(BParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAutostmt(BParser::AutostmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDeclstmt(BParser::DeclstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBlockstmt(BParser::BlockstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIfstmt(BParser::IfstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWhilestmt(BParser::WhilestmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpressionstmt(BParser::ExpressionstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitReturnstmt(BParser::ReturnstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNullstmt(BParser::NullstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpr(BParser::ExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAtom(BParser::AtomContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpression(BParser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFuncinvocation(BParser::FuncinvocationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConstant(BParser::ConstantContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitName(BParser::NameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDirective(BParser::DirectiveContext *ctx) override {
    return visitChildren(ctx);
  }


};

