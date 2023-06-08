#include <stdio.h>
/**
 * main - function that prints a string
 *@s - string
 * Return: string
 */
void _puts_recursion(char *s)
{
	if(*s == '\0')
           return;
	
	_putchar(*s);
	_puts_recursion(s +1);
}



int main(void)
{
	_puts_recursion("Puts with recursion");
	return (0);
}
