#include <stdio.h>

/**
 * swap_int - swaps the values of two integers.
 * @a : pointer
 * @b : pointer
 *
 * Return : void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
