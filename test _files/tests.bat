@echo off

rem Set the path to your CLI application
set "cliApp=a.exe"

rem Set the input file path
set inputFile=input.txt

rem Set the output file path
set outputFile=output.txt

rem Initialize the output file
echo. >%outputFile%

rem Loop through the inputs in the input file and capture the output
for /F "delims=" %%i in (%inputFile%) do (
    echo Input: %%i >>%outputFile%
    echo ---------- >>%outputFile%
    echo Output: >>%outputFile%
    echo %%i > temp.txt 2>&1
    %cliApp% < temp.txt >>%outputFile% 2>&1
    echo ======================================== >>%outputFile%
)

rem Delete the temporary file
del temp.txt