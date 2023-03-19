#include <stdio.h>

/**
 * main - print the alphabet in lowercase and then uppercase
 *
 * Return: Always 0 (succes)
 */

int main(void)
{
	int i, j;

	i = 97;
	j = 65;

	while (i < 123)
	{
		putchar (i);
		i++;
	}

	while (j < 91)
	{
		putchar (j);
	}

	putchar (10);

	return (0);
}
