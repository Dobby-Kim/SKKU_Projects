
// Generated from B.g4 by ANTLR 4.11.1


#include "BVisitor.h"

#include "BParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct BParserStaticData final {
  BParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  BParserStaticData(const BParserStaticData&) = delete;
  BParserStaticData(BParserStaticData&&) = delete;
  BParserStaticData& operator=(const BParserStaticData&) = delete;
  BParserStaticData& operator=(BParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag bParserOnceFlag;
BParserStaticData *bParserStaticData = nullptr;

void bParserInitialize() {
  assert(bParserStaticData == nullptr);
  auto staticData = std::make_unique<BParserStaticData>(
    std::vector<std::string>{
      "program", "definition", "funcdef", "statement", "autostmt", "declstmt", 
      "blockstmt", "ifstmt", "whilestmt", "expressionstmt", "returnstmt", 
      "nullstmt", "expr", "atom", "expression", "funcinvocation", "constant", 
      "name", "directive"
    },
    std::vector<std::string>{
      "", "'('", "','", "')'", "'{'", "'}'", "'auto'", "'+'", "'-'", "'*'", 
      "'/'", "'!'", "'>'", "'>='", "'<'", "'<='", "'=='", "'!='", "'&&'", 
      "'||'", "'\\u003F'", "':'", "';'", "'if'", "'else'", "'while'", "'return'", 
      "'='"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "AUTO", "PLUS", "MINUS", "MUL", "DIV", "NOT", 
      "GT", "GTE", "LT", "LTE", "EQ", "NEQ", "AND", "OR", "QUEST", "COLON", 
      "SEMI", "IF", "ELSE", "WHILE", "RETURN", "ASSN", "BOOL", "NAME", "INT", 
      "REAL", "STRING", "CHAR", "SHARP_DIRECTIVE", "BLOCKCOMMENT", "LINECOMMENT", 
      "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,37,227,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,1,0,1,0,5,0,41,8,0,10,0,12,
  	0,44,9,0,1,0,1,0,1,1,1,1,1,1,3,1,51,8,1,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,
  	2,5,2,61,8,2,10,2,12,2,64,9,2,3,2,66,8,2,1,2,1,2,1,2,1,3,1,3,1,3,1,3,
  	1,3,1,3,1,3,1,3,1,3,3,3,80,8,3,1,4,1,4,1,4,1,4,3,4,86,8,4,1,4,1,4,1,4,
  	1,4,3,4,92,8,4,5,4,94,8,4,10,4,12,4,97,9,4,1,4,1,4,1,5,1,5,1,5,1,5,1,
  	5,1,5,5,5,107,8,5,10,5,12,5,110,9,5,3,5,112,8,5,1,5,1,5,1,5,1,6,1,6,5,
  	6,119,8,6,10,6,12,6,122,9,6,1,6,1,6,1,7,1,7,1,7,1,7,1,7,1,7,1,7,3,7,133,
  	8,7,1,8,1,8,1,8,1,8,1,8,1,8,1,9,1,9,1,9,1,10,1,10,1,10,1,10,1,10,1,10,
  	3,10,150,8,10,1,10,1,10,1,11,1,11,1,12,1,12,3,12,158,8,12,1,12,1,12,1,
  	12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,
  	12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,5,12,186,8,12,10,12,12,
  	12,189,9,12,1,13,1,13,1,13,1,13,1,13,1,13,1,13,3,13,198,8,13,1,14,1,14,
  	1,14,3,14,203,8,14,1,14,1,14,1,15,1,15,1,15,1,15,1,15,5,15,212,8,15,10,
  	15,12,15,215,9,15,3,15,217,8,15,1,15,1,15,1,16,1,16,1,17,1,17,1,18,1,
  	18,1,18,0,1,24,19,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,
  	0,6,2,0,7,8,11,11,1,0,9,10,1,0,7,8,1,0,12,15,1,0,16,17,2,0,28,28,30,33,
  	244,0,42,1,0,0,0,2,50,1,0,0,0,4,52,1,0,0,0,6,79,1,0,0,0,8,81,1,0,0,0,
  	10,100,1,0,0,0,12,116,1,0,0,0,14,125,1,0,0,0,16,134,1,0,0,0,18,140,1,
  	0,0,0,20,143,1,0,0,0,22,153,1,0,0,0,24,155,1,0,0,0,26,197,1,0,0,0,28,
  	202,1,0,0,0,30,206,1,0,0,0,32,220,1,0,0,0,34,222,1,0,0,0,36,224,1,0,0,
  	0,38,41,3,36,18,0,39,41,3,2,1,0,40,38,1,0,0,0,40,39,1,0,0,0,41,44,1,0,
  	0,0,42,40,1,0,0,0,42,43,1,0,0,0,43,45,1,0,0,0,44,42,1,0,0,0,45,46,5,0,
  	0,1,46,1,1,0,0,0,47,51,3,8,4,0,48,51,3,10,5,0,49,51,3,4,2,0,50,47,1,0,
  	0,0,50,48,1,0,0,0,50,49,1,0,0,0,51,3,1,0,0,0,52,53,5,6,0,0,53,54,3,34,
  	17,0,54,65,5,1,0,0,55,56,5,6,0,0,56,62,3,34,17,0,57,58,5,2,0,0,58,59,
  	5,6,0,0,59,61,3,34,17,0,60,57,1,0,0,0,61,64,1,0,0,0,62,60,1,0,0,0,62,
  	63,1,0,0,0,63,66,1,0,0,0,64,62,1,0,0,0,65,55,1,0,0,0,65,66,1,0,0,0,66,
  	67,1,0,0,0,67,68,5,3,0,0,68,69,3,6,3,0,69,5,1,0,0,0,70,80,3,8,4,0,71,
  	80,3,10,5,0,72,80,3,12,6,0,73,80,3,14,7,0,74,80,3,16,8,0,75,80,3,18,9,
  	0,76,80,3,20,10,0,77,80,3,22,11,0,78,80,3,36,18,0,79,70,1,0,0,0,79,71,
  	1,0,0,0,79,72,1,0,0,0,79,73,1,0,0,0,79,74,1,0,0,0,79,75,1,0,0,0,79,76,
  	1,0,0,0,79,77,1,0,0,0,79,78,1,0,0,0,80,7,1,0,0,0,81,82,5,6,0,0,82,85,
  	3,34,17,0,83,84,5,27,0,0,84,86,3,32,16,0,85,83,1,0,0,0,85,86,1,0,0,0,
  	86,95,1,0,0,0,87,88,5,2,0,0,88,91,3,34,17,0,89,90,5,27,0,0,90,92,3,32,
  	16,0,91,89,1,0,0,0,91,92,1,0,0,0,92,94,1,0,0,0,93,87,1,0,0,0,94,97,1,
  	0,0,0,95,93,1,0,0,0,95,96,1,0,0,0,96,98,1,0,0,0,97,95,1,0,0,0,98,99,5,
  	22,0,0,99,9,1,0,0,0,100,101,5,6,0,0,101,102,3,34,17,0,102,111,5,1,0,0,
  	103,108,5,6,0,0,104,105,5,2,0,0,105,107,5,6,0,0,106,104,1,0,0,0,107,110,
  	1,0,0,0,108,106,1,0,0,0,108,109,1,0,0,0,109,112,1,0,0,0,110,108,1,0,0,
  	0,111,103,1,0,0,0,111,112,1,0,0,0,112,113,1,0,0,0,113,114,5,3,0,0,114,
  	115,5,22,0,0,115,11,1,0,0,0,116,120,5,4,0,0,117,119,3,6,3,0,118,117,1,
  	0,0,0,119,122,1,0,0,0,120,118,1,0,0,0,120,121,1,0,0,0,121,123,1,0,0,0,
  	122,120,1,0,0,0,123,124,5,5,0,0,124,13,1,0,0,0,125,126,5,23,0,0,126,127,
  	5,1,0,0,127,128,3,24,12,0,128,129,5,3,0,0,129,132,3,6,3,0,130,131,5,24,
  	0,0,131,133,3,6,3,0,132,130,1,0,0,0,132,133,1,0,0,0,133,15,1,0,0,0,134,
  	135,5,25,0,0,135,136,5,1,0,0,136,137,3,24,12,0,137,138,5,3,0,0,138,139,
  	3,6,3,0,139,17,1,0,0,0,140,141,3,28,14,0,141,142,5,22,0,0,142,19,1,0,
  	0,0,143,149,5,26,0,0,144,150,3,28,14,0,145,146,5,1,0,0,146,147,3,28,14,
  	0,147,148,5,3,0,0,148,150,1,0,0,0,149,144,1,0,0,0,149,145,1,0,0,0,149,
  	150,1,0,0,0,150,151,1,0,0,0,151,152,5,22,0,0,152,21,1,0,0,0,153,154,5,
  	22,0,0,154,23,1,0,0,0,155,157,6,12,-1,0,156,158,7,0,0,0,157,156,1,0,0,
  	0,157,158,1,0,0,0,158,159,1,0,0,0,159,160,3,26,13,0,160,187,1,0,0,0,161,
  	162,10,7,0,0,162,163,7,1,0,0,163,186,3,24,12,8,164,165,10,6,0,0,165,166,
  	7,2,0,0,166,186,3,24,12,7,167,168,10,5,0,0,168,169,7,3,0,0,169,186,3,
  	24,12,6,170,171,10,4,0,0,171,172,7,4,0,0,172,186,3,24,12,5,173,174,10,
  	3,0,0,174,175,5,18,0,0,175,186,3,24,12,4,176,177,10,2,0,0,177,178,5,19,
  	0,0,178,186,3,24,12,3,179,180,10,1,0,0,180,181,5,20,0,0,181,182,3,24,
  	12,0,182,183,5,21,0,0,183,184,3,24,12,2,184,186,1,0,0,0,185,161,1,0,0,
  	0,185,164,1,0,0,0,185,167,1,0,0,0,185,170,1,0,0,0,185,173,1,0,0,0,185,
  	176,1,0,0,0,185,179,1,0,0,0,186,189,1,0,0,0,187,185,1,0,0,0,187,188,1,
  	0,0,0,188,25,1,0,0,0,189,187,1,0,0,0,190,198,3,34,17,0,191,198,3,32,16,
  	0,192,193,5,1,0,0,193,194,3,28,14,0,194,195,5,3,0,0,195,198,1,0,0,0,196,
  	198,3,30,15,0,197,190,1,0,0,0,197,191,1,0,0,0,197,192,1,0,0,0,197,196,
  	1,0,0,0,198,27,1,0,0,0,199,200,3,34,17,0,200,201,5,27,0,0,201,203,1,0,
  	0,0,202,199,1,0,0,0,202,203,1,0,0,0,203,204,1,0,0,0,204,205,3,24,12,0,
  	205,29,1,0,0,0,206,207,3,34,17,0,207,216,5,1,0,0,208,213,3,24,12,0,209,
  	210,5,2,0,0,210,212,3,24,12,0,211,209,1,0,0,0,212,215,1,0,0,0,213,211,
  	1,0,0,0,213,214,1,0,0,0,214,217,1,0,0,0,215,213,1,0,0,0,216,208,1,0,0,
  	0,216,217,1,0,0,0,217,218,1,0,0,0,218,219,5,3,0,0,219,31,1,0,0,0,220,
  	221,7,5,0,0,221,33,1,0,0,0,222,223,5,29,0,0,223,35,1,0,0,0,224,225,5,
  	34,0,0,225,37,1,0,0,0,21,40,42,50,62,65,79,85,91,95,108,111,120,132,149,
  	157,185,187,197,202,213,216
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  bParserStaticData = staticData.release();
}

}

BParser::BParser(TokenStream *input) : BParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

BParser::BParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  BParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *bParserStaticData->atn, bParserStaticData->decisionToDFA, bParserStaticData->sharedContextCache, options);
}

BParser::~BParser() {
  delete _interpreter;
}

const atn::ATN& BParser::getATN() const {
  return *bParserStaticData->atn;
}

std::string BParser::getGrammarFileName() const {
  return "B.g4";
}

const std::vector<std::string>& BParser::getRuleNames() const {
  return bParserStaticData->ruleNames;
}

const dfa::Vocabulary& BParser::getVocabulary() const {
  return bParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView BParser::getSerializedATN() const {
  return bParserStaticData->serializedATN;
}


//----------------- ProgramContext ------------------------------------------------------------------

BParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BParser::ProgramContext::EOF() {
  return getToken(BParser::EOF, 0);
}

std::vector<BParser::DirectiveContext *> BParser::ProgramContext::directive() {
  return getRuleContexts<BParser::DirectiveContext>();
}

BParser::DirectiveContext* BParser::ProgramContext::directive(size_t i) {
  return getRuleContext<BParser::DirectiveContext>(i);
}

std::vector<BParser::DefinitionContext *> BParser::ProgramContext::definition() {
  return getRuleContexts<BParser::DefinitionContext>();
}

BParser::DefinitionContext* BParser::ProgramContext::definition(size_t i) {
  return getRuleContext<BParser::DefinitionContext>(i);
}


size_t BParser::ProgramContext::getRuleIndex() const {
  return BParser::RuleProgram;
}


std::any BParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

BParser::ProgramContext* BParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, BParser::RuleProgram);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(42);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BParser::AUTO

    || _la == BParser::SHARP_DIRECTIVE) {
      setState(40);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case BParser::SHARP_DIRECTIVE: {
          setState(38);
          directive();
          break;
        }

        case BParser::AUTO: {
          setState(39);
          definition();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(44);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(45);
    match(BParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DefinitionContext ------------------------------------------------------------------

BParser::DefinitionContext::DefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BParser::AutostmtContext* BParser::DefinitionContext::autostmt() {
  return getRuleContext<BParser::AutostmtContext>(0);
}

BParser::DeclstmtContext* BParser::DefinitionContext::declstmt() {
  return getRuleContext<BParser::DeclstmtContext>(0);
}

BParser::FuncdefContext* BParser::DefinitionContext::funcdef() {
  return getRuleContext<BParser::FuncdefContext>(0);
}


size_t BParser::DefinitionContext::getRuleIndex() const {
  return BParser::RuleDefinition;
}


std::any BParser::DefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BVisitor*>(visitor))
    return parserVisitor->visitDefinition(this);
  else
    return visitor->visitChildren(this);
}

BParser::DefinitionContext* BParser::definition() {
  DefinitionContext *_localctx = _tracker.createInstance<DefinitionContext>(_ctx, getState());
  enterRule(_localctx, 2, BParser::RuleDefinition);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(50);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(47);
      autostmt();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(48);
      declstmt();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(49);
      funcdef();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncdefContext ------------------------------------------------------------------

BParser::FuncdefContext::FuncdefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> BParser::FuncdefContext::AUTO() {
  return getTokens(BParser::AUTO);
}

tree::TerminalNode* BParser::FuncdefContext::AUTO(size_t i) {
  return getToken(BParser::AUTO, i);
}

std::vector<BParser::NameContext *> BParser::FuncdefContext::name() {
  return getRuleContexts<BParser::NameContext>();
}

BParser::NameContext* BParser::FuncdefContext::name(size_t i) {
  return getRuleContext<BParser::NameContext>(i);
}

BParser::StatementContext* BParser::FuncdefContext::statement() {
  return getRuleContext<BParser::StatementContext>(0);
}


size_t BParser::FuncdefContext::getRuleIndex() const {
  return BParser::RuleFuncdef;
}


std::any BParser::FuncdefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BVisitor*>(visitor))
    return parserVisitor->visitFuncdef(this);
  else
    return visitor->visitChildren(this);
}

BParser::FuncdefContext* BParser::funcdef() {
  FuncdefContext *_localctx = _tracker.createInstance<FuncdefContext>(_ctx, getState());
  enterRule(_localctx, 4, BParser::RuleFuncdef);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(52);
    match(BParser::AUTO);
    setState(53);
    name();
    setState(54);
    match(BParser::T__0);
    setState(65);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BParser::AUTO) {
      setState(55);
      match(BParser::AUTO);
      setState(56);
      name();
      setState(62);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == BParser::T__1) {
        setState(57);
        match(BParser::T__1);
        setState(58);
        match(BParser::AUTO);
        setState(59);
        name();
        setState(64);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(67);
    match(BParser::T__2);
    setState(68);
    statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

BParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BParser::AutostmtContext* BParser::StatementContext::autostmt() {
  return getRuleContext<BParser::AutostmtContext>(0);
}

BParser::DeclstmtContext* BParser::StatementContext::declstmt() {
  return getRuleContext<BParser::DeclstmtContext>(0);
}

BParser::BlockstmtContext* BParser::StatementContext::blockstmt() {
  return getRuleContext<BParser::BlockstmtContext>(0);
}

BParser::IfstmtContext* BParser::StatementContext::ifstmt() {
  return getRuleContext<BParser::IfstmtContext>(0);
}

BParser::WhilestmtContext* BParser::StatementContext::whilestmt() {
  return getRuleContext<BParser::WhilestmtContext>(0);
}

BParser::ExpressionstmtContext* BParser::StatementContext::expressionstmt() {
  return getRuleContext<BParser::ExpressionstmtContext>(0);
}

BParser::ReturnstmtContext* BParser::StatementContext::returnstmt() {
  return getRuleContext<BParser::ReturnstmtContext>(0);
}

BParser::NullstmtContext* BParser::StatementContext::nullstmt() {
  return getRuleContext<BParser::NullstmtContext>(0);
}

BParser::DirectiveContext* BParser::StatementContext::directive() {
  return getRuleContext<BParser::DirectiveContext>(0);
}


size_t BParser::StatementContext::getRuleIndex() const {
  return BParser::RuleStatement;
}


std::any BParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

BParser::StatementContext* BParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 6, BParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(79);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(70);
      autostmt();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(71);
      declstmt();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(72);
      blockstmt();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(73);
      ifstmt();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(74);
      whilestmt();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(75);
      expressionstmt();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(76);
      returnstmt();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(77);
      nullstmt();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(78);
      directive();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AutostmtContext ------------------------------------------------------------------

BParser::AutostmtContext::AutostmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BParser::AutostmtContext::AUTO() {
  return getToken(BParser::AUTO, 0);
}

std::vector<BParser::NameContext *> BParser::AutostmtContext::name() {
  return getRuleContexts<BParser::NameContext>();
}

BParser::NameContext* BParser::AutostmtContext::name(size_t i) {
  return getRuleContext<BParser::NameContext>(i);
}

tree::TerminalNode* BParser::AutostmtContext::SEMI() {
  return getToken(BParser::SEMI, 0);
}

std::vector<tree::TerminalNode *> BParser::AutostmtContext::ASSN() {
  return getTokens(BParser::ASSN);
}

tree::TerminalNode* BParser::AutostmtContext::ASSN(size_t i) {
  return getToken(BParser::ASSN, i);
}

std::vector<BParser::ConstantContext *> BParser::AutostmtContext::constant() {
  return getRuleContexts<BParser::ConstantContext>();
}

BParser::ConstantContext* BParser::AutostmtContext::constant(size_t i) {
  return getRuleContext<BParser::ConstantContext>(i);
}


size_t BParser::AutostmtContext::getRuleIndex() const {
  return BParser::RuleAutostmt;
}


std::any BParser::AutostmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BVisitor*>(visitor))
    return parserVisitor->visitAutostmt(this);
  else
    return visitor->visitChildren(this);
}

BParser::AutostmtContext* BParser::autostmt() {
  AutostmtContext *_localctx = _tracker.createInstance<AutostmtContext>(_ctx, getState());
  enterRule(_localctx, 8, BParser::RuleAutostmt);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(81);
    match(BParser::AUTO);
    setState(82);
    name();
    setState(85);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BParser::ASSN) {
      setState(83);
      match(BParser::ASSN);
      setState(84);
      constant();
    }
    setState(95);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BParser::T__1) {
      setState(87);
      match(BParser::T__1);
      setState(88);
      name();
      setState(91);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == BParser::ASSN) {
        setState(89);
        match(BParser::ASSN);
        setState(90);
        constant();
      }
      setState(97);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(98);
    match(BParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclstmtContext ------------------------------------------------------------------

BParser::DeclstmtContext::DeclstmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> BParser::DeclstmtContext::AUTO() {
  return getTokens(BParser::AUTO);
}

tree::TerminalNode* BParser::DeclstmtContext::AUTO(size_t i) {
  return getToken(BParser::AUTO, i);
}

BParser::NameContext* BParser::DeclstmtContext::name() {
  return getRuleContext<BParser::NameContext>(0);
}

tree::TerminalNode* BParser::DeclstmtContext::SEMI() {
  return getToken(BParser::SEMI, 0);
}


size_t BParser::DeclstmtContext::getRuleIndex() const {
  return BParser::RuleDeclstmt;
}


std::any BParser::DeclstmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BVisitor*>(visitor))
    return parserVisitor->visitDeclstmt(this);
  else
    return visitor->visitChildren(this);
}

BParser::DeclstmtContext* BParser::declstmt() {
  DeclstmtContext *_localctx = _tracker.createInstance<DeclstmtContext>(_ctx, getState());
  enterRule(_localctx, 10, BParser::RuleDeclstmt);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(100);
    match(BParser::AUTO);
    setState(101);
    name();
    setState(102);
    match(BParser::T__0);
    setState(111);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BParser::AUTO) {
      setState(103);
      match(BParser::AUTO);
      setState(108);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == BParser::T__1) {
        setState(104);
        match(BParser::T__1);
        setState(105);
        match(BParser::AUTO);
        setState(110);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(113);
    match(BParser::T__2);
    setState(114);
    match(BParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockstmtContext ------------------------------------------------------------------

BParser::BlockstmtContext::BlockstmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<BParser::StatementContext *> BParser::BlockstmtContext::statement() {
  return getRuleContexts<BParser::StatementContext>();
}

BParser::StatementContext* BParser::BlockstmtContext::statement(size_t i) {
  return getRuleContext<BParser::StatementContext>(i);
}


size_t BParser::BlockstmtContext::getRuleIndex() const {
  return BParser::RuleBlockstmt;
}


std::any BParser::BlockstmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BVisitor*>(visitor))
    return parserVisitor->visitBlockstmt(this);
  else
    return visitor->visitChildren(this);
}

BParser::BlockstmtContext* BParser::blockstmt() {
  BlockstmtContext *_localctx = _tracker.createInstance<BlockstmtContext>(_ctx, getState());
  enterRule(_localctx, 12, BParser::RuleBlockstmt);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(116);
    match(BParser::T__3);
    setState(120);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 34204551634) != 0) {
      setState(117);
      statement();
      setState(122);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(123);
    match(BParser::T__4);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfstmtContext ------------------------------------------------------------------

BParser::IfstmtContext::IfstmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BParser::IfstmtContext::IF() {
  return getToken(BParser::IF, 0);
}

BParser::ExprContext* BParser::IfstmtContext::expr() {
  return getRuleContext<BParser::ExprContext>(0);
}

std::vector<BParser::StatementContext *> BParser::IfstmtContext::statement() {
  return getRuleContexts<BParser::StatementContext>();
}

BParser::StatementContext* BParser::IfstmtContext::statement(size_t i) {
  return getRuleContext<BParser::StatementContext>(i);
}

tree::TerminalNode* BParser::IfstmtContext::ELSE() {
  return getToken(BParser::ELSE, 0);
}


size_t BParser::IfstmtContext::getRuleIndex() const {
  return BParser::RuleIfstmt;
}


std::any BParser::IfstmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BVisitor*>(visitor))
    return parserVisitor->visitIfstmt(this);
  else
    return visitor->visitChildren(this);
}

BParser::IfstmtContext* BParser::ifstmt() {
  IfstmtContext *_localctx = _tracker.createInstance<IfstmtContext>(_ctx, getState());
  enterRule(_localctx, 14, BParser::RuleIfstmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(125);
    match(BParser::IF);
    setState(126);
    match(BParser::T__0);
    setState(127);
    expr(0);
    setState(128);
    match(BParser::T__2);
    setState(129);
    statement();
    setState(132);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
    case 1: {
      setState(130);
      match(BParser::ELSE);
      setState(131);
      statement();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhilestmtContext ------------------------------------------------------------------

BParser::WhilestmtContext::WhilestmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BParser::WhilestmtContext::WHILE() {
  return getToken(BParser::WHILE, 0);
}

BParser::ExprContext* BParser::WhilestmtContext::expr() {
  return getRuleContext<BParser::ExprContext>(0);
}

BParser::StatementContext* BParser::WhilestmtContext::statement() {
  return getRuleContext<BParser::StatementContext>(0);
}


size_t BParser::WhilestmtContext::getRuleIndex() const {
  return BParser::RuleWhilestmt;
}


std::any BParser::WhilestmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BVisitor*>(visitor))
    return parserVisitor->visitWhilestmt(this);
  else
    return visitor->visitChildren(this);
}

BParser::WhilestmtContext* BParser::whilestmt() {
  WhilestmtContext *_localctx = _tracker.createInstance<WhilestmtContext>(_ctx, getState());
  enterRule(_localctx, 16, BParser::RuleWhilestmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(134);
    match(BParser::WHILE);
    setState(135);
    match(BParser::T__0);
    setState(136);
    expr(0);
    setState(137);
    match(BParser::T__2);
    setState(138);
    statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionstmtContext ------------------------------------------------------------------

BParser::ExpressionstmtContext::ExpressionstmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BParser::ExpressionContext* BParser::ExpressionstmtContext::expression() {
  return getRuleContext<BParser::ExpressionContext>(0);
}

tree::TerminalNode* BParser::ExpressionstmtContext::SEMI() {
  return getToken(BParser::SEMI, 0);
}


size_t BParser::ExpressionstmtContext::getRuleIndex() const {
  return BParser::RuleExpressionstmt;
}


std::any BParser::ExpressionstmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BVisitor*>(visitor))
    return parserVisitor->visitExpressionstmt(this);
  else
    return visitor->visitChildren(this);
}

BParser::ExpressionstmtContext* BParser::expressionstmt() {
  ExpressionstmtContext *_localctx = _tracker.createInstance<ExpressionstmtContext>(_ctx, getState());
  enterRule(_localctx, 18, BParser::RuleExpressionstmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(140);
    expression();
    setState(141);
    match(BParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReturnstmtContext ------------------------------------------------------------------

BParser::ReturnstmtContext::ReturnstmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BParser::ReturnstmtContext::RETURN() {
  return getToken(BParser::RETURN, 0);
}

tree::TerminalNode* BParser::ReturnstmtContext::SEMI() {
  return getToken(BParser::SEMI, 0);
}

BParser::ExpressionContext* BParser::ReturnstmtContext::expression() {
  return getRuleContext<BParser::ExpressionContext>(0);
}


size_t BParser::ReturnstmtContext::getRuleIndex() const {
  return BParser::RuleReturnstmt;
}


std::any BParser::ReturnstmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BVisitor*>(visitor))
    return parserVisitor->visitReturnstmt(this);
  else
    return visitor->visitChildren(this);
}

BParser::ReturnstmtContext* BParser::returnstmt() {
  ReturnstmtContext *_localctx = _tracker.createInstance<ReturnstmtContext>(_ctx, getState());
  enterRule(_localctx, 20, BParser::RuleReturnstmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(143);
    match(BParser::RETURN);
    setState(149);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
    case 1: {
      setState(144);
      expression();
      break;
    }

    case 2: {
      setState(145);
      match(BParser::T__0);
      setState(146);
      expression();
      setState(147);
      match(BParser::T__2);
      break;
    }

    default:
      break;
    }
    setState(151);
    match(BParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NullstmtContext ------------------------------------------------------------------

BParser::NullstmtContext::NullstmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BParser::NullstmtContext::SEMI() {
  return getToken(BParser::SEMI, 0);
}


size_t BParser::NullstmtContext::getRuleIndex() const {
  return BParser::RuleNullstmt;
}


std::any BParser::NullstmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BVisitor*>(visitor))
    return parserVisitor->visitNullstmt(this);
  else
    return visitor->visitChildren(this);
}

BParser::NullstmtContext* BParser::nullstmt() {
  NullstmtContext *_localctx = _tracker.createInstance<NullstmtContext>(_ctx, getState());
  enterRule(_localctx, 22, BParser::RuleNullstmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(153);
    match(BParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

BParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BParser::AtomContext* BParser::ExprContext::atom() {
  return getRuleContext<BParser::AtomContext>(0);
}

tree::TerminalNode* BParser::ExprContext::PLUS() {
  return getToken(BParser::PLUS, 0);
}

tree::TerminalNode* BParser::ExprContext::MINUS() {
  return getToken(BParser::MINUS, 0);
}

tree::TerminalNode* BParser::ExprContext::NOT() {
  return getToken(BParser::NOT, 0);
}

std::vector<BParser::ExprContext *> BParser::ExprContext::expr() {
  return getRuleContexts<BParser::ExprContext>();
}

BParser::ExprContext* BParser::ExprContext::expr(size_t i) {
  return getRuleContext<BParser::ExprContext>(i);
}

tree::TerminalNode* BParser::ExprContext::MUL() {
  return getToken(BParser::MUL, 0);
}

tree::TerminalNode* BParser::ExprContext::DIV() {
  return getToken(BParser::DIV, 0);
}

tree::TerminalNode* BParser::ExprContext::GT() {
  return getToken(BParser::GT, 0);
}

tree::TerminalNode* BParser::ExprContext::GTE() {
  return getToken(BParser::GTE, 0);
}

tree::TerminalNode* BParser::ExprContext::LT() {
  return getToken(BParser::LT, 0);
}

tree::TerminalNode* BParser::ExprContext::LTE() {
  return getToken(BParser::LTE, 0);
}

tree::TerminalNode* BParser::ExprContext::EQ() {
  return getToken(BParser::EQ, 0);
}

tree::TerminalNode* BParser::ExprContext::NEQ() {
  return getToken(BParser::NEQ, 0);
}

tree::TerminalNode* BParser::ExprContext::AND() {
  return getToken(BParser::AND, 0);
}

tree::TerminalNode* BParser::ExprContext::OR() {
  return getToken(BParser::OR, 0);
}

tree::TerminalNode* BParser::ExprContext::QUEST() {
  return getToken(BParser::QUEST, 0);
}

tree::TerminalNode* BParser::ExprContext::COLON() {
  return getToken(BParser::COLON, 0);
}


size_t BParser::ExprContext::getRuleIndex() const {
  return BParser::RuleExpr;
}


std::any BParser::ExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BVisitor*>(visitor))
    return parserVisitor->visitExpr(this);
  else
    return visitor->visitChildren(this);
}


BParser::ExprContext* BParser::expr() {
   return expr(0);
}

BParser::ExprContext* BParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  BParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  BParser::ExprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 24;
  enterRecursionRule(_localctx, 24, BParser::RuleExpr, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(157);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 2432) != 0) {
      setState(156);
      _la = _input->LA(1);
      if (!(((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 2432) != 0)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
    }
    setState(159);
    atom();
    _ctx->stop = _input->LT(-1);
    setState(187);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(185);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(161);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(162);
          _la = _input->LA(1);
          if (!(_la == BParser::MUL

          || _la == BParser::DIV)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(163);
          expr(8);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(164);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(165);
          _la = _input->LA(1);
          if (!(_la == BParser::PLUS

          || _la == BParser::MINUS)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(166);
          expr(7);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(167);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(168);
          _la = _input->LA(1);
          if (!(((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 61440) != 0)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(169);
          expr(6);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(170);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(171);
          _la = _input->LA(1);
          if (!(_la == BParser::EQ

          || _la == BParser::NEQ)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(172);
          expr(5);
          break;
        }

        case 5: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(173);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(174);
          match(BParser::AND);
          setState(175);
          expr(4);
          break;
        }

        case 6: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(176);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(177);
          match(BParser::OR);
          setState(178);
          expr(3);
          break;
        }

        case 7: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(179);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(180);
          match(BParser::QUEST);
          setState(181);
          expr(0);
          setState(182);
          match(BParser::COLON);
          setState(183);
          expr(2);
          break;
        }

        default:
          break;
        } 
      }
      setState(189);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- AtomContext ------------------------------------------------------------------

BParser::AtomContext::AtomContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BParser::NameContext* BParser::AtomContext::name() {
  return getRuleContext<BParser::NameContext>(0);
}

BParser::ConstantContext* BParser::AtomContext::constant() {
  return getRuleContext<BParser::ConstantContext>(0);
}

BParser::ExpressionContext* BParser::AtomContext::expression() {
  return getRuleContext<BParser::ExpressionContext>(0);
}

BParser::FuncinvocationContext* BParser::AtomContext::funcinvocation() {
  return getRuleContext<BParser::FuncinvocationContext>(0);
}


size_t BParser::AtomContext::getRuleIndex() const {
  return BParser::RuleAtom;
}


std::any BParser::AtomContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BVisitor*>(visitor))
    return parserVisitor->visitAtom(this);
  else
    return visitor->visitChildren(this);
}

BParser::AtomContext* BParser::atom() {
  AtomContext *_localctx = _tracker.createInstance<AtomContext>(_ctx, getState());
  enterRule(_localctx, 26, BParser::RuleAtom);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(197);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(190);
      name();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(191);
      constant();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(192);
      match(BParser::T__0);
      setState(193);
      expression();
      setState(194);
      match(BParser::T__2);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(196);
      funcinvocation();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

BParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BParser::ExprContext* BParser::ExpressionContext::expr() {
  return getRuleContext<BParser::ExprContext>(0);
}

BParser::NameContext* BParser::ExpressionContext::name() {
  return getRuleContext<BParser::NameContext>(0);
}

tree::TerminalNode* BParser::ExpressionContext::ASSN() {
  return getToken(BParser::ASSN, 0);
}


size_t BParser::ExpressionContext::getRuleIndex() const {
  return BParser::RuleExpression;
}


std::any BParser::ExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BVisitor*>(visitor))
    return parserVisitor->visitExpression(this);
  else
    return visitor->visitChildren(this);
}

BParser::ExpressionContext* BParser::expression() {
  ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, getState());
  enterRule(_localctx, 28, BParser::RuleExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(202);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
    case 1: {
      setState(199);
      name();
      setState(200);
      match(BParser::ASSN);
      break;
    }

    default:
      break;
    }
    setState(204);
    expr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncinvocationContext ------------------------------------------------------------------

BParser::FuncinvocationContext::FuncinvocationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BParser::NameContext* BParser::FuncinvocationContext::name() {
  return getRuleContext<BParser::NameContext>(0);
}

std::vector<BParser::ExprContext *> BParser::FuncinvocationContext::expr() {
  return getRuleContexts<BParser::ExprContext>();
}

BParser::ExprContext* BParser::FuncinvocationContext::expr(size_t i) {
  return getRuleContext<BParser::ExprContext>(i);
}


size_t BParser::FuncinvocationContext::getRuleIndex() const {
  return BParser::RuleFuncinvocation;
}


std::any BParser::FuncinvocationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BVisitor*>(visitor))
    return parserVisitor->visitFuncinvocation(this);
  else
    return visitor->visitChildren(this);
}

BParser::FuncinvocationContext* BParser::funcinvocation() {
  FuncinvocationContext *_localctx = _tracker.createInstance<FuncinvocationContext>(_ctx, getState());
  enterRule(_localctx, 30, BParser::RuleFuncinvocation);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(206);
    name();
    setState(207);
    match(BParser::T__0);
    setState(216);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 16911436162) != 0) {
      setState(208);
      expr(0);
      setState(213);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == BParser::T__1) {
        setState(209);
        match(BParser::T__1);
        setState(210);
        expr(0);
        setState(215);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(218);
    match(BParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstantContext ------------------------------------------------------------------

BParser::ConstantContext::ConstantContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BParser::ConstantContext::INT() {
  return getToken(BParser::INT, 0);
}

tree::TerminalNode* BParser::ConstantContext::REAL() {
  return getToken(BParser::REAL, 0);
}

tree::TerminalNode* BParser::ConstantContext::STRING() {
  return getToken(BParser::STRING, 0);
}

tree::TerminalNode* BParser::ConstantContext::BOOL() {
  return getToken(BParser::BOOL, 0);
}

tree::TerminalNode* BParser::ConstantContext::CHAR() {
  return getToken(BParser::CHAR, 0);
}


size_t BParser::ConstantContext::getRuleIndex() const {
  return BParser::RuleConstant;
}


std::any BParser::ConstantContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BVisitor*>(visitor))
    return parserVisitor->visitConstant(this);
  else
    return visitor->visitChildren(this);
}

BParser::ConstantContext* BParser::constant() {
  ConstantContext *_localctx = _tracker.createInstance<ConstantContext>(_ctx, getState());
  enterRule(_localctx, 32, BParser::RuleConstant);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(220);
    _la = _input->LA(1);
    if (!(((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 16374562816) != 0)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NameContext ------------------------------------------------------------------

BParser::NameContext::NameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BParser::NameContext::NAME() {
  return getToken(BParser::NAME, 0);
}


size_t BParser::NameContext::getRuleIndex() const {
  return BParser::RuleName;
}


std::any BParser::NameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BVisitor*>(visitor))
    return parserVisitor->visitName(this);
  else
    return visitor->visitChildren(this);
}

BParser::NameContext* BParser::name() {
  NameContext *_localctx = _tracker.createInstance<NameContext>(_ctx, getState());
  enterRule(_localctx, 34, BParser::RuleName);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(222);
    match(BParser::NAME);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DirectiveContext ------------------------------------------------------------------

BParser::DirectiveContext::DirectiveContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BParser::DirectiveContext::SHARP_DIRECTIVE() {
  return getToken(BParser::SHARP_DIRECTIVE, 0);
}


size_t BParser::DirectiveContext::getRuleIndex() const {
  return BParser::RuleDirective;
}


std::any BParser::DirectiveContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BVisitor*>(visitor))
    return parserVisitor->visitDirective(this);
  else
    return visitor->visitChildren(this);
}

BParser::DirectiveContext* BParser::directive() {
  DirectiveContext *_localctx = _tracker.createInstance<DirectiveContext>(_ctx, getState());
  enterRule(_localctx, 36, BParser::RuleDirective);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(224);
    match(BParser::SHARP_DIRECTIVE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool BParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 12: return exprSempred(antlrcpp::downCast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool BParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 7);
    case 1: return precpred(_ctx, 6);
    case 2: return precpred(_ctx, 5);
    case 3: return precpred(_ctx, 4);
    case 4: return precpred(_ctx, 3);
    case 5: return precpred(_ctx, 2);
    case 6: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

void BParser::initialize() {
  ::antlr4::internal::call_once(bParserOnceFlag, bParserInitialize);
}
