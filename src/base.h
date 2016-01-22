#ifndef __BASE_H__
 #define __BASE_H__
 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
 #include <time.h>
  #define KNRM  "\x1B[0m"
  #define KRED  "\x1B[31m"
  #define KGRN  "\x1B[32m"
  #define KYEL  "\x1B[33m"
  #define KBLU  "\x1B[34m"
  #define KMAG  "\x1B[35m"
  #define KCYN  "\x1B[36m"
  #define KWHT  "\x1B[37m"
  #define RESET "\033[0m"
 
 #define ARRAY_SIZE 1000
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
 void exparray(int* array, int b);
 void imparray(int* array,int b);
 /*functions prototype*/
  int arr[ARRAY_SIZE];
  size_t a_size; 
  char name[30];
#endif
