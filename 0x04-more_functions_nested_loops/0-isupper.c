#include "main.h"

/**
 * _isupper - upper letters
 * @c: char to check
 *
 * Return: 1 if c is upprecase, 0otherwise
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
