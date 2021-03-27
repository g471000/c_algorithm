#include <stdio.h>
#define MAX_SIZE 100

float sum(float list[], int n);

int main(){
	float input[MAX_SIZE];
	for(int i = 0; i < MAX_SIZE; i++){
		input[i] = i;
	}
	printf("The sum is: %f\n", sum(input, MAX_SIZE));
}

float sum(float list[], int n){
	float sum = 0;
	for(int i = 0; i < n; i++){
		sum += list[i];
	}
	return sum;
}
