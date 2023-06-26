#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number to be input
 *
 * Retun: If n does not have a natural square root 
 * 	  the function should return -1
 */
int _sqrt_recursion(int n)
{
	if (!_sqrt(n))
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return ( _sqrt_recursion(n*(n-1));
	}
}
