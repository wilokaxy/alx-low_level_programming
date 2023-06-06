#include <stdio.h>
/**
 * main - prints the alphabet in lower case
 *
 * Return: 0 (Success)
 */
void print_alphabet(void)
{
	for(i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
