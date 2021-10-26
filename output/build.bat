@ECHO OFF
ECHO =======================
ECHO Building the project...
ECHO =======================
qmake -o Makefile ../sources/algObserve.pro
make
ECHO =======================
ECHO Building was successful
ECHO =======================
pause