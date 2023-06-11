#include "main.h"
/**
 * main - prints the alphabet in lower case
 *
 * Return: void
 */
void print_alphabet(void)
{
	int i;
	char c;

	for (i = 97; i <= 122; i++)
	{
		c = (char) i;
		_putchar(c);
	}
	_putchar('\n');
}
