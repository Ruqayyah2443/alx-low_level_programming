#include <stdio.h>
#include "main.h"

/**
 * main - Write a program that prints its name, followed by a new line
 * @argc: number of arguments
 * @argv: array of arguments passed
 *
 * Return: 0 if (Success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
