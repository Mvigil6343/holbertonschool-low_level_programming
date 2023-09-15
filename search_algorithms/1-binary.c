#include "search_algos.h"

/**
 * print_array - prints an array
 * @array: pointer to array
 * @low: first element of array
 * @high: last element of array
*/

void print_array(int *array, size_t low, size_t high)
{
	unsigned int i = 0;

	printf("Searching in array: ");
	for (i = low; i <= high; i++)
	{
		if (i > low)
			printf(", ");
		printf("%d", array[i]);
	}
	printf("\n");
}

/**
 * binary_search - function that searches for a value in an array of integers
 * using the Linear search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located
*/

int binary_search(int *array, size_t size, int value)
{
	int middle = 0, low = 0, high = 0;

	if (!array || size == 0)
		return (-1);

	high = size - 1;

	while (low <= high)
	{
		print_array(array, low, high);
		middle = (low + high) / 2;

		if (array[middle] == value)
			return (middle);
		if (array[middle] > value)
			high = middle - 1;
		else
			low = middle + 1;
	}
	return (-1);
}
