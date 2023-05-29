#include <stdio.h>
/**
 * swap_int - swaps values of two integers
 * @a - first integer
 * @b - secondd integer
 * return: 0 Always
 */
void swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = x;
}

