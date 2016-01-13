#include <stdio.h>

int add(int a, int b);
int subtract(int a, int b);

int a, b, x, d;
int main(void)
{
	asm("mrs %[result], apsr" : [result] "=r" (x) : );
	printf(" apsr was %x\n",x);
	
	a = 8;
	b = 8;

	asm("mrs %[result], apsr" : [result] "=r" (x) : );
	printf("Before operation, apsr was %x\n",x);

	d = (a >= b) > 0 ? add(a,b) : subtract(b,a);
	printf("%d + %d is %d\n", a, b, d);

	asm("mrs %[result], apsr" : [result] "=r" (x) : );
	printf("After operation, apsr was %x\n",x);

	return 0;
}

int add(int a, int b)
{
	asm("mrs %[result], apsr" : [result] "=r" (x) : );
	printf("add-> apsr was %x\n",x);
	return (a+b);
}

int subtract(int a, int b)
{
	return (a-b);
}
