parser grammar SeedParser;

options { tokenVocab=SeedLexer; }

file:
    lines EOF;

lines:
    NEWLINE* ( line ( NEWLINE+ line )* NEWLINE* )?;

line:
    triggerLine |
    setupDef |
    metadataDef;

setupDef:
    SETUP WHITESPACE+ setupName WHITESPACE+ arguments;

setupName:
    identifier;

metadataDef:
    '#' metadataKey (':' WHITESPACE* metadataValue)?;

metadataKey:
    ~(':' | NEWLINE)+;

metadataValue:
    ~(NEWLINE)+;

triggerLine:
    trigger '|' action;

trigger:
    uberGroup '|' uberState;

uberGroup:
    INT;

uberStateId:
    INT;

uberState:
    uberStateId | uberStateCondition;

uberStateCondition:
    uberStateId comparison number;

action:
    actionType '|' arguments;

actionType:
    INT;

arguments:
    argument ('|' argument)*;

argument:
    number |
    expression |
    identifier |
    commaSeparatedNumbers |
    compoundString;

commaSeparatedNumbers:
    number (',' WHITESPACE* number)*;

identifier:
    IDENTIFIER_CHAR+;

string:
    '"' stringValue '"';

stringValue:
    ~(NEWLINE | '\\"')+;

expressionKey:
    identifier;

expression:
    expressionKey comparison number;

comparison:
    EQ | NEQ | GT | LT | GTE | LTE;

number:
    INT | FLOAT;

compoundString:
    stringExpression (WHITESPACE* '+' WHITESPACE* stringExpression)*;

stringExpression:
    string |
    actionName |
    locationActionName |
    uberValue |
    storedString;

actionName:
    '$[' action ']';

locationActionName:
    '$[' '(' (uberGroup | uberValue) '|' (uberState | uberValue) ')' ']';

uberValue:
    '$(' (uberGroup | uberValue) '|' (uberState | uberValue) ')';

storedString:
    '${' storedStringId '}';

storedStringId:
    identifier;