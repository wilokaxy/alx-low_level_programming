#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_PASSWORD_LENGTH 10

char generate_random_char()
{
	char characters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_-+=<>?";

	int index = rand() % (sizeof(characters) - 1);
	return characters[index];
}

void generate_password(char* password, int length)
{
	int i;
	
	for (i = 0; i < length; i++)
	{
		password[i] = generate_random_char();
	}
	password[length] = '\0';
}

int password_valid(char* password)
{
	return (1);
}

void make_valid_password(char* password, int length)
{
	do 
	{
		generate_password(password, length);
	}
	while (!password_valid(password));
}
int main()
{
	srand(time(NULL));

	int password_length = 10;
	char generated_password[MAX_PASSWORD_LENGTH + 1];

	generate_valid_password(generated_password, password_length);
	printf("Genetated password: %s\n", generated_password);

	return (0);
}
