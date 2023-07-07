#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - makes a grid
 * @width: x axis
 * @height: y axis
 * Return: a pointer to a 2 dimensional array of int or NULL
 */
int **alloc_grid(int width, int height)
{
	int x = 0, y = 0;
	int **m = NULL;

	if (width <= 0 || height <= 0)
		return (NULL);

	m = malloc(sizeof(int *) * height);
	if (m == NULL)
		return (NULL);

	for (; x < height; x++)
	{
		m[x] = malloc(sizeof(int) * width);
		if (m[x] == NULL)
		{
			for (; y < x; y++)
				free(m[y]);

			free(m);
			return (NULL);
		}
	}
	for (x = 0; y < height; x++)
	{
		for (y = 0; y < width; y++)
			m[x][y] = 0;
	}
	return (m);
}
