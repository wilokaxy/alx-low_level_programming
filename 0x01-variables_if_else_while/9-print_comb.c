#include <stdio.h>
/**
 * main - program that prints all possible combinations of single-digit numbers
 *
 * Retun: 0 (Succes)
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar('0' + i);
		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
