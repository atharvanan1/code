#include<stdio.h>

int func(void)
{
	int a = 4;
	return a;
	a=10;
}

int main(void)
{
	int a = 5;
	printf("%d, %d\n", a, func());
	return 0;
}
