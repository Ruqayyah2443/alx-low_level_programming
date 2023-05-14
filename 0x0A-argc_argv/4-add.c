#include <stdio.h>
#include <stdlib.h>

/**
* main - a program that adds positive numbers
* @argc: Arguments that count
* @argv: Arguments written in the program
*
* Return: 0 if Success
*/

int main(int argc, char *argv[])
{
	int i;
	int b;
	int sum = 0;
	char *flag;

	if (argc < 2)
	{
		printf("0\n");
		return 0;
	}
	for (i = 1; argv[i]; i++)
	{
		b = strtol(argv[i], &flag, 10);
		if (*flag) 
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += b;
		}
	}
		printf("%d\n", sum);
		return (0);
}
