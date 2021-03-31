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

element pop(){
	if(top == -1){
		printf("[Error] Stack Empty\n");
		printf("Cannot solve this maze. No more option is available.\n");
		printf("Sorry. Good bye.\n");
		exit(0);
	}
	return stack[top--];
}

void push(element item){
	if(top < MAX_STACK_SIZE){
		printf("Pushed [%d,%d]\n", item.row, item.col);
		stack[++top] = item;
	} else {
		printf("[Error] Stack Full\n");
		printf("Stack is full. Cannot escape this maze with this stack option.\n");
		printf("Sorry. Good bye.\n");
		exit(0);
	}
}

element top(){
	if(top == -1){
		printf("[ERROR] No TOP.\n");
		printf("Cannot solve this maze. Sorry. Bye.\n");
		exit(0);
	}
	return stack[top];
}

void findPath(){
	element item = {1, 0};	
	push(item);
}

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
