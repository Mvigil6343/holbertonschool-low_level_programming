#include "main.h"
/**
 * swap_int - swaps the values of two int
 * @a: var a
 * @b: var b
 */

void swap_int(int *a, int *b)
{
	int x = *a;

	*a = *b;
	*b = x;
}
