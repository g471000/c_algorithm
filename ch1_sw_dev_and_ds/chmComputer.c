#include <stdio.h>
#include <time.h>
#include <math.h>
#include <stdlib.h>

#define REPLACE_VAL	200

/**
 * Assign random values from 0 to 500 to each index in the given array. 
 */
void generateArray(int array[], int size){
	for(int i = 0; i < size; i++){
		array[i] = rand() % 501;
	}
}

/**
 * If any of the value is less than 100 or greater than 400, replace with 200.
 * count number of elements that were replaced
 */
int replaceOutliers(int array[], int size){
	int count = 0;
	for(int i = 0; i < size; i++){
		if(array[i] < 100 || array[i] > 400){
			array[i] = REPLACE_VAL;
			count++;
		}	
	}	
	return count;
}

// calculate avg of the array elements
double computeAvg(int array[], int size){
	int sum = 0;	
	for(int i = 0; i < size; i++){
		sum += array[i];
	}
	return (double)sum / size;
}

// compute variance of the array
double computeVar(int array[], int size, double avg){
	double variance = 0;
	for(int i = 0; i < size; i++){
		variance += pow(array[i] - avg, 2);
	}	
	return variance / size;
}

// count number of big numbers
int countBig(int array[], int size, double avg){
	int count = 0;
	for(int i = 0; i < size; i++){
		if(array[i] > avg){
			count++;
		}
	}
	return count;
}

void compute(int array[], int size, int *outLier, double *avg, double *var, int *big){
	// replace all outliers with REPLACE_VAL, then return number of outliers0
	*outLier = replaceOutliers(array, size);

	// Calculate Avgerage
	*avg = computeAvg(array, size);
	
	// Calculate Variance
	*var = computeVar(array, size, *avg);	

	// Count Big Numbers
	*big = countBig(array, size, *avg);
}

// print helper
void printMessage(int outLier, double avg, double var, int big){
	printf("\nNumber of out-liers: %d\n", outLier);
	printf("Average: %.2f\n", avg);
	printf("Number of variance: %.2f\n", var);
	printf("Number of big numbers: %d\n", big);
}

void printArray(int array[], int size){
	printf("[");
	for(int i = 0; i < size; i++){
		printf("%d", array[i]);
		if(i < size - 1){
			printf(",");
		}
	}
	printf("]\n");
}

int main(){
	time_t t;
	int size = 100;	
	int array[size];
	
	// get current time and print
	time(&t);
	printf("\ncurrent time is: %s\n", ctime(&t));

	generateArray(array, size);
	printf("\nArray before compute: ");
	printArray(array, size);

	int outLier, big;
	double avg, var;
	compute(array, size, &outLier, &avg, &var, &big); 
	printf("\nArray after compute: ");	
	printArray(array, size);
	
	printf("Result: ");
	printMessage(outLier, avg, var, big);

	
}
