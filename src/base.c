#include "base.h"
/*beginning of array_max()*/
int array_max(int* array, int b){
	/*
	 * array_max() it's a function that
	 * returns the maximum element of
	 * 		the given array
	 * */
	int max=array[0];
	for(int i=0;i<b;++i){
			if(array[i]>max){
				max = array[i];
			}//end if
	}//end for
	return max;
}//end array_max()
/*beginning of array_min()*/
int array_min(int* array, int b){
	/*
	 * array_min() it's a function that
	 * returns the minimum element of
	 * 		the given array
	 * 		(Similar to array_max())
	 * */
	int min=array[0];
	for(int i=0;i<b;++i){
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
	for(int j=0;j<b;++j){
			array[j]=1 + rand() % b-1;
		}//end for
}//end farray()
/*beginning of inarray()*/
void inarray(int* array, int b){
	/*
	 * inarray() it's a function that set the array
	 * in increasing order
	 */
	int hold;
	for(int j=1;j<b;++j){
		for(int i=0;i<b-1;++i){
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
	 * inarray() it's a function that set the array
	 * in decreasing order
	 */
	int hold;
	for(int j=1;j<b;++j){
		for(int i=0;i<b-1;++i){
			if(array[i]>array[i+1]){
				hold=array[i];
				array[i]=array[i+1];
				array[i+1]=hold;
			}//end if
		}//end for
	}//end for
}//end desarray()
/*beginning  of parray()*/
void parray(int* array, int b, char* name){
	/*
	 * parray() it's a function that prints
	 * an array: <name>[<index>] = <value>
	 */
	for(int j=0;j<b;++j){
      printf("%s[ %d ] = %d\n", name, j,array[j]);
		}//end for
}//end parray
/*beginning of freqarray()*/
void freqarray(int* array, int b, int c){
	/* freqarray() it's a function that determinate the Frequency'
	 * of an array and display's is as 
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
	for (k=1;k<c;++k ) {
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
	 * <this is used on arrays with values between 0 and rate> 
	 * modearray() it's a function that determinate
	 * and prints the mode of an array
	 *
	 */
	int c[rate+1];
	int i, largest_value=0, mode_value=0;
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
	/* 
	 * meanarray() it's a function that returns the
	 * mean of an array 
	 */
	int total=0;
	for(int i=0;i<b;++i){
		total+=array[i];
	}//end for
	return (double)total/b; 
}//end meanarray()
int srcharray(int* array, int b, int value){
	/* 
	 * srcharray() it's a function that lookup for a value in an array. 
	 * it returns 0 is the value exicted and -1 if not
	 */
	
	for(int i=0;i<b;++i){
		if(array[i]==value){
			return 0;
		}//end if
	}//end for
	return -1;
}//srcharray()
int bsrcharray(int* array, int value, int min, int max){
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
	int k=0;
	srand(time(NULL));//set the seed
	/* 
	 * Starting from the last element and swap one by one.
	 * NOTE: i > 0 it's because there's no need to run for the first element 
	 */
	for (int i = b-1; i > 0; i--){
		int j = rand() % (i+1);
		//swap
		k =  array[i];
		array[i] = array[j];
		array[j] = k;
	}//end for
}//end shufarray()

int uniqarray(int* array, int b){
	/*							WARNING:
	 * 				< the size of the array will be > 
	 * 		< (original_size - counter*the returned value*) >
	 * <using the original array size will cause unwanted results>
	 * NOTE: the duplicated elements are removed and replaced by the next 
     * non-duplicated element 
	 * 
	 */
	int counter=0;
	for (int i=0; i<b; i++) {
		for (int j=i+1; j<b;) {
			if (array[j] == array[i]) {
				/*
				for( k=0;k<b;++k){
					if(array[j]!= duplicates[k]){
						duplicates[dupindex] = array[j];
						++dupindex;
					}//end if
				}//end for
				*/
				for (int k=j; k<b; k++) {
					array[k] = array[k + 1];
					}//end for
	            b--;
				++counter;
			}//end if 
			else j++;//end else
		}//end inner for
	}//end outter for
	/*
	puts("duplicated elements are:");
	for( i=0;i<=dupindex;++i){
		printf("%d", duplicates[i]);
		printf((int)i%3==0 ? '\n':'\t');
	}//end for
	*/
	return (unsigned int)counter;
}//end uniqarray()
long int sumarray(int* array, int b){
	/*sumarray() it's a function that returns the '
	 */
	long int sum=0;
	for(int i=0; i<b; ++i){
		sum+=array[i];
	}//end for
	return sum;
}//end sunarray()
/*
int randinarray(int* array, int b){
	return array[1 + rand()% b-1]; 
}//end randinarray()
*/
void exparray(int* array, int b){
	FILE *f = fopen("BASE.db", "w");
	if (f == NULL)
	{
		printf("Error Reading File\n");
		exit (0);
	}
	for(int j=0;j<b;++j){
		fprintf(f, "%d,",array[j]);
	}//end for
	fclose(f);
}//end exparray()
void imparray(int* array,int b){
	FILE *f;
	f = fopen("BASE.db", "r");
	if (f == NULL)
	{
		printf("Error Reading File\n");
		exit (0);
	}//end if
    for (int i = 0; i < b; i++)
	{
		fscanf(f, "%d,", &array[i] );
	}//end for
}//end imparray()
