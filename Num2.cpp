#include <stdio.h>
int main() {
	int a, b, c, x;
	printf("Еnter three numbers: \n");
	scanf_s("%d%d%d", &a, &b, &c);
	x = a + b + c;
	printf("Result is %d+%d+%d=%d\n", a, b, c, x);
	return 0;
}