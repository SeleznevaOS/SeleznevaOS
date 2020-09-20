#include <stdio.h>

int main() {

	int a, b, x;
	printf("Еnter two numbers: \n");
	scanf_s("%d%d", &a, &b);
	x = a + b;
	printf("Result is %d+%d=%d\n", a, b, x);



	return 0;

}