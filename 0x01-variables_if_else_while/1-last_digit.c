#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry Point
 * Return: Always (0) success
 */
int main(void)
{
	int n;
	int lw;
	lw = n % 10;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (lw > 5)
	{	printf("%d last digit,and is greater than 5 %d ", n, lw);
	}
	else if (lw == 0)
	{	printf("last digit of %d,and is 0 %d", n, lw);
	}
	else
	{	printf("the last digit of %d is %d and is less than 6 and not 0", n, lw);
	}
	return (0);
}
