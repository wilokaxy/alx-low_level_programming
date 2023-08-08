#include <stdio.h>
#include "main"

/**
 *is_real_prime: checks whether a number is
 */
int is_real_prime(int n, int i)
{
	if (n < 2)
	{
		return (0);
	}
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (int is_prime_number(int n));
}

int is_prime_number(int n)
{
	return (is_real_prime(n, n-1));
}
