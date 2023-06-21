#include "main.h"

/**
 * print_alphabet - Print all characters of the english alphabet in
 * lower case.
 */
void print_alphabet(void)
{
	int i;
	for (i = 0; i < 26; ++i)
	{
		char char_code = 97 + i;
		write(1, &char_code, 1);
	}

	write(1, "\n", 1);
}

/**
 * main - Print all characters of the english alphabet in lower case.
 *
 * Return: zero if program executes successfuly.
 * A negative value otherwise.
 */
int main(void)
{
	print_alphabet();
	return (0);
}
