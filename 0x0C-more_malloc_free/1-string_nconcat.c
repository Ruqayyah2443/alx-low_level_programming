#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat -print a function that concatenates two strings.
 * @s1: newly allocated space in memory
 * @s2: string char to concatenate from
 * @n: If the function fails, it should return NULL
 *
 * Return: pointer to the resulting string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int a = 0, b = 0, x = 0, len2 = 0;

	while (s1 && s1[x])
		x++;
	while (s2 && s2[len2])
		len2++;
	if (n < len2)
		s = malloc(sizeof(char) * (x + n + 1));
	else
		s = malloc(sizeof(char) * (x + len2 + 1));
	if (!s)
		return (NULL);
	while (a < x)
	{
		s[a] = s1[a];
		a++;
	}
	while (n < len2 && a < (x + n))
		s[a++] = s2[b++];
	while (n >= len2 && a < (x + len2))
		s[a++] = s2[b++];
	s[a] = '\0';
	return (s);
}
