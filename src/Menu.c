#include "base.h"
#include "Menu.h"
void menu(void){

	printf(KRED);//set the color of the terminal to red
	puts("\t\t========================================");
	puts("\t\t==[1]========Main manipulations=========");
	puts("\t\t==[2]=======Order and Frequency=========");
	puts("\t\t==[3]=====Arithmetic manipulations======");
	puts("\t\t==[4]=============QUIT!=================");
	puts("\t\t========================================");
	printf(RESET);//reset the color
	printf(KBLU ">>>" RESET);	
	while(1){
	scanf("%d", &chx);
		switch(chx){
			case 1:
				other();
				break;//case break
			case 2:
				ord_freq();
				break;//case break
			case 3: 
				arith_manip();
				break;//case break
			case 4:	exit(0);
			break;//case break
		}//end switch
	}//end while
}//end menu()
/*beginning of arith_manip()*/
void arith_manip(void){
	/*acsess to all the arithmitique manipulitions*/
	H_1:
	printf(KRED);
	puts("\t\t========================================");
	puts("\t\t=======|Arithmitic Manipulations|=======");
	puts("\t\t==[1]========Array Maximum==============");
	puts("\t\t==[2]========Array Minimum==============");
	puts("\t\t==[3]=========Array Mode================");
	puts("\t\t==[4]=========Array Mean================");
	puts("\t\t==[5]=========Array Somme===============");
	puts("\t\t==[6]========Back to MENU!==============");
	H_2:
	printf(RESET);
	printf(KBLU ">>>" RESET);
		scanf("%d", &chx);
	switch(chx){
		case 1:
			printf("\tMax is: ");
			printf("%d\n",array_max(arr, a_size));
			break;//case break
		case 2:
			printf("\tMin is: %d\n",array_min(arr, a_size));
			
			break;//case break
		case 3:
			modearray(arr, (int) a_size,9);
			break;//case break
		case 4:
			printf("The mean is: %.3f",meanarray(arr, a_size));
			break;//case break
		case 5:
			printf("The Somme is :%ld",sumarray(arr, a_size));
			break;//case break
		case 6:menu();
		break;//case break
			default: goto H_2; 
	}//end switch
	puts("");
	printf(KYEL);
	puts("\t\t===[1]======Back to Main MENU!==========");
	puts("\t\t===[2]======Back to Prev MENU!==========");
	puts("\t\t===[3]=============EXIT!================");
	printf(RESET);
	printf(KBLU ">>>" RESET);
	scanf("%d", &chx);
	switch(chx){
		case 1: menu();
			break;
		case 2: goto H_1;
		case 3: exit(0);
	}
}//end artith_manip() 
void ord_freq(void){
	auto int fq;
	H_1:
		printf(KRED);
	puts("\t\t========================================");
	puts("\t\t=========|Order and Frequency|==========");
	puts("\t\t==[1]========Decress Order==============");
	puts("\t\t==[2]========Incress Order==============");
	puts("\t\t==[3]==========Frequency================");
	puts("\t\t==[4]========Back to MENU!==============");
	printf(RESET);
H_2:
	printf(KBLU ">>>" RESET);
	scanf("%d", &chx);
	switch(chx){
		case 1://decress order
			puts("set the array in decress Order..");
			dearray(arr, (int)a_size);
			printf(KRED);
			puts("\t\t>>see results?(1/0)");
			printf(RESET);
			scanf("%d",&chx);
			if(chx==1)
				parray(arr, a_size, name);
			break;//case break
		case 2://incress order
			puts("set the array in incress Order..");
			inarray(arr, (int)a_size);
			printf(KRED);
			puts("\t\t>>see results?(1/0)");
			printf(RESET);
			scanf("%d",&chx);
			if(chx==1)
				parray(arr, a_size, name);
			break;//case break
		case 3://Frequency
			  fq = array_max(arr, a_size) +1;
			freqarray(arr, (int)a_size, fq);
			break;//case break
		case 4://back to Menu
			menu();
			break;//case break
		default: goto H_2; 
	}//end switch
	puts("");
	printf(KYEL);
	puts("\t\t===[1]======Back to Main MENU!==========");
	puts("\t\t===[2]======Back to Prev MENU!==========");
	puts("\t\t===[3]=============EXIT!================");
	printf(RESET);
	printf(KBLU ">>>" RESET);
		scanf("%d", &chx);
		switch(chx){
			case 1: menu();
				break;
			case 2: goto H_1;
			case 3: exit(0);
		}//end switch
}//end ord_freq()
void other(void){
	//int min ,max;
	H_1:
	printf(KRED);
	puts("\t\t========================================");
	puts("\t\t================|Main|==================");
	puts("\t\t==[1]========Normal Search==============");
	puts("\t\t==[2]===Binary Search<Under Dev>========");
	puts("\t\t==[3]=========Fill Array================");
	puts("\t\t==[4]========Shuffle Array==============");
	puts("\t\t==[5]=======*Unique Array===============");
	puts("\t\t==[6]========Export Array===============");
	puts("\t\t==[7]========Import Array===============");
	puts("\t\t==[8]=========Print Array===============");
	puts("\t\t==[9]========Back to MENU!==============");
	H_2:
		printf(RESET);
		printf(KBLU ">>>" RESET);
		scanf("%d", &chx);
		switch(chx){
			case 1://NORMAL Search
				puts("please, Enter what you searching for:");
				scanf("%d", &chx);
				printf(srcharray(arr, (int) a_size, chx) ==0 ? 
"found":"not found");
				break;
			case 2://Binary Search
				puts("underdev...");
				printf(KRED);
				printf("\t\tWARNING!\n\n");
				puts("\tTHE ARRAY MUST BE IN ORDER!");
				printf("\tWANNA WANNA SET IT IN ORDER? (1/0)\n>>");
				printf(RESET);
					scanf("%d", &chx);
					if(chx==1){
						puts("which order?");
						puts("[1]Decress");
						puts("[2]Incress");
							scanf("%d", &chx);
						switch(chx){
							case 1: dearray(arr, (int) a_size);
								break;
							case 2: inarray(arr, (int) a_size);
								break;
							default: 
								break;
						}//end switch
					}//end if
				puts("please, Enter what you searching for:");
					scanf("%d", &chx);
				min = array_min(arr, (int)a_size);
				max = array_max(arr, (int)a_size);
				if(bsrcharray(arr, chx,min, max) ==0){
					puts("found!!");
				}else{
					puts("not found!!");
				}//end if else
				break;//case break
			case 3://Fill Array 
				printf(KRED);
				printf("\t\tWARNING!\n\n");
				puts("THIS OPERATION IS IREVERSABLE!");
				printf("\tWANNA CONTINUE? (1/0)\n>>");
				printf(RESET);
				scanf("%d", &chx);
				if(chx==0)
					break;
				farray(arr, (int)a_size);
				break;//case break
			case 4://Shuffel Array
				shufarray(arr, (int)a_size);
				break;//case break
			case 5://Unique Array
				printf(KRED);
				printf("\t\tWARNING!\n\n");
				puts("   THIS OPERATION IS IREVERSABLE!");
				printf("\tWANNA CONTINUE? (1/0)\n>>");
				printf(RESET);
				scanf("%d", &chx);
				if(chx==0)
					break;
				a_size = (size_t) uniqarray(arr,(int) a_size);
				puts("output:");
				parray(arr, a_size, name);
				break;//case break
			case 6:// Export Array to File
				exparray(arr, (int) a_size);
			       puts("Done.");
			break;//case break
			case 7://Import array from File
				puts("name of your array?");
				scanf("%s", name);
				imparray(arr, (int) a_size );
				puts("Done.");
				break;//case break
			case 8://Printing the array
				parray(arr, (int) a_size, name);
				break;//case break
			case 9://Back to Menu 
				menu();
			default: goto H_2; 
		}//end switch
			puts("");
			printf(KYEL);
			puts("\t\t===[1]======Back to Main MENU!==========");
			puts("\t\t===[2]======Back to Prev MENU!==========");
			puts("\t\t===[3]=============EXIT!================");
			printf(RESET);
			printf(KBLU ">>>" RESET);
			scanf("%d", &chx);
			switch(chx){
				case 1: menu();
					break;
				case 2: goto H_1;
				case 3: exit(0);
			}//end switch
}//end other() 
