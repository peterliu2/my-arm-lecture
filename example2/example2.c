#include <stdio.h>

extern int multiply(int a, int b);
extern int multiplyadd(int a, int b, int c);
extern int multiplysub(int a, int b, int c);

int main(void)
{
	int a, b, c, d;
	a = 10;
	b = 14;
	c = 3;
	d = multiply(a,b);
	printf("%d * %d is %d\n",a, b, d);
	d = multiplyadd(a,b,c);
	printf("%d * %d + %d is %d\n",a ,b, c, d);
	d = multiplysub(a,b,c);
	printf("%d - %d * %d is %d\n",c, a, b, d);

	return 0;
}
