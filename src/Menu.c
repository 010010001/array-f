#include "base.h"
#include "Menu.h"
void menu(void){
	puts("\t\t================================");
	puts("\t\t============WELCOME!============");
	puts("\t\t========|Array Function|========");
	puts("\t\t================================");
	puts("\t\t=[1]=Arithmetic manipulations===");
	puts("\t\t=[2]===Order and Frequancy======");
	puts("\t\t=[3]===========Other============");
	puts("\t\t=[4]===========QUIT!============");
	puts("\t\t================================");
	printf(">>>");	
	scanf("%d", &chx);
	switch(chx){
		case 1:arith_manip();
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:	exit(0);
			break;
				default:	goto MENU;
	}//end switch
}
void arith_manip(void){
	int k;
	puts("\t\t==========================================");
	puts("\t\t========|Arithmitic Manipulations|========");
	puts("\t\t===[1]========Array Maximum===============");
	puts("\t\t===[2]========Array Minimum===============");
	puts("\t\t===[3]=========Array Mode=================");
	puts("\t\t===[4]=========Array Mean=================");
	puts("\t\t===[5]=========Array Somme================");
	puts("\t\t===[6]========Back to MENU!===============");
	printf(">>>");
		scanf("%d", &k);
	switch(k){
		case 1:	
		case 2:
		case 3:
		case 4:
		case 5:
			default:
			
	}//end switch
}//end artith_manip() 
void array(int* array, int b){
	char* name[30];
	puts("give you array a name!");
		scanf("%d", name);
	for(int i=0; i<b;++i){
		scanf("%d", array[i]);
		if(i!=(b-1)){
			printf("next->[%d]", i+1);
		}//end if
	}//end for
	puts("this is the filled array");
	parray(array, b, name);
	
}//end array()
