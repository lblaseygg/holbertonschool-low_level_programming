#include <unistd.h>
/**
 * _putchar - writes a character to stdout
 * @c: the character to print
 *
 * Return: On success, return 1. On error, return -1 and set errno.
 */
int _putchar(char c)
{
	return write(1, &c, 1);
}
