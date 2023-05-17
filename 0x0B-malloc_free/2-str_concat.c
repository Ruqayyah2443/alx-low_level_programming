#include "main.h"
#include <stdlib.h>
/**
 * str_concat - a function that concatenates two strings
 * @s1: input 1 to concat
 * @s2: input 2 to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *conct;
	int a, con;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	a = con = 0;
	while (s1[a] != '\0')
		a++;
	while (s2[con] != '\0')
		con++;
	conct = malloc(sizeof(char) * (a + con + 1));

	if (conct == NULL)
		return (NULL);
	a = con = 0;
	while (s1[a] != '\0')
	{
		conct[a] = s1[a];
		a++;
	}

	while (s2[con] != '\0')
	{
		conct[a] = s2[con];
		a++, con++;
	}
	conct[a] = '\0';
	return (conct);
}
