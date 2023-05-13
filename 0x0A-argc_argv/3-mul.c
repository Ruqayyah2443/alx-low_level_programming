#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers.
 * @argc: number of arguments
 * @argv: array of arguments written into the command
 *
 * Return: 0 if (Success), 1 if (Error)
 */

int main(int argc, char *argv[])
{
	int result, a, b;

	if (argc < 3 || argc > 3)

	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	result = a * b;
	printf("%d\n", result);
	return (0);
}
