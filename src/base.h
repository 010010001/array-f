#ifndef __BASE_H__
 #define __BASE_H__
 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
 #include <time.h>
 // the terminal colors 
  #define KNRM  "\x1B[0m"
  #define KRED  "\x1B[31m"
  #define KGRN  "\x1B[32m"
  #define KYEL  "\x1B[33m"
  #define KBLU  "\x1B[34m"
  #define KMAG  "\x1B[35m"
  #define KCYN  "\x1B[36m"
  #define KWHT  "\x1B[37m"
  #define RESET "\033[0m"
//   MACROS
	#define ARRAY_SIZE 1000
	#define RATE 9
	#define DEG_SIZE 2
#define BRANCH_SIZE 5
#include <ctype.h>
	
// 	Branches MACROS

 
 typedef unsigned int _uint;
 
 
 
 //array stuf
  int arr[ARRAY_SIZE];
  size_t a_size; 
  char name[30];
/*<---------->*/
 
// type _BRANCH
  
  
/*<---------->*/

// Departements
	enum Departement
	{ MATH,PHY, 
	  CHY,GIO, 
	  BIO,INFO
	};
// 	typedef enum Departement _DEP;
// University years
	enum Year
	{ first,second,
	  licence,master,
	  doctura
	};
// 	  typedef enum Year _YEAR;
// Payment status
	enum Payment
	{
		TRUE,
		FALSE
	};
// 	typedef enum Payment _Pay;
	
	struct Branch{
		char Departement;
		char Year;
	}b;
	 typedef struct Branch _BRANCH;
_BRANCH branch[BRANCH_SIZE];
   struct Student_informations{
		char Stud_name;
		float deg[DEG_SIZE];
		char* Stud_year;
		char Payment_State;
		_BRANCH Stud_branch;
	}c;
    typedef struct Student_informations _STUDENT;
  /*<----functions prototype---->*/
 int array_max(int*, int);
 int array_min(int*, int);
 void farray(int*, int);
 void parray(int*, int, char*);
 void inarray(int*, int);
 void dearray(int*, int);
 void freqarray(int*, int, int);
 void modearray(int*, int , int);
 float meanarray(int*, int);
 int srcharray(int*, int, int);
 int bsrcharray(int*, int, int, int);
 void shufarray(int*, int);
 int uniqarray(int*, int);
 long int sumarray(int*, int);
 int randinarray(int* , int );
 void exparray(int* array, int b);
 void imparray(int* array,int b);
 void set_students(_STUDENT* );
 /*<----functions prototype---->*/
	
	
    
#endif
