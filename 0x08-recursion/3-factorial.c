#include <stdio.h>
#include "main.h"

/**
 * int factorial(int n) - returns the factorial of a given number
 * @n: given number in the main function
 * if @n is lower than 0, return -1 and indicate error
 * 
 * Return: integer
 */

int factorial(int n)
{
	if (n == 1)
	{
		return (1);
	}
	else if (n <= 0)
	{
		return (-1);
		_putchar("Error\n");
	}
	else
	{
		return ( n * factorial(n - 1));
	}
}
