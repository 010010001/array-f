#ifndef __BASE_H__
 #define __BASE_H__
 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
 #include <time.h>

 
 #define ARRAY_SIZE 25
 #define RATE 9
 
 /*functions prototype*/
 int array_max(int*, int);//array_max() prototype
 int array_min(int*, int);//array_min() prototype
 void farray(int*, int);//farray() prototype
 void parray(int*, int, char*);//parray() prototype
 void inarray(int*, int);//inarray() prototype
 void dearray(int*, int);//dearray() prototype
 void freqarray(int*, int, int);//freqarray() prototype
 void modearray(int*, int , int);//modearray() prototype
 float meanarray(int*, int);//meanarray() prototype
 int srcharray(int*, int, int);
 int bsrcharray(int*, int, int, int);
 void shufarray(int*, int);
 int uniqarray(int*, int);
 long int sumarray(int*, int);
 int randinarray(int* , int );
 /*functions prototype*/

#endif
