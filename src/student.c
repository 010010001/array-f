#include "base.h"
void set_students(_STUDENT* student)
{
	char hold[10];
	int i, var_switch;
	puts("Enter the Full name");
	scanf("%s", student->Stud_name);
	puts("Enter his deg");
		for(int k=0; k < DEG_SIZE; ++k){
			printf("deg[%d]", k+1);
				scanf("%f",student->deg[k]);
			puts("");
		}// end for
	puts("enter the year");
		scanf("%s", student->Stud_year);
	puts("what's his/her payment status?(TRUE/FALSE)");
		scanf("%s", hold);
		// set the input to uppercase
		while(hold[i]){
			toupper(hold[i]);
			i++;
		}// end while
	student->Payment_State = hold;
	puts("set the branch");
	printf("\t\tMATH\n\n[1]-1st year:\n");
	printf("(SMIA)\n[2]-2nd year:\n(SMI/SMA)\n");
	printf("[3]-3rd year:\n(SMF/SMA)");
	printf("*[4]-MASTER*:\n(MathFonda/MathAppl)\n");
	printf("**[5]-DOCTURAT:**\nfonda/Appl\n");
	HERE:
	printf("please type the number of your branch\n>>>\t");
	switch(var_switch){
		case 1: // SMIA
// 			student->Stud_branch = branch[SMIA];
			break;
		case 2: // SMI/SMA
// 			student->Stud_branch = branch[SMI/SMA];
			break;
		case 3: // SMF/SMA
// 			student->Stud_branch = branch[SMF/SMA];
			break;
		case 4: // MF/MA
// 			student->Stud_branch = branch[MF/MA];
			break;
		case 5: // F/A
// 			student->Stud_branch = branch[F/A];
			break;
		default: 
			goto HERE;
	}
	puts("DONE!");
}// end set
