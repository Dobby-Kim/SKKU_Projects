
// Generated from B.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"




class  BLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, AUTO = 6, PLUS = 7, 
    MINUS = 8, MUL = 9, DIV = 10, NOT = 11, GT = 12, GTE = 13, LT = 14, 
    LTE = 15, EQ = 16, NEQ = 17, AND = 18, OR = 19, QUEST = 20, COLON = 21, 
    SEMI = 22, IF = 23, ELSE = 24, WHILE = 25, RETURN = 26, ASSN = 27, BOOL = 28, 
    NAME = 29, INT = 30, REAL = 31, STRING = 32, CHAR = 33, SHARP_DIRECTIVE = 34, 
    BLOCKCOMMENT = 35, LINECOMMENT = 36, WS = 37
  };

  explicit BLexer(antlr4::CharStream *input);

  ~BLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

