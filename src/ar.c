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
int bsrcharray(int* , int , int , int , int );
void shufarray(int* , int);
/*functions prototype*/

/*beginning of main()*/
int main(void) {

	int arr[ARRAY_SIZE];
	farray(arr, ARRAY_SIZE);
	//parray(arr, ARRAY_SIZE);
	puts("------");
	//freqarray(arr,ARRAY_SIZE, ARRAY_SIZE);
	//freqarray(arr, ARRAY_SIZE, j);
	parray(arr, ARRAY_SIZE, "hold");
	//dearray(arr, ARRAY_SIZE);
	
	//inarray(arr, ARRAY_SIZE);
	//parray(arr, ARRAY_SIZE, "de_hold");
	//printf("mean of the array is %.3f\n", meanarray(arr, ARRAY_SIZE));
	//modearray(arr, ARRAY_SIZE, RATE);
	//printf(srcharray(arr, ARRAY_SIZE, 2)==1 ? "found\n":"not found\n");
	shufarray(arr, ARRAY_SIZE);
	parray(arr, ARRAY_SIZE, "shuffled_hold");
	puts("");
	//printf(__FILE__ "%d", __LINE__);
	return EXIT_SUCCESS;
}//end main()
/*beginning of array_max()*/
int array_max(int* array, int b){
	/*array_min() it's a function that
	 * returns the maximum element of
	 * 		the given array
	 * */
	int i, max=array[0];
	for(i=0;i<b;++i){
			if(array[i]>max){
				max = array[i];
			}//end if
	}//end for
	return max;
}//end array_max()
/*beginning of array_min()*/
int array_min(int* array, int b){
	/*array_min() it's a function that
	 * returns the minimum element of
	 * 		the given array
	 * 		(Similar to array_max())
	 * */
	int i, min=array[0];
	for(i=0;i<b;++i){
			if(array[i]<min){
				min = array[i];
			}//end if
	}//end for
	return min;
}//end array_min()
/*beginning of farray()*/
void farray(int* array, int b){
	/*
	 * farray() is's a function that fill an array
	 * with random numbers based on it's size
	 * 				as maximum
	 * */
	int j;
	for(j=0;j<b;++j){
			array[j]=1 + rand() % b-1;
		}//end for
}//end farray()
/*beginning of inarray()*/
void inarray(int* array, int b){
	/*
	 *inarray() it's a function that set the array
	 *in increasing order
	 */
	int i,j, hold;
	for(j=1;j<b;++j){
		for(i=0;i<b-1;++i){
			if(array[i]<array[i+1]){
				hold=array[i];
				array[i]=array[i+1];
				array[i+1]=hold;
			}//end if
		}//end for
	}//end for
}//end insarray()
/*beginning of dearray()*/
void dearray(int* array, int b){
	/*
	 *inarray() it's a function that set the array
	 *in decreasing order
	 */
	int i,j, hold;
	for(j=1;j<b;++j){
		for(i=0;i<b-1;++i){
			if(array[i]>array[i+1]){
				hold=array[i];
				array[i]=array[i+1];
				array[i+1]=hold;
			}//end if
		}//end for
	}//end for 
	for(i=0;i<b;++i){
		//
		//
	}
}//end desarray()
/*beginning  of parray()*/
void parray(int* array, int b, char* name){
	/*
	 *parray() it's a function that prints
	 *an array: <name>[<index>] = <value>
	 */
	int j;
	for(j=0;j<b;++j){
      printf("%s[ %d ] = %d\n", name, j,array[j]);
		}//end for
}//end parray
/*beginning of freqarray()*/
void freqarray(int* array, int b, int c){
	/*freqarray() it's a function that determinate the Frequency'
	 *of an array and display's is as 
	 * 			Rating 	  
	 * 			<value>
	 * 			Frequency
	 * 			<frequency of the value>
	 * 			Histogram
	 * 			<*-based on frequency->    	  		   
	 */
	int k,j;
	int frq[c];
	for(k=0;k<c;++k){
		frq[k]=0;
	}//end for
	for(k=0;k<b;++k){
		++frq[array[k]];
	}//end for
	printf( "%s%17s%15s\n", "Rating", "Frequency", "Histogram" );
	// output the frequencies in a tabular format
	for ( k = 1; k < c; ++k ) {
	printf( "%6d%17d      ", k, frq[ k ] );
		for(j=1;j<=frq[k];++j){
			printf("%c", '*');
		}//end for
	puts("");
	} // end for
}//end frqarray()
/*beginning of modearray()*/
void modearray(int* array, int b, int rate){
	/*						WARNING 
	 *<this is used on arrays with values between 0 and rate> 
	 *modearray() it's a function that determinate
	 *and prints the mode of an array
	 *
	 */
	int c[rate+1];
	int i, largest_value=0, mode_value;
	for(i=0;i<=rate;++i){
		c[i]=0;
	}//end for
	for(i=0;i<b;++i){
		++c[array[i]];
	}//end for
	for(i=1;i<=rate;++i){
		if(c[i]>largest_value){
			largest_value = c[i];
			mode_value = i;
		}//end if
	}//end for	
	printf("\n Mode: %d\n repeated %d times\n",mode_value,largest_value);
}//end modearray()
/*beginning of meanarray()*/
float meanarray(int* array, int b){
	/* meanarray() it's a function that returns the
	 * mean of an array 
	 */
	int i,total=0;
	for(i=0;i<b;++i){
		total+=array[i];
	}//end for
	return (double)total/b; 
}//end meanarray()
int srcharray(int* array, int b, int value){
	/* srcharray() it's a function that lookup for a value in an array. 
	 * it returns 0 is the value exicted and -1 if not
	 */
	int i;
	for(i=0;;++i){
		if(array[i]==value){
			return 0;
		}//end if
	}//end for
	return -1;
}//srcharray()
int bsrcharray(int* array, int b, int value, int min, int max){
	/*				WARNING
	 * <this function is used on stored arrays>
	 * bsrcharray() it's a similer 
	 */
	int middle;
	middle = (int) (min+max)/2;
	while(min<=max){
		if(value==array[middle]){
			return 0;
		}//end if
		else if(value<array[middle]){
			max = middle - 1;
		}//end else if
		else{
			min = middle + 1; 
		}//end else
	}//end while
	return -1;
}//end bsrcharray()
void shufarray(int* array, int b){
	int i,k=0;
	srand(time(NULL));//set the seed
	/* Starting from the last element and swap one by one.
	 * NOTE: i > 0 it's because there's no need to run for the first element */
	for (i = b-1; i > 0; i--){
		int j = rand() % (i+1);
		//swap
		k =  array[i];
		array[i] = array[j];
		array[j] = k;
	}//end for
}//end shufarray()
