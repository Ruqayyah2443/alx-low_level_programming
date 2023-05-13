#include <stdio.h>
#include "main.h"

/**
 * _putchar - The character c to standard output
 * @c:The character which is to be printed
 *
 * Return: Succes (1)
 * On error, return -1 and errno is set appropriately.
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}
