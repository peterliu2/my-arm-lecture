#include <stdio.h>

int multiply(int a, int b);

int main(void)
{
	int a, b, d;
	a = 221412523;
	b = 3;
	d = multiply(a,b);
	printf("%d * %d is %d\n", a, b, d);

	return 0;
}

int multiply(int a, int b)
{
	return (a*b);
}
