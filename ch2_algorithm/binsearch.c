#include <stdio.h>

void printList(int list[], int size);
int binSearch(int list[], int searchNum, int size);
int binSearchHelper(int list[], int searchNum, int left, int right, int size);

int main(){
	int data[] = {12, 23, 25, 34, 45, 46, 57, 58, 69, 72, 75, 82, 86, 89, 97, 99};
	int size = 16;
	printf("Data Set: ");
	printList(data, size);

	binSearch(data, data[0], size);
	binSearch(data, data[3], size);
	binSearch(data, data[8], size);
	binSearch(data, data[13], size);
	binSearch(data, data[15], size);
	
	binSearch(data, data[0] - 1, size);
	binSearch(data, data[15] + 1, size);
}

int binSearch(int list[], int searchNum, int size){
	printf("\nNumber of data: %d, Searching data: %d\n", size, searchNum);	
	int result = binSearchHelper(list, searchNum, 0, size - 1, size);
	if (result== -1){
		printf("\n-->Failed to find the data: %d\n", searchNum);
		return -1;
	}
	return result;
}

int binSearchHelper(int list[], int searchNum, int left, int right, int size){
	if (left < 0 || right >= size){
		printf("left: %3d, right: %3d ---- [ERROR]: Invalid left or right value",
			left, right);
		return -1;
	}	
	int middle;
	int count = 0;

	while(left <= right){
		count++;
		middle = (left + right) / 2;
		printf("left: %3d, right: %3d, middle: %3d, value: %3d\n",
			left, right, middle, list[middle]);
		if(list[middle] == searchNum){
			printf("\nFound the data [%d] at index [%d]\n", searchNum, middle);
			printf("Total Search Count: %d\n\n", count);
			return middle;
		} else if (list[middle] > searchNum){
			right = middle - 1;
		} else {
			left = middle + 1;
		}
	}
	return -1;	
}

void printList(int list[], int size){
	printf("[");
	for(int i = 0; i < size; i++){
		printf("%d", list[i]);
		if(i < size - 1){
			printf(",");
		}
	}
	printf("]\n");
}
