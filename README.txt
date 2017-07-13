This is the program for assignment2 of course VLSI 788

Introduce: The program applies Gordian Algorithm to form the matrixes and uses LAPACK & BLAS & Armadillo library to do the matrix calculation.

Author of Gordian.cpp, Gordian.h and main.cpp: Kangli Chu

1. To successfully use the program you need to revise the path for the "armadillo" file in the Gordian.cpp, Gordian.h and main.cpp file according to your own computer.
2. Input file should be the same format as being provided in the directory.
3. Compile in 64bit.
4. You may need to copy two dll files in lib_win64 directory to C/WINDOWS/SYSTEM32 on your computer.
5. The program has enabled the lapack and blas functions, if not, go config.hpp in the armadillo_bits directory and enable them.
6. The plot will appear in the same directory of .exe file.
7. You can choose connected plot or unconnected plot via revising the 702 line in Gordian.cpp.
8. The program needs seconds even mins depend on your input file, so be patient.
9. Good luck.
