#include <stdio.h>
#include "main.h"

/**
 * main - find and prints the largest the largest prime factor of the number 612852475143
 * Return: always 0
 */

int main(void)
{
	long int n;
	long int max;
	long int i;

	while (n % 2 == 0)
	{
		max = 2;
		n /= 2;
	}

	for (i = 3; i <= sqrt(n); i = i + 2)
	{
		while (n % i ==0)
		{
			max = i;
			n = n / i;
		}
	}

	if (n > 2)
		max = n;

	printf("%1d\n", max);

	return (0);
}
