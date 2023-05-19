#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#define ERR_MSG "Error"

/**
 * is_digit - checks to ensure it contains digits
 * @s: string to be checked
 *
 * Return: 0 if digit, 1 otherwise
 */

int is_digit(char *s)
{
	int x = 0;

	while (s[x])
	{
		if (s[x] < '0' || s[x] > '9')
			return (0);
		x++;
	}
	return (1);
}

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		x++;
	}
	return (x);
}

/**
 * errors - handles errors for main
 */

void errors(void)

{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies  numbers
 * @argc: num of arguments
 * @argv: array of arguments passed
 * Return: 0 if (Success)
 */

int main(int argc, char *argv[])

{
	char *b1, *b2;
	int l1, l2, l, i, carry, digit1, digit2, *result, a = 0;

	b1 = argv[1], b2 = argv[2];
	if (argc != 3 || !is_digit(b1) || !is_digit(b2))
		errors();
	l1 = _strlen(b1);
	l2 = _strlen(b2);
	l = l1 + l2 + 1;
	result = malloc(sizeof(int) * l);
	if (!result)
		return (1);
	for (i = 0; i <= l1 + l2; i++)
		result[i] = 0;
	for (l1 = l1 - 1; l1 >= 0; l1--)
	{
		digit1 = b1[l1] - '0';
		carry = 0;
		for (l2 = _strlen(b2) - 1; l2 >= 0; l2--)
		{
			digit2 = b2[l2] - '0';
			carry += result[l1 + l2 + 1] + (digit1 * digit2);
			result[l1 + l2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[l1 + l2 + 1] += carry;
	}
	for (i = 0; i < l - 1; i++)
	{
		if (result[i])
			a = 1;
		if (a)
			_putchar(result[i] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
