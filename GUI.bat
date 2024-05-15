@echo off

cd src\

REM Flex (Lexer)
flex lexer.l

REM Bison (Parser)
bison --yacc parser.y -d 

cd ..

REM Compile symbolTable.cpp

REM Compile lexer and parser
g++ src\lex.yy.c src\y.tab.c src\utils\symbolTable.cpp src\utils\quadHandler.cpp -o bin\faam

python ./src/GUI/gui.py
