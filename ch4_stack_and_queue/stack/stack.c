#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX_STACK_SIZE 10

int stack[MAX_STACK_SIZE];
int top = -1;

bool isFull(){
	return top >= MAX_STACK_SIZE - 1;
}

bool isEmpty(){
	return top < 0;
}

void push(){
	if(isFull()){
		printf("Stack is full. Please pop any value, and try again.\n");		
	} else {
		int val;
		printf("Insert value to push: ");
		scanf("%d", &val);
		printf("Inserted [%d] at top [%d]\n", val, top + 1);
		stack[++top] = val;
		printf("Size of Stack: %d\n", top + 1);
	}
}

int pop(){
	if(isEmpty()){
		printf("Stack is empty. Nothing to pop.\n");
		return -1;
	} else {
		printf("Poped [%d] at top [%d]\n", stack[top], top);
		printf("Size of Stack: %d\n", top);
		return stack[top--];
	}
}

void printStack(){
	printf("stack(bottom -> top): [");
	for(int i = 0; i <= top; i++){
		printf("%d", stack[i]);
		if(i < top){
			printf(",");
		}	
	}
	printf("], size of Stack: %d\n", top + 1);
}

int menu(){
	printf("Please select option:\n");
	printf("1. Push, 2. Pop, 3. Print, 4. Exit => ");	
	int option;
	scanf("%d", &option);
	if (option > 0 && option < 5){
		return option;
	}
	return -1;
}

int main(){
	printf("Welcome to small stack world! Stack MAX size is %d.\n", MAX_STACK_SIZE);
	while(1){
		int option = menu();
		switch(option){
			case 1:
				push();
				break;	
			case 2:
				pop();
				break;
			case 3:
				printStack();	
				break;
			case 4:
				printf("Thank you. Good bye!\n\n");
				exit(0);
			default:
				printf("Invalid option. Please try again.");
				break;
		}
		printf("\n");
	}	
}
