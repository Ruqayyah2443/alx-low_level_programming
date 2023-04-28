#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 *
 * Description: prints the numbers from 1 to 100, followed by a new line b
 * ut for multiples of three print fizz instead of the number and 
 * for the multiples of five print Buzz
 *
 * Return: always 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}