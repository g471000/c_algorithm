#include <stdio.h>
#include <time.h>
#define MAX_SIZE 1601
#define ITERATIONS 26

void sort(int list[], int n);
void printArray(int list[], int n);

int main(){
	int position;
	int list[MAX_SIZE];

	// create size list
	int sizelist[] = {0, 10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 200, 300, 400,
		500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500, 1600};

	// start, end time and duration value of the analyze
	clock_t start, stop;
	double duration;

	printf("Start anlysis\n");
	for(int i = 0; i < ITERATIONS; i++){
		for(int j = 0; j < sizelist[i]; j++){
			list[j] = sizelist[i] - j;
		}		
		//run timer and sorting
		start = clock();
		sort(list, sizelist[i]);
		stop = clock();
		
		duration = ((double)(stop - start)) / CLOCKS_PER_SEC;
		printf("n = %6d, time = %8.8f, sorted array = ", sizelist[i], duration);
		printArray(list, sizelist[i]);
	}
}	

void swap(int list[], int i, int j){
	int temp = list[i];
	list[i] = list[j];
	list[j] = temp;
}

void sort(int list[], int n){
	int minIndex, temp;
	for(int i = 0; i < n - 1; i++){
		minIndex = i;
		for(int j = i + 1; j < n; j++){
			if(list[j] < list[minIndex]){
				minIndex = j;
			}	
		}
		swap(list, minIndex, i);
	}	
}

void printArray(int list[], int n){
	printf("[");
	for(int i = 0; i < n; i++){
		if(i >= 10){
			printf("...,%d", list[n - 1]);
			break;
		}
		printf("%d", list[i]);
		if(i < n - 1){
			printf(",");
		}
	}
	printf("]\n");
}
