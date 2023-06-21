#include "main.h"

/**
 * print_alphabet_x10 - Print 10 lines of all characters of the alphabet in
 * lowercase format.
 */
void print_alphabet_x10(void)
{
	int count = 0;

	while (count < 10)
	{
		int i;

		for (i = 0; i < 26; ++i)
		{
			char char_code = 97 + i;
			write(1, &char_code, 1);
		}
		write(1, "\n", 1);

		++count;
	}
}

/**
 * main - Print 10 lines of all aphabetic characters in lowercase.
 *
 * Return: zero if the program executes successfully. A negative value
 * otherwise
 */
int main(void)
{
	print_alphabet_x10();
	return (0);
}
