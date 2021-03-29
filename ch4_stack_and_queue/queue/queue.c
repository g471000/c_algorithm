#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_QUEUE_SIZE 5 

typedef struct {
	int key;
} element;

element queue[MAX_QUEUE_SIZE];
element nullElement = {-1};
int rear = -1;
int front = -1;

bool isRearEnd(){
	return rear == MAX_QUEUE_SIZE - 1;
}

bool isFull(){
	return isRearEnd() && front == -1;
}


bool isEmpty(){
	return front == rear;
}

void arrange(){
	for(int i = front + 1; i < MAX_QUEUE_SIZE; i++){
		queue[i - front - 1] = queue[i];
	}
	rear = rear - front - 1;
	front = -1; 
}

element peek(){
	if(isEmpty()){
		return nullElement;
	}
	return queue[front + 1];
}

void enqueue(element item){
	if(isFull()){
		printf("Queue is full. Cannot enqueue any value.\n");	
	} else {
		if(isRearEnd()){
			arrange();	
		}
		queue[++rear] = item;
	}
}

void printQueue(){
	printf("queue: [");
	for(int i = front + 1; i <= rear; i++){
		printf("%d", queue[i].key);
		if(i < rear){
			printf(",");
		}
	}
	printf("], Size of Queue: %d\n", rear - front);
	printf("front: %d, rear: %d\n", front, rear);
}

element dequeue(){
	if(isEmpty()){
		printf("Queue is Empty. Cannot dequeue.\n");
		return nullElement;
	} else {
		return queue[++front];	
	}
}

int menu(){
	printf("Please select option below:\n");
	printf("1. Queue, 2. Dequeue, 3. Peek, 4. Exit => ");
	int option;
	scanf("%d", &option);
	return option;
}

int main(){
	printf("Welcome to small QUEUE!\n");
	while(1){
		int option = menu();
		element item;
		switch(option){
			case 1:
				printf("Enter key of the item: ");
				scanf("%d", &item.key);
				enqueue(item);
				printQueue();
				break;
			case 2:
				item = dequeue();
				if(item.key != -1){
					printf("Deleted [%d] from the queue.\n", item.key);
				}
				printQueue();
				break;
			case 3:
				item = peek();
				if(item.key == -1){
					printf("Queue is empty. Cannot find peek of the queue.\n");
				} else {
					printf("Front of the queue is: [%d]\n", item.key);
				}
				break;
			case 4:
				printf("Thank you. Good bye :)\n\n");
				exit(0);
			default:
				printf("Invalid Option. Please try again.\n");
				break;	
		}
		printf("\n");
	}
}








