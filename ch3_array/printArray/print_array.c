#include <stdio.h>

void printArray(int *ptr, int rows){
	printf("--Address----Value---\n");
	printf("---------------------\n");
	for(int i = 0; i < rows; i++){
		printf(" %8u%5d\n", (ptr + i), *(ptr + i));
	}
	printf("\n");
}

int main(){
	int one[] = {0, 1, 2, 3, 4};
	printArray(one, 5);
}
