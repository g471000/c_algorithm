#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_STACK_SIZE 100
#define MAX_ROW 10
#define MAX_COL 10

typedef struct {
	short int row;
	short int col;
} element;	

element nullElem = {-1, -1};
element stack[MAX_STACK_SIZE];

int top = -1;

int maze[MAX_ROW][MAX_COL] = {
	{1,1,1,1,1,1,1,1,1,1},
	{0,0,1,1,1,1,1,1,1,1},
	{1,0,1,1,0,0,0,1,0,1},
	{1,0,0,0,0,1,0,1,0,1},
	{1,0,1,1,1,1,0,1,0,1},
	{1,0,1,0,0,0,0,1,0,1},
	{1,1,1,0,1,1,1,1,0,1},
	{1,0,1,0,0,0,0,0,0,1},
	{1,0,0,0,1,1,1,1,0,1},
	{1,1,1,1,1,1,1,1,0,1}
};

bool isEmpty() {
	return top == -1;
}

element pop(){
	if(isEmpty()){
		printf("[Error] Stack Empty\n");
		printf("Cannot solve this maze. No more option is available.\n");
		printf("Sorry. Good bye.\n");
		exit(0);
	}
	return stack[top--];
}

void push(element item){
	if(top < MAX_STACK_SIZE){
		stack[++top] = item;
	} else {
		printf("[Error] Stack Full\n");
		printf("Stack is full. Cannot escape this maze with this stack option.\n");
		printf("Sorry. Good bye.\n");
		exit(0);
	}
}

element peek(){
	if(isEmpty()){
		printf("[ERROR] No TOP.\n");
		printf("Cannot solve this maze. Sorry. Bye.\n");
		exit(0);
	}
	printf("top is [%d, %d]\n", stack[top].row, stack[top].col);	
	return stack[top];
}

bool isAvailable(int row, int col){
	return row >= 0 && col >=0 && row < MAX_ROW && col < MAX_COL && maze[row][col] == 0;
}

void findPath(){
	element entrance = {1, 0};	
	push(entrance);
	while(isEmpty() == 0){
		element curr = pop();	
		maze[curr.row][curr.col] = 8;
		printf("Visited [%d, %d]\n", curr.row, curr.col);
		if (curr.row == MAX_ROW - 1 && curr.col == MAX_COL - 2){
			printf("Escaped!\n");
			return;
		}
		if(isAvailable(curr.row - 1, curr.col) == 1){
			element up = {curr.row - 1, curr.col};
			push(up);
		}
		if (isAvailable(curr.row + 1, curr.col) == 1){
			element down = {curr.row + 1, curr.col};
			push(down);
		}
		if (isAvailable(curr.row, curr.col + 1) == 1){
			element right = {curr.row, curr.col + 1};
			push(right);
		}
		if (isAvailable(curr.row, curr.col - 1) == 1){
			element left = {curr.row, curr.col - 1};
			push(left);
		}
	}
}


void printMaze(){
	for (int i = 0; i < MAX_ROW; i++){
		for (int j = 0; j < MAX_COL; j++){
			printf("%d ", maze[i][j]);
		}
		printf("\n");
	}
}

int main(){
	printMaze();
	findPath();
}
