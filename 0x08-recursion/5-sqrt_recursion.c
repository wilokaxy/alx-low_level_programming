#include <stdio.h>
#include "main.h"

/**
 * _sqrt_recursion - returns the square root of a number 
 * @n: number whose square root is needed
 * if n has no natural square root, return -1
 * _sqrt: (n)^(1/n)
 *
 * Return: integer
 */

int _sqrt_helper(int n, int start, int end)
{
	if(start > end)
	{
		return (-1);
	}

	int mid = (start + end) / 2;
	int square = mid * mid;

	if (square == n)
		return mid; 
	else if (square < n)
		return _sqrt_helper(n, mid +  1, end);
	else 
		return _sqrt_helper(n, start, mid - 1);
}

int _sqrt_recursion(int n)
{
        if(n < 0)
        {
                return (-1);
        }
        if(n == 0 || n == 1)
        {
                return n;
        }
}
