#include <stdio.h>
#include "main.h"

/**
 * main - Write a program that prints the number of arguments passed into it
 * @argc: number of arguments
 * @argv: array of arguments passed into the programm
 *
 * Return: 0 if (Success)
 */

int main(int argc, char *argv[])
{
(void) argv; /*Leave argv*/
	printf("%d\n", argc - 1);

	return (0);
}
