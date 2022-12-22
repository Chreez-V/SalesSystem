@echo off
cd ".\"
gcc -Wfatal-errors -Wno-nonnull -Wno-int-conversion main.c Brain.c Functions/winCC.c -o SalesSystem.exe
@REM gcc Functions/winCC.c main.c Brain.c 
pause