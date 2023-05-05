#include "main.h"

/**
 * _strncpy - functions that copies a string
 * @src: the source of strings
 * @dest: the destination of the string
 * @n: the length of int
 *
 * Return: pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && *(src + i); i++)
	{
		*(dest + 1) = *(src + 1);
	}
	for (; i < n; i++)
	{
	*(dest + i) = '\0';
	}
	return (dest);
}