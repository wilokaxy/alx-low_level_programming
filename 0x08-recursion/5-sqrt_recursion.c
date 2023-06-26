#include "main.h"

int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - returs the sqrt of a num
 * @n: num to calculate sqrt of
 *
 * Return: the Sqrt
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return(actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion -runs through to find a natural sqrt of a num
 * @n: num to calculate sqrt of
 * @i: iterating num
 *
 * Return: the Sqrt
 */

int actual_sqrt_recursion(int n, int i)
{
	if (i *i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return(actual_sqrt_recursion(n, i+1));
}
