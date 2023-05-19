#include <stdlib.h>
#include "main.h"

/**
 * *_memset - prints memory filled with a constant byte
 * @s: memory area to be filled
 * @b: character to copy
 * @n: number of times to copy b
 *
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}

/**
 * *_calloc - print a function that allocates memory for an array,
 * using malloc.
 * @nmemb: allocates memory for an array
 * @size: elements of bytes
 *
 * Return: pointer to allocated memor
 */

void *_calloc(unsigned int nmemb, unsigned int size)

{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);
	_memset(ptr, 0, nmemb * size);
	return (ptr);
}
