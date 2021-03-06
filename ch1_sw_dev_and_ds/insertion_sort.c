#include <stdio.h>
#include <stdlib.h>

void selectionSort(int a[], int n){
	int min, minIndex, i, j;
	for(i = 0; i < n - 1; i++){
		minIndex = i;
		min = a[i];
		for(j = i + 1; j < n; j++){
			if(min > a[j]){
				min = a[j];
				minIndex = j;
			}
		}
		a[minIndex] = a[i];
		a[i] = min;
	}	
}

void printArray(int a[], int n){
	printf("[");
	for(int i = 0; i < n; i ++){
		printf("%d", a[i]);
		if(i < n - 1){
			printf(",");
		}
	}
	printf("]\n");
}

void assignValuesToArray(int a[], int n){
	for(int i = 0; i < n; i++){
		a[i] = rand() % 100;
	}
}

int main(){
	int arraySize;

	printf("Insert Array Size -> ");
	scanf("%d", &arraySize);
	int array[arraySize];
	assignValuesToArray(array, arraySize);
	printf("Generated Array: "); 
	printArray(array, arraySize);

	selectionSort(array, arraySize);
	printf("Sorted array using selection sort: "); 
	printArray(array, arraySize);
	
}



