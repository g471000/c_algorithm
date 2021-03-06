#include <stdio.h>

void printNumbers(int a, int b, int c){
	printf("You Inserted Numbers: [%d, %d, %d]", a, b, c);
}

int main(){
	/* input 3 numbers */
	int a, b, c;
	printf("/nInsert First Number -> ");
	scanf("%d", &a);
	printf("Insert SecondNumber -> ");
	scanf("%d", &b);
	printf("Insert Third Number -> ");
	scanf("%d", &c);

	if(a > b){
		int temp = a;
		a = b;
		b = temp;
	}

	if(a > c){
		printNumbers(c, a, b);
	} else if (b > c) {
		printNumbers(a, c, b);
	} else {
		printNumbers(a, b, c);
	}
}

