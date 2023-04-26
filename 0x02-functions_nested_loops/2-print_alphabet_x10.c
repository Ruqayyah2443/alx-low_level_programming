#include "main.h"

/**
 * print_alphabet_x10 - function that print 10x alphabets
 *
 * Description: Write a function that prints 10 times the alphabet, in lowercase, followed by a new line
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int round = 0;
	char letter = 'a';

	while (round < 10)
	{
		letter = 'a';
		while (letter <= 'z')
		{
			_putchar(letter)
			letter++;
		}
		_putchar('\n');

		round++;
	}
}
