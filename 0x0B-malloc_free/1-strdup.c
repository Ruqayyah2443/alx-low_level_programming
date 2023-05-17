#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - print a pointer to a new space in memory, with a
 * copy of the string given as a parameter
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *cc;
	int a, z = 0;

	if (str == NULL)
		return (NULL);
	a = 0;
	while (str[a] != '\0')
		a++;

	cc = malloc(sizeof(char) * (a + 1));

	if (cc == NULL)
		return (NULL);

	for (z = 0; str[z]; z++)
		cc[z] = str[z];

	return (cc);
}
