#include <stdio.h>
#include <stdlib.h>

void selectionSort(int array[], int arraySize){	
	int temp, min;
	for(int i = 0; i < arraySize - 1; i++){
		min = i;
		for(int j = i + 1; j < arraySize; j++){
			if(array[j] < array[min]){
				min = j;
			}
		}
		temp = array[i];
		array[i] = array[min];
		array[min] = temp;	
	}
}

void printArray(int array[], int arraySize){
	printf("[");
	for(int i = 0; i < arraySize; i++){
		printf("%d", array[i]);
		if(i < arraySize - 1){
			printf(",");
		}
	}
	printf("]\n");
}

void assignValuesToArray(int array[], int arraySize){
	for(int i = 0; i < arraySize; i++){
		array[i] = rand() % 100;
	}
}

