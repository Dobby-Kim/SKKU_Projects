/* 
   Minimized C language
   All types are 'auto'
*/

grammar B;

program
   : ( directive | definition )* EOF
   ;

definition
   : autostmt
   | declstmt
   | funcdef
   ;

funcdef
   : AUTO name '(' (AUTO name (',' AUTO name)*)? ')' statement
   ;

statement
   : autostmt
   | declstmt
   | blockstmt
   | ifstmt
   | whilestmt
   | expressionstmt
   | returnstmt
   | nullstmt
   | directive
   ;

autostmt
   : AUTO name (ASSN constant)? (',' name (ASSN constant)?)* SEMI 
   ;

declstmt
   : AUTO name '(' (AUTO (',' AUTO )*)? ')' SEMI 
   ;

blockstmt
   : '{' statement* '}'
   ;

ifstmt
   : IF '(' expr ')' statement (ELSE statement)?
   ;

whilestmt
   : WHILE '(' expr ')' statement
   ;

expressionstmt
   : expression SEMI 
   ;

returnstmt
   : RETURN ( expression | '(' expression ')')? SEMI 
   ;

nullstmt
   : SEMI 
   ;

expr
   : (PLUS | MINUS | NOT)? atom
   | expr (MUL | DIV) expr
   | expr (PLUS | MINUS) expr
   | expr (GT | GTE | LT | LTE) expr
   | expr (EQ | NEQ) expr
   | expr AND expr
   | expr OR expr
   | expr QUEST expr COLON expr
   ;

atom
   : name
   | constant
   | '(' expression ')'
   | funcinvocation
   ;

expression
   : (name ASSN)? expr
   ;

funcinvocation
   : name '(' ( expr (',' expr)* )? ')'
   ;

constant
   : INT
   | REAL
   | STRING
   | BOOL
   | CHAR
   ;

name
   : NAME
   ;

directive
   : SHARP_DIRECTIVE
   ;

/* Lexer Rules */

AUTO:  'auto' ;

PLUS:  '+' ;
MINUS: '-' ;
MUL:   '*' ;
DIV:   '/' ;
NOT:   '!' ;
GT:    '>' ;
GTE:   '>=' ;
LT:    '<' ;
LTE:   '<=' ;
EQ:    '==' ;
NEQ:   '!=' ;
AND:   '&&' ;
OR:    '||' ;
QUEST: '?' ;
COLON: ':' ;
SEMI:  ';' ;
 
IF:     'if' ;
ELSE:   'else' ;
WHILE:  'while' ;
RETURN: 'return' ;
ASSN:   '=' ;


BOOL
   : 'false'|'true'
   ;
   
NAME
   : [a-zA-Z] [a-zA-Z0-9_]*
   ;

INT
   : [0-9]+
   ;

REAL
   : [0-9]+ '.' [0-9]*
   ;

STRING
   : '"' ~["\r\n]* '"'
   ;

CHAR
   : '\'' . '\''
   ;


SHARP_DIRECTIVE
   : '#' ~[\r\n]* 
   ;

BLOCKCOMMENT
   : '/*' .*? '*/' -> skip
   ;

LINECOMMENT
    :   '//' ~[\r\n]* -> skip
    ;

WS
   : [ \t\r\n] -> skip
   ;

