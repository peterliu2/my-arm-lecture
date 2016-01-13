#include <stdio.h>

int dividebytwo(int a);

int main(void)
{
	int a, b, d;
	a = -20;
	b = -8;
	d = dividebytwo(a) / dividebytwo(b);
	printf("a(%d)/2 / b(%d)/2 is %d\n", a, b, d);

	return 0;
}

int dividebytwo(int a)
{
	return a/2;
}
