#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - a program that prints the minimum number of
 * coins to make change for an amount of money
 * @argc: number of arguments passed into the program
 * @argv: array of arguments
 *
 * Return: 0 if Success, 1 if Error
 */

int main(int argc, char *argv[])
{
	int num, j, result;
	int cent[] = {25, 10, 5, 2, 1};

	if (argc != 2)

	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	result = 0;

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}

	for (j = 0; j < 5 && num >= 0; j++)
	{
		while (num >= cent[j])
		{
			result++;
			num -= cent[j];
		}
	}
	printf("%d\n", result);
	return (0);
}
