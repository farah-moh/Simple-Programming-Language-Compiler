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

REM Run faam.exe on the input file in input/program.faam and output the result to output/output.faam
.\bin\faam.exe ".\input\program.faam" > ".\output\output.faam"

