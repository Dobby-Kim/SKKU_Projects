grammar Expr;
// parser rules
prog: (assn ';' NEWLINE? | expr ';' NEWLINE?)*;
expr : expr ('*'|'/') expr
     | expr ('+'|'-') expr
     | signedNum
     | signedID
     | '(' expr ')'
     ;
assn: ID '=' signedNum;
signedNum: ('+' | '-')? num;
signedID: ('+' | '-')? ID;
num : INT
     | REAL
     ;
// lexer rules
NEWLINE: [\r\n]+ ;
INT: [0-9]+ ; // change to handle negatives
REAL: [0-9]+ '.' [0-9]* ; // change to handle negatives
ID: [a-zA-Z]+ ;
WS: [ \t\r\n]+ -> skip ;
