/*
 ============================================================================
 Name        : Midterm1.c
 Author      : Robert Delfin
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int rowSize = 0;

	int innerRow;
	int innerColumn;

	printf("Enter the size of the multiplication table ");
	fflush(stdout);
	scanf ("%d", &rowSize);
	printf("   ");
	for(innerRow = 1; innerRow <= rowSize; innerRow++){

		printf("%d ", innerRow);

	}
	printf("\n+-------------------------------------------------------------------\n");

	int array[rowSize][rowSize];

	for (innerRow = 1; innerRow <= rowSize; innerRow++)
	  {
	    for (innerColumn = 1; innerColumn <= rowSize; innerColumn++)
	    {
	    	//gets the value for the table
	      array[innerRow][innerColumn] = innerRow * innerColumn ;
	    }
	  }

	 for (innerRow = 1; innerRow <= rowSize; innerRow++)
	 {
		 printf("%d |", innerRow);
		 for (innerColumn = 1; innerColumn <= rowSize; innerColumn++)
		 {
	        printf("%d ", array[innerRow][innerColumn]);
		 }
		 printf("\n");


	 }

	 return 0;
}
