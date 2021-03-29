#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define MAX_QUEUE_SIZE 6

int queue[MAX_QUEUE_SIZE];
int front = 0, rear = 0;

void clear(){
	front = 0;
	rear = 0;
}

bool isFull(){
	return (rear + 1) % MAX_QUEUE_SIZE == front;	
}

bool isEmpty(){
	return rear == front;
}

void printQueue(){
	printf("Queue: [");
	if (isEmpty() == 0){
		int frontIndex = (front + 1) % MAX_QUEUE_SIZE;
		int rearIndex = (rear + 1) % MAX_QUEUE_SIZE;
		while(frontIndex != rearIndex){
			printf("%d", queue[frontIndex]);
			if(frontIndex != rear){
				printf(",");
			}
			frontIndex = (frontIndex + 1) % MAX_QUEUE_SIZE;
		}
	}
	printf("]\n");
}

void enqueue(int val){
	if(isFull()){
		printf("[ERROR] Queue is full. Cannot insert before dequeue.\n");
	} else {
		rear = (rear + 1) % MAX_QUEUE_SIZE;
		queue[rear] = val;
		printf("Enqueued [%d] at [%d]\n", val, rear);
	}	
}

int dequeue(){
	if(isEmpty()){
		printf("[ERROR] Queue is empty. Cannot dequeue from the queue.\n");
		return -1;
	}
	front = (front + 1) % MAX_QUEUE_SIZE;	
	printf("Dequeued [%d] at [%d]\n", queue[front], front);
	return queue[front];
}

int peek(){
	if(isEmpty()){
		printf("[ERROR] Queue is empty. Cannot find peek of the queue.\n");
		return -1;
	} else {
		int frontIndex = (front + 1) % MAX_QUEUE_SIZE;
		printf("Peek is [%d] at [%d]\n", queue[frontIndex], frontIndex);
		return queue[frontIndex];
	}
}

int menu(){
		printf("Please choose option:\n");
		printf("1. Queue, 2. Dequeue, 3. Peek, 4. Exit => ");
		int option;
		scanf("%d", &option);
		return option;
}

int main(){
	printf("Welcome to Circular Queue World!\n");
	while(1){
		int option = menu();
		int val;
		switch(option){
			case 1:
				printf("Please enter value: ");
				scanf("%d", &val);
				enqueue(val);
				printQueue();
				break;
			case 2:
				dequeue();
				printQueue();
				break;
			case 3:
				peek();
				break;
			case 4:
				printf("Thank you. Good Bye. Bye. Bye. and Bye.\n\n");	
				exit(0);
			default:
				printf("Invalid option. Please try again!\n");
		}
		printf("\n");
	}
}


