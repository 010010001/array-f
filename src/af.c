#include "base.h"
#include "Menu.h"

static inline void loadBar(int x, int n, int r, int w)
{
	// Only update r times.
	if ( x % (n/r) != 0 ) return;
	
	// Calculuate the ratio of complete-to-incomplete.
	float ratio = x/(float)n;
	int   c     = ratio * w;
	
	// Show the percentage complete.
	printf("%3d%% [", (int)(ratio*100) );
	
	// Show the load bar.
	for (int x=0; x<c; x++)
		printf("=");
	
	for (int x=c; x<w; x++)
		printf(" ");
	
	// ANSI Control codes to go back to the
	// previous line and clear it.
	printf("]\n\033[F\033[J");
}
/*beginning of main()*/
int main(int argc,char *argv[]) {
	
	int i;
	printf(KRED);
	puts("\t\t=======================================");
	puts("\t\t===============WELCOME!================");
	puts("\t\t==========To: Array Functions==========");
	puts("\t\t=======================================");
	printf(RESET);
	puts("wanna import an existed array?");
	puts("(1/0)");
		scanf("%d", &chx);
		if(chx==1){
			puts("the size of your array?");
			scanf("%lu", &a_size);
			puts("the name of your array!");
			scanf("%s", name);
			imparray(arr, (int)a_size );
			goto H_3;
		}
	puts("give you array a name!");
		scanf("%s", name);
	puts("what is the size of you array?");
	scanf("%lu", &a_size);
	puts("fill your array withe elements:");
	printf(">>");
	
	for( i=0; i<=a_size;++i){
		loadBar(i,(int)a_size,(int)a_size,50);
		if(i==a_size)
			break;
		printf("\tElement => [%d]", i+1);
		scanf("%d", &arr[i]);		
	}//end for
	for(i=0;i<a_size;++i){
		/*
	    if(i==0){            *
			printf("[");}//end if
		printf("\r=");
		if(i==a_size-1){
			printf("]");}//end if
		 */
	}//end for
	printf("\t\this is the filled array\n\n");
	H_3: 
	parray(arr, a_size, name);
	puts("");
	menu();
	
	return EXIT_SUCCESS;
}//end main()
