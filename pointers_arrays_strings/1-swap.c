#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: a pointer to an int
 * @b: a pointer to an int
 */
void swap_int(int *a, int *b)
{
	int swap = *a;

	*a = *b;
	*b = swap;
}
