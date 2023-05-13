#include <stdio.h>
#include "main.h"

/**
 * main - a program which prints all arguments it receives
 * @argc: number of arguments
 * @argv: array of arguments passed to the program
 * Return: 0 if (Success)
 */

int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}
