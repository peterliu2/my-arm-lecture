#include <stdio.h>

int fibonacci(int x);

int main(int argc, char **argv)
{
  int number=0;
  int result=0;

  (void) scanf("%d",&number);
  result = fibonacci(number);   
  printf("The fibonacci sequence at %d is: %d\n", number, result);
}

int fibonacci(int x)
{
	int nowValue = 0;
	int preValue_1 = 1;
	int preValue_2 = 0;

	if (x == 0) return 0;
	if (x == 1) return 1;

	for (int i=0; i<= x-2; i++)
	{
		nowValue   = preValue_1 + preValue_2;
		preValue_2 = preValue_1;
		preValue_1 = nowValue;
	}

	return nowValue;
}

