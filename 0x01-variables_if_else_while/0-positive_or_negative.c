#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * Main -Entry point for n
 *
 * Return:positive (greater than 0)
 * Return:0 (equal to 0)
 * Return:negative (less than 0)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%i is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%i is zero\n", n);
	}
	else
	{
		printf("%i is negative\n", n);
	}
	return (0);
}
