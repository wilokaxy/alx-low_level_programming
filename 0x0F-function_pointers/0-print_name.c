#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name -  prints a name.
 * @name: name of a person 
 * @f: function to a pointer
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
