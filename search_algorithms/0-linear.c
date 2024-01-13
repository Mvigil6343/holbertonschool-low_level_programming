#include "search_algos.h"
/**
 * linear_search - function that searches for a value in an array of integers
 * using the Linear search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located
*/
int linear_search(int *array, size_t size, int value)
{
	unsigned int counter = 0;

	if (array)
	{
		while (counter <= (size - 1))
		{
			printf("Value checked array[%d] = [%d]\n", counter, array[counter]);
			if (array[counter] == value)
				return (counter);
			counter++;
		}
	}
	return (-1);
}
