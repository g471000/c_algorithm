#include <stdio.h>

int sigma(int n){
	int r;
	for (r = 0; n > 0; n--){
		r += n;
	}
	return r;
}

int main(void){
	int inputNum;
	printf("\nInput number -> ");
	scanf("%d", &inputNum);
	printf("\nSigma 1 to %d is %d.\n", inputNum, sigma(inputNum));
}
