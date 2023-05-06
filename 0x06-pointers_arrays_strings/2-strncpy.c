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
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
