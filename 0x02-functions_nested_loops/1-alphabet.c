#include "main.h"

/**
 * print_putchar - print all alphabet in lowercase
 */

void print_alphabet(void)
{
	char ietter;

	for (letter = 'a' ; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
