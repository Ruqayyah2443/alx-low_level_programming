#include "main.h"

/**
 * print_alphabet_x10 - function that print 10x alphabets
 *
 */

void print_alphabet_x10(void)
{
	char ch;

	int i;

	i = 0;

	while (i < 10)
	{
		ch = 'a';
		while (i <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');

		i++;
	}
}
