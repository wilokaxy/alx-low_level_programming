#include <stdio.h>

char *_memset(char *s, char b, unsigned int n)
	{
    unsigned int i;
    for (i = 0; i < n; i++)
    {
        s[i] = b;
    }
    return s;
	}

int main()
{
    char str[20] = "Hello, World!";
    printf("Before memset: %s\n", str);
    _memset(str, '*', 10);
    printf("After memset: %s\n", str);
    return 0;
}
