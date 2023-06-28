#include "main.h"
/**
 * reverse_array - reverses an array of integers
 * @a: an array of integers
 * @n: number of elements to swap
 */

void reverse_array(int *a, int n)
{
	int rev = 0, tmp = 0;

	while (rev < n--)
	{
		tmp = a[n];
		a[n] = a[rev];
		a[rev] = tmp;
		rev++;
	}
}
