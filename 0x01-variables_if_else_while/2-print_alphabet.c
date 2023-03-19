#include <stdio.h>

/**
 * main - print the letters with alphabet
 *
 * Return: always 0
 */

int main(void)
{
	int i = 97;

	while (i < 123)
	{
		putchar(i);
		i++;
	}
	putchar(10);

	return (0);
}
