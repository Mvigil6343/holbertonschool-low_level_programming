#include "main.h"
/**
 * array_range - creates an array of integers
 * @min: the min value of array
 * @max: the max value of the array
 * Return: the new array
 */
int *array_range(int min, int max)
{
	int *na = NULL;
	int x;

	if (min > max)
		return (NULL);

	na = malloc(sizeof(int) * (max - min + 1));
	if (na == NULL)
	{
		free(na);
		exit(1);
	}
		for (x = 0; min <= max; x++)
	{
		na[x] = min;
		min++;
	}
	return (na);
}
