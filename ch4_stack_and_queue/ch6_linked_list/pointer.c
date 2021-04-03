#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, *pi;
	float f, *pf;
	pi = (int*)malloc(sizeof(int));
	pf = (float*)malloc(sizeof(float));
	
	printf("Please enter an integer: ");
	scanf("%d", &i);
	printf("Please enter a float: ");
	scanf("%f", &f);
	*pi = i;
	*pf = f;
	printf("an integer %d is at %d\n", *pi, pi);
	printf("an float %f is at %d\n", *pf, pf);
	free(pi);
	free(pf);
}
