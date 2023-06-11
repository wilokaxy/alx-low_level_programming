#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		int j = 97;
		char c;

		while (j <= 122)
		{
			c = (char) j;
			_putchar(c);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
