#include "main.h"
/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	 char *originalDest = dest;

	 while (*dest != '\0')
	 {
		 *dest = *src; 
		 dest++;
		 src++;
		 n--;
	 }
	 *dest = '\0';
	 return originalDest;
}
