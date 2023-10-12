
// Generated from B.g4 by ANTLR 4.11.1


#include "BLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct BLexerStaticData final {
  BLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  BLexerStaticData(const BLexerStaticData&) = delete;
  BLexerStaticData(BLexerStaticData&&) = delete;
  BLexerStaticData& operator=(const BLexerStaticData&) = delete;
  BLexerStaticData& operator=(BLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag blexerLexerOnceFlag;
BLexerStaticData *blexerLexerStaticData = nullptr;

void blexerLexerInitialize() {
  assert(blexerLexerStaticData == nullptr);
  auto staticData = std::make_unique<BLexerStaticData>(
    std::vector<std::string>{
      "T__0", "T__1", "T__2", "T__3", "T__4", "AUTO", "PLUS", "MINUS", "MUL", 
      "DIV", "NOT", "GT", "GTE", "LT", "LTE", "EQ", "NEQ", "AND", "OR", 
      "QUEST", "COLON", "SEMI", "IF", "ELSE", "WHILE", "RETURN", "ASSN", 
      "BOOL", "NAME", "INT", "REAL", "STRING", "CHAR", "SHARP_DIRECTIVE", 
      "BLOCKCOMMENT", "LINECOMMENT", "WS"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
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
  	4,0,37,235,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,
  	7,28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,
  	7,35,2,36,7,36,1,0,1,0,1,1,1,1,1,2,1,2,1,3,1,3,1,4,1,4,1,5,1,5,1,5,1,
  	5,1,5,1,6,1,6,1,7,1,7,1,8,1,8,1,9,1,9,1,10,1,10,1,11,1,11,1,12,1,12,1,
  	12,1,13,1,13,1,14,1,14,1,14,1,15,1,15,1,15,1,16,1,16,1,16,1,17,1,17,1,
  	17,1,18,1,18,1,18,1,19,1,19,1,20,1,20,1,21,1,21,1,22,1,22,1,22,1,23,1,
  	23,1,23,1,23,1,23,1,24,1,24,1,24,1,24,1,24,1,24,1,25,1,25,1,25,1,25,1,
  	25,1,25,1,25,1,26,1,26,1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,3,
  	27,161,8,27,1,28,1,28,5,28,165,8,28,10,28,12,28,168,9,28,1,29,4,29,171,
  	8,29,11,29,12,29,172,1,30,4,30,176,8,30,11,30,12,30,177,1,30,1,30,5,30,
  	182,8,30,10,30,12,30,185,9,30,1,31,1,31,5,31,189,8,31,10,31,12,31,192,
  	9,31,1,31,1,31,1,32,1,32,1,32,1,32,1,33,1,33,5,33,202,8,33,10,33,12,33,
  	205,9,33,1,34,1,34,1,34,1,34,5,34,211,8,34,10,34,12,34,214,9,34,1,34,
  	1,34,1,34,1,34,1,34,1,35,1,35,1,35,1,35,5,35,225,8,35,10,35,12,35,228,
  	9,35,1,35,1,35,1,36,1,36,1,36,1,36,1,212,0,37,1,1,3,2,5,3,7,4,9,5,11,
  	6,13,7,15,8,17,9,19,10,21,11,23,12,25,13,27,14,29,15,31,16,33,17,35,18,
  	37,19,39,20,41,21,43,22,45,23,47,24,49,25,51,26,53,27,55,28,57,29,59,
  	30,61,31,63,32,65,33,67,34,69,35,71,36,73,37,1,0,6,2,0,65,90,97,122,4,
  	0,48,57,65,90,95,95,97,122,1,0,48,57,3,0,10,10,13,13,34,34,2,0,10,10,
  	13,13,3,0,9,10,13,13,32,32,243,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,
  	7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,
  	0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,0,0,25,1,0,0,0,0,27,1,0,0,0,
  	0,29,1,0,0,0,0,31,1,0,0,0,0,33,1,0,0,0,0,35,1,0,0,0,0,37,1,0,0,0,0,39,
  	1,0,0,0,0,41,1,0,0,0,0,43,1,0,0,0,0,45,1,0,0,0,0,47,1,0,0,0,0,49,1,0,
  	0,0,0,51,1,0,0,0,0,53,1,0,0,0,0,55,1,0,0,0,0,57,1,0,0,0,0,59,1,0,0,0,
  	0,61,1,0,0,0,0,63,1,0,0,0,0,65,1,0,0,0,0,67,1,0,0,0,0,69,1,0,0,0,0,71,
  	1,0,0,0,0,73,1,0,0,0,1,75,1,0,0,0,3,77,1,0,0,0,5,79,1,0,0,0,7,81,1,0,
  	0,0,9,83,1,0,0,0,11,85,1,0,0,0,13,90,1,0,0,0,15,92,1,0,0,0,17,94,1,0,
  	0,0,19,96,1,0,0,0,21,98,1,0,0,0,23,100,1,0,0,0,25,102,1,0,0,0,27,105,
  	1,0,0,0,29,107,1,0,0,0,31,110,1,0,0,0,33,113,1,0,0,0,35,116,1,0,0,0,37,
  	119,1,0,0,0,39,122,1,0,0,0,41,124,1,0,0,0,43,126,1,0,0,0,45,128,1,0,0,
  	0,47,131,1,0,0,0,49,136,1,0,0,0,51,142,1,0,0,0,53,149,1,0,0,0,55,160,
  	1,0,0,0,57,162,1,0,0,0,59,170,1,0,0,0,61,175,1,0,0,0,63,186,1,0,0,0,65,
  	195,1,0,0,0,67,199,1,0,0,0,69,206,1,0,0,0,71,220,1,0,0,0,73,231,1,0,0,
  	0,75,76,5,40,0,0,76,2,1,0,0,0,77,78,5,44,0,0,78,4,1,0,0,0,79,80,5,41,
  	0,0,80,6,1,0,0,0,81,82,5,123,0,0,82,8,1,0,0,0,83,84,5,125,0,0,84,10,1,
  	0,0,0,85,86,5,97,0,0,86,87,5,117,0,0,87,88,5,116,0,0,88,89,5,111,0,0,
  	89,12,1,0,0,0,90,91,5,43,0,0,91,14,1,0,0,0,92,93,5,45,0,0,93,16,1,0,0,
  	0,94,95,5,42,0,0,95,18,1,0,0,0,96,97,5,47,0,0,97,20,1,0,0,0,98,99,5,33,
  	0,0,99,22,1,0,0,0,100,101,5,62,0,0,101,24,1,0,0,0,102,103,5,62,0,0,103,
  	104,5,61,0,0,104,26,1,0,0,0,105,106,5,60,0,0,106,28,1,0,0,0,107,108,5,
  	60,0,0,108,109,5,61,0,0,109,30,1,0,0,0,110,111,5,61,0,0,111,112,5,61,
  	0,0,112,32,1,0,0,0,113,114,5,33,0,0,114,115,5,61,0,0,115,34,1,0,0,0,116,
  	117,5,38,0,0,117,118,5,38,0,0,118,36,1,0,0,0,119,120,5,124,0,0,120,121,
  	5,124,0,0,121,38,1,0,0,0,122,123,5,63,0,0,123,40,1,0,0,0,124,125,5,58,
  	0,0,125,42,1,0,0,0,126,127,5,59,0,0,127,44,1,0,0,0,128,129,5,105,0,0,
  	129,130,5,102,0,0,130,46,1,0,0,0,131,132,5,101,0,0,132,133,5,108,0,0,
  	133,134,5,115,0,0,134,135,5,101,0,0,135,48,1,0,0,0,136,137,5,119,0,0,
  	137,138,5,104,0,0,138,139,5,105,0,0,139,140,5,108,0,0,140,141,5,101,0,
  	0,141,50,1,0,0,0,142,143,5,114,0,0,143,144,5,101,0,0,144,145,5,116,0,
  	0,145,146,5,117,0,0,146,147,5,114,0,0,147,148,5,110,0,0,148,52,1,0,0,
  	0,149,150,5,61,0,0,150,54,1,0,0,0,151,152,5,102,0,0,152,153,5,97,0,0,
  	153,154,5,108,0,0,154,155,5,115,0,0,155,161,5,101,0,0,156,157,5,116,0,
  	0,157,158,5,114,0,0,158,159,5,117,0,0,159,161,5,101,0,0,160,151,1,0,0,
  	0,160,156,1,0,0,0,161,56,1,0,0,0,162,166,7,0,0,0,163,165,7,1,0,0,164,
  	163,1,0,0,0,165,168,1,0,0,0,166,164,1,0,0,0,166,167,1,0,0,0,167,58,1,
  	0,0,0,168,166,1,0,0,0,169,171,7,2,0,0,170,169,1,0,0,0,171,172,1,0,0,0,
  	172,170,1,0,0,0,172,173,1,0,0,0,173,60,1,0,0,0,174,176,7,2,0,0,175,174,
  	1,0,0,0,176,177,1,0,0,0,177,175,1,0,0,0,177,178,1,0,0,0,178,179,1,0,0,
  	0,179,183,5,46,0,0,180,182,7,2,0,0,181,180,1,0,0,0,182,185,1,0,0,0,183,
  	181,1,0,0,0,183,184,1,0,0,0,184,62,1,0,0,0,185,183,1,0,0,0,186,190,5,
  	34,0,0,187,189,8,3,0,0,188,187,1,0,0,0,189,192,1,0,0,0,190,188,1,0,0,
  	0,190,191,1,0,0,0,191,193,1,0,0,0,192,190,1,0,0,0,193,194,5,34,0,0,194,
  	64,1,0,0,0,195,196,5,39,0,0,196,197,9,0,0,0,197,198,5,39,0,0,198,66,1,
  	0,0,0,199,203,5,35,0,0,200,202,8,4,0,0,201,200,1,0,0,0,202,205,1,0,0,
  	0,203,201,1,0,0,0,203,204,1,0,0,0,204,68,1,0,0,0,205,203,1,0,0,0,206,
  	207,5,47,0,0,207,208,5,42,0,0,208,212,1,0,0,0,209,211,9,0,0,0,210,209,
  	1,0,0,0,211,214,1,0,0,0,212,213,1,0,0,0,212,210,1,0,0,0,213,215,1,0,0,
  	0,214,212,1,0,0,0,215,216,5,42,0,0,216,217,5,47,0,0,217,218,1,0,0,0,218,
  	219,6,34,0,0,219,70,1,0,0,0,220,221,5,47,0,0,221,222,5,47,0,0,222,226,
  	1,0,0,0,223,225,8,4,0,0,224,223,1,0,0,0,225,228,1,0,0,0,226,224,1,0,0,
  	0,226,227,1,0,0,0,227,229,1,0,0,0,228,226,1,0,0,0,229,230,6,35,0,0,230,
  	72,1,0,0,0,231,232,7,5,0,0,232,233,1,0,0,0,233,234,6,36,0,0,234,74,1,
  	0,0,0,10,0,160,166,172,177,183,190,203,212,226,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  blexerLexerStaticData = staticData.release();
}

}

BLexer::BLexer(CharStream *input) : Lexer(input) {
  BLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *blexerLexerStaticData->atn, blexerLexerStaticData->decisionToDFA, blexerLexerStaticData->sharedContextCache);
}

BLexer::~BLexer() {
  delete _interpreter;
}

std::string BLexer::getGrammarFileName() const {
  return "B.g4";
}

const std::vector<std::string>& BLexer::getRuleNames() const {
  return blexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& BLexer::getChannelNames() const {
  return blexerLexerStaticData->channelNames;
}

const std::vector<std::string>& BLexer::getModeNames() const {
  return blexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& BLexer::getVocabulary() const {
  return blexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView BLexer::getSerializedATN() const {
  return blexerLexerStaticData->serializedATN;
}

const atn::ATN& BLexer::getATN() const {
  return *blexerLexerStaticData->atn;
}




void BLexer::initialize() {
  ::antlr4::internal::call_once(blexerLexerOnceFlag, blexerLexerInitialize);
}
