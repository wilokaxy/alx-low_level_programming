#include <stdio.h>

/**
 * main - Entry point
 * Prints sizes of various types on computer compiled on
 * Return: Value 0 (Success)
 */
int main(void)
{
	printf("size of an int: %d bytes\n", sizeof(int));
	printf("size of a char: %d bytes\n", sizeof(char));
	printf("size of an float: %d bytes\n", sizeof(float));
	printf("size of a long long int: %d bytes\n", sizeof(long long int));
	
	return (0);
}
