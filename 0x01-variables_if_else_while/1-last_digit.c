#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description: 'get the last digit of a number'
 * Return: Always 0
 */
int main(void)
{
	int n, last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if ((n % 10) > 5)
	{
		printf("last digit of %d is %d and is greater than 5\n", n, n % 10);
	}
	else if
	{       
		printf("last digit of %d is %d and is 0\n", n, n % 10);
	}
	else
	{       
		((n % 10) < 6 && (n % 10) != 0)
		printf("last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);
	}
	return (0);
}
