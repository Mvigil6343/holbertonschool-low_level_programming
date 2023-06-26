#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers.
 * @a: array of integers
 * @n: number of elements of the array
 */
void print_array(int *a, int n)
{
	int s = 0;

	while (s < n)
	{
		if (s != n - 1)
		{
			printf("%d, ", a[s]);
		}
		else
		{
			printf("%d", a[s]);
		}
		s++;
	}
	printf("\n");
}
