@echo off

cd src\

REM Flex (Lexer)
flex lexer.l

REM Bison (Parser)
bison --yacc parser.y -d 

cd ..

REM Compile symbolTable.cpp
g++ -c src\utils\symbolTable.cpp -o bin\symbolTable.o

REM Compile lexer and parser
gcc src\lex.yy.c src\parser.tab.c -o bin\faam

REM Run faam.exe on the input file in input/program.faam and output the result to output/output.faam
.\bin\faam.exe ".\input\program.faam" > ".\output\output.faam"

