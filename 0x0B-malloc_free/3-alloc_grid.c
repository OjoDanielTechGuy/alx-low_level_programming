#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * alloc_grid - function to return pointer
 * @width: width of grid
 * @height: height of grid
 * Return: NULL if width <= 0, height <= 0 on failure
 * or pointer to 2 dimensional array
 */
int **alloc_grid(int width, int height)
{
	int **twoD_array;
	int height_i, width_i;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	twoD_array = malloc(sizeof(int *) * height);

	if (twoD_array == NULL)
	{
		return (NULL);
	}

	for (height_i = 0; height_i < height; height_i++)
	{
		twoD_array[height_i] = malloc(sizeof(int) * width);

		if (twoD_array[height_i] == NULL)
		{
			for (; height_i >= 0; height_i--)
			{
				free(twoD_array[height_i]);
			}

			free(twoD_array);
			return (NULL);
		}
	}

	for (height_i = 0; height_i < height; height_i++)
	{
		for (width_i = 0; width_i < width; width_i++)
		{
			twoD_array[height_i][width_i] = 0;
		}
	}

	return (twoD_array);
}
