#include <stdio.h>
/**
 * puts2 - prints every other character of a string
 * @str: input string
 * return: no return
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
