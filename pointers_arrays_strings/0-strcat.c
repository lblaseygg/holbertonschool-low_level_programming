#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string to which `src` will be appended.
 * @src: The source string that will be appended to `dest`.
 *
 * Return: A pointer to the resulting string `dest`.
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*ptr)
		ptr++;

	while (*src)
	{
		*ptr = *src;
		ptr++;
		src++;
	}

	*ptr = '\0';

	return (dest);
}

