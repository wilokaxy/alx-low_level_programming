#include "main.h"
/**
 * factorial - returns factorial of a number
 * @n: number input
 *
 * Return: -1 if n is lower than 0 (Error)
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (1);
	}

	return n * factorial(n -1);
}
