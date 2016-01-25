#ifndef __BASE_H__
 #define __BASE_H__
 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
 #include <time.h>
 //the terminal colors 
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
 int srcharray(int*, int, int);//srcharray() prototype
 int bsrcharray(int*, int, int, int);//bsrcharray() prototype
 void shufarray(int*, int);//shufarray() prototype
 int uniqarray(int*, int);//uniqarray() prototype
 long int sumarray(int*, int);//sumarray() prototype
 int randinarray(int* , int );//randinarray() prototype
 void exparray(int* array, int b);//exparray() prototype
 void imparray(int* array,int b);//imparray() prototype
 /*functions prototype*/
  int arr[ARRAY_SIZE];
  size_t a_size; 
  char name[30];
#endif
