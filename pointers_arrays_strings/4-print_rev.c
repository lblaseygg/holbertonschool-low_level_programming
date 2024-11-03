/*
 * By Luis Feliciano
 */

#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: the string to be printed
 */
void print_rev(char *s)
{
	int len = 0, index = 0;


	while (s[index])
	{
		len++;
		index++;
	}



	for (index = len - 1; index >= 0; index--)
	{
		_putchar(s[index]);
	}

	_putchar('\n');
}
