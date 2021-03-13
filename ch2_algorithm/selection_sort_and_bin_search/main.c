#include <stdio.h>
#include <stdlib.h>
#include "selectionsort.h"
#include "binsearch.h"


int main() {

	int arraySize;

	printf("Insert array size -> ");
	scanf("%d", &arraySize);
	
	printf("Creating array with size %d.....\n", arraySize);	
	

	int array[arraySize];
	assignValuesToArray(array, arraySize);
	printf("Generated Array: ");
	printArray(array, arraySize);

	selectionSort(array, arraySize);
	printf("Array after Selection Sort: ");
	printArray(array, arraySize);	

	int index = rand();
	printf("rand %d and array size %d", index, arraySize);
	index = 5;

	int searchNum = array[index];	
	printf("\nFinding Number [%d]", searchNum);
	int numIndex = binsearch(array, searchNum, 0, arraySize - 1); 
	printf("\nFound Number [%d] at index %d", searchNum, numIndex);	

}


