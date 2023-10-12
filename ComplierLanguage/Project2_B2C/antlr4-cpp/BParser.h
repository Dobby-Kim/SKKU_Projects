
// Generated from B.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"




class  BParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, AUTO = 6, PLUS = 7, 
    MINUS = 8, MUL = 9, DIV = 10, NOT = 11, GT = 12, GTE = 13, LT = 14, 
    LTE = 15, EQ = 16, NEQ = 17, AND = 18, OR = 19, QUEST = 20, COLON = 21, 
    SEMI = 22, IF = 23, ELSE = 24, WHILE = 25, RETURN = 26, ASSN = 27, BOOL = 28, 
    NAME = 29, INT = 30, REAL = 31, STRING = 32, CHAR = 33, SHARP_DIRECTIVE = 34, 
    BLOCKCOMMENT = 35, LINECOMMENT = 36, WS = 37
  };

  enum {
    RuleProgram = 0, RuleDefinition = 1, RuleFuncdef = 2, RuleStatement = 3, 
    RuleAutostmt = 4, RuleDeclstmt = 5, RuleBlockstmt = 6, RuleIfstmt = 7, 
    RuleWhilestmt = 8, RuleExpressionstmt = 9, RuleReturnstmt = 10, RuleNullstmt = 11, 
    RuleExpr = 12, RuleAtom = 13, RuleExpression = 14, RuleFuncinvocation = 15, 
    RuleConstant = 16, RuleName = 17, RuleDirective = 18
  };

  explicit BParser(antlr4::TokenStream *input);

  BParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~BParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class ProgramContext;
  class DefinitionContext;
  class FuncdefContext;
  class StatementContext;
  class AutostmtContext;
  class DeclstmtContext;
  class BlockstmtContext;
  class IfstmtContext;
  class WhilestmtContext;
  class ExpressionstmtContext;
  class ReturnstmtContext;
  class NullstmtContext;
  class ExprContext;
  class AtomContext;
  class ExpressionContext;
  class FuncinvocationContext;
  class ConstantContext;
  class NameContext;
  class DirectiveContext; 

  class  ProgramContext : public antlr4::ParserRuleContext {
  public:
    ProgramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    std::vector<DirectiveContext *> directive();
    DirectiveContext* directive(size_t i);
    std::vector<DefinitionContext *> definition();
    DefinitionContext* definition(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgramContext* program();

  class  DefinitionContext : public antlr4::ParserRuleContext {
  public:
    DefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AutostmtContext *autostmt();
    DeclstmtContext *declstmt();
    FuncdefContext *funcdef();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DefinitionContext* definition();

  class  FuncdefContext : public antlr4::ParserRuleContext {
  public:
    FuncdefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> AUTO();
    antlr4::tree::TerminalNode* AUTO(size_t i);
    std::vector<NameContext *> name();
    NameContext* name(size_t i);
    StatementContext *statement();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FuncdefContext* funcdef();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AutostmtContext *autostmt();
    DeclstmtContext *declstmt();
    BlockstmtContext *blockstmt();
    IfstmtContext *ifstmt();
    WhilestmtContext *whilestmt();
    ExpressionstmtContext *expressionstmt();
    ReturnstmtContext *returnstmt();
    NullstmtContext *nullstmt();
    DirectiveContext *directive();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementContext* statement();

  class  AutostmtContext : public antlr4::ParserRuleContext {
  public:
    AutostmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AUTO();
    std::vector<NameContext *> name();
    NameContext* name(size_t i);
    antlr4::tree::TerminalNode *SEMI();
    std::vector<antlr4::tree::TerminalNode *> ASSN();
    antlr4::tree::TerminalNode* ASSN(size_t i);
    std::vector<ConstantContext *> constant();
    ConstantContext* constant(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AutostmtContext* autostmt();

  class  DeclstmtContext : public antlr4::ParserRuleContext {
  public:
    DeclstmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> AUTO();
    antlr4::tree::TerminalNode* AUTO(size_t i);
    NameContext *name();
    antlr4::tree::TerminalNode *SEMI();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclstmtContext* declstmt();

  class  BlockstmtContext : public antlr4::ParserRuleContext {
  public:
    BlockstmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BlockstmtContext* blockstmt();

  class  IfstmtContext : public antlr4::ParserRuleContext {
  public:
    IfstmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    ExprContext *expr();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);
    antlr4::tree::TerminalNode *ELSE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfstmtContext* ifstmt();

  class  WhilestmtContext : public antlr4::ParserRuleContext {
  public:
    WhilestmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHILE();
    ExprContext *expr();
    StatementContext *statement();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WhilestmtContext* whilestmt();

  class  ExpressionstmtContext : public antlr4::ParserRuleContext {
  public:
    ExpressionstmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *SEMI();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionstmtContext* expressionstmt();

  class  ReturnstmtContext : public antlr4::ParserRuleContext {
  public:
    ReturnstmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RETURN();
    antlr4::tree::TerminalNode *SEMI();
    ExpressionContext *expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ReturnstmtContext* returnstmt();

  class  NullstmtContext : public antlr4::ParserRuleContext {
  public:
    NullstmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SEMI();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NullstmtContext* nullstmt();

  class  ExprContext : public antlr4::ParserRuleContext {
  public:
    ExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AtomContext *atom();
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *MINUS();
    antlr4::tree::TerminalNode *NOT();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *MUL();
    antlr4::tree::TerminalNode *DIV();
    antlr4::tree::TerminalNode *GT();
    antlr4::tree::TerminalNode *GTE();
    antlr4::tree::TerminalNode *LT();
    antlr4::tree::TerminalNode *LTE();
    antlr4::tree::TerminalNode *EQ();
    antlr4::tree::TerminalNode *NEQ();
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *OR();
    antlr4::tree::TerminalNode *QUEST();
    antlr4::tree::TerminalNode *COLON();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExprContext* expr();
  ExprContext* expr(int precedence);
  class  AtomContext : public antlr4::ParserRuleContext {
  public:
    AtomContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NameContext *name();
    ConstantContext *constant();
    ExpressionContext *expression();
    FuncinvocationContext *funcinvocation();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AtomContext* atom();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExprContext *expr();
    NameContext *name();
    antlr4::tree::TerminalNode *ASSN();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionContext* expression();

  class  FuncinvocationContext : public antlr4::ParserRuleContext {
  public:
    FuncinvocationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NameContext *name();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FuncinvocationContext* funcinvocation();

  class  ConstantContext : public antlr4::ParserRuleContext {
  public:
    ConstantContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INT();
    antlr4::tree::TerminalNode *REAL();
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *BOOL();
    antlr4::tree::TerminalNode *CHAR();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstantContext* constant();

  class  NameContext : public antlr4::ParserRuleContext {
  public:
    NameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NAME();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NameContext* name();

  class  DirectiveContext : public antlr4::ParserRuleContext {
  public:
    DirectiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHARP_DIRECTIVE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DirectiveContext* directive();


  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool exprSempred(ExprContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

