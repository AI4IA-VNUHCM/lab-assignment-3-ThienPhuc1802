/*
5. Write a function to move all positive element of an array upfront
Ex:
______________________________________
| Input: 2 -3 4 6 -7 9 8 -2          |
| Output: 2 4 6 9 8 -3 -7 -2         |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Ex5(int arr[], int n){
	int i,j;
	int arrpositive[n];
	int arrnegative[n];
	int cp,cn;
	cp =0;
	cn=0;
	for (int i = 0; i <n ; i++) {
		if (arr[i]>0){
			arrpositive[cp]=arr[i];
			cp++;
		}
		else{ 
			arrnegative[cn]=arr[i];
		 cn++;	
		}
       
		}	 
	for (int i = 0; i < cp; i++) {
        printf("%d ", arrpositive[i]);}

	for (i=0;i<cn;i++){
		printf("%d ", arrnegative[i]);
	}
} 

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	argc--;
	int testcase[argc],i;
	for(i=0; i<argc;i++){
		testcase[i] = atoi(argv[i+1]);
	}
	
	Ex5(testcase, argc);
	
	return 0;
}
