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

	int rowSize;

	printf("Enter the size of the multiplication table");
	fflush(stdout);
	scanf("%d", &rowSize);

	printf("row size: %d", rowSize);

	int array[rowSize][rowSize];

	for (int innerRow = 1; innerRow <= 15; innerRow++)
	{
		for (int innerColumn = 0; innerColumn < 30; innerColumn++)
		{
			//gets the value for the table
			array[innerRow][innerColumn] = innerRow * innerColumn;
		}
	}

	for (int innerRow = 0; innerRow < 15; innerRow++)
	{
		printf("Row %d ", innerRow);
		for (int innerColumn = 0; innerColumn < 30; innerColumn++)
		{
			printf("%d ", array[innerRow][innerColumn]);
		}
		printf("\n");


	}
	return 0;
}
