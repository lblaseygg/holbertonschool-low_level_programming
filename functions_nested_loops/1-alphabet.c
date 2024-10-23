#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase, followed by a new line
 *
 * Description: _putchar to print the alphabet
 */
void print_alphabet(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz\n";
	int i;

	for (i = 0; alphabet[i] != '\0'; i++)
	{
		_putchar(alphabet[i]);
	}
}

