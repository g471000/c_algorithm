#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define LEN 20

void printArrayAsNumber(int array[], int size){
	bool nonZeroFound = false;
	for(int i = 0; i < size; i++){
		if (array[i] > 0){
			nonZeroFound = true;	
		}
		if (nonZeroFound == true){
			printf("%d", array[i]);
		}
	}
	printf("\n");
}

void createNumber(int a[], int size){
	for(int i = 0; i < size; i++){
		a[i] = (rand() % 10);	
	}
}

void add(int a[], int b[], int c[], int size){
	int carry = 0;
	for(int i = size - 1; i >= 0; i--){
		int sum = a[i] + b[i] + carry;
		carry = sum / 10;
		c[i + 1] = sum % 10;	
	}
	c[0] = carry;
}

int main(){
	int a[LEN]; 
	int b[LEN];
	createNumber(a, LEN);
	createNumber(b, LEN);
	
	int c[LEN + 1];
	
	printf("\n First Number:  ");
	printArrayAsNumber(a, LEN);
	printf("Second Number:  ");
	printArrayAsNumber(b, LEN);

	add(a, b, c, LEN);

	printf("------------------------------------------------\n");
	printf("          Sum: ");
	printArrayAsNumber(c, LEN + 1);
}

