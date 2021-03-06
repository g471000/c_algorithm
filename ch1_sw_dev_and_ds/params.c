#include <stdio.h>

/*
 * The numbers changed within the function only
 */
void subNum(int x, int y, int z){
	y = y + 2;
	z = z + x;
}

/*
 *
 */
void subNum2(int *x, int *y, int *z){
	*y = *y + 2;
	*z = *z + *x;
}

int main(){
	int a = 2, b = 3, c = 4;
	
	// pass numbers to function and do some calculation.
	// Returns same numbers
	subNum(a, b, c);
	printf("%d, %d, %d\n", a, b, c);

	// pass numbers' reference
	// Returns modified numbers
	subNum2(&a, &b, &c);
	printf("%d, %d, %d\n", a, b, c);
}
