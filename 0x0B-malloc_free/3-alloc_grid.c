#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - print a function that returns a pointer
 * to a 2 dimensional array of integers
 * @width: width of the array
 * @height: height of the array
 * Return: pointer to 2 dimensional array
 */
int **alloc_grid(int width, int height)
{
	int **cal;
	int a, z;

	if (width <= 0 || height <= 0)
		return (NULL);

	cal = malloc(sizeof(int *) * height);

	if (cal == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		cal[a] = malloc(sizeof(int) * width);

		if (cal[a] == NULL)
		{
			for (; a >= 0; a--)
				free(cal[a]);

			free(cal);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
	{
		for (z = 0; z < width; z++)
			cal[a][z] = 0;
	}

	return (cal);
}
