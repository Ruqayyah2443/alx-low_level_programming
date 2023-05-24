#include "function_pointers.h"
#include <stdio.h>

/**
* array_iterator - prints function that executes a function given as
* a parameter on each element of an array.
* @array: array
* @size: size of array
* @action: pointer to the function needed
*
* Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array == NULL || action == NULL)
		return;

	for (x = 0; x < size; x++)
	{
		action(array[x]);
	}
}
