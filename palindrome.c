#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int reverse(int num)
{
    int temp=0;
    while(num>0)
    {
        temp=(temp*10)+num%10;
        num=num/10;
    }
    return temp;
}

int main(void)
{
	clock_t start, end;
	double cpu_time_used;
	start = clock();

	int i = 999, j = 999;
	int num = 0;
	char buffer[7];
	int done = 0;

	for(i = 999; i >= 100 && !done; i--)
	{
		for(j = i; j >= 100 && !done; j--)
		{
			if (i*j == reverse(i*j))
			{
				num = i*j;
				done = 1;
				printf("%d\n", num);
			}
		}
	}
	end:
	end = clock();
	cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
	printf("%d is the largest three-digit palindrome. \n It's factors are %d, %d. \n CPU Time: %lf. \n", num, i, j, cpu_time_used);
	return 0;
}
