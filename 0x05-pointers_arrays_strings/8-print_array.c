#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers
 * @n: input n elements
 * @a: input array
 * Return: no return
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d ", a[i]);
	}

	putchar('\n');
}
