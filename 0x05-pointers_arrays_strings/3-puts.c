#include <stdio.h>
/**
 * void _puts - prints a string followed by a new line
 * @str: string
 * return: string 
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
	}
	putchar('\n');
}
