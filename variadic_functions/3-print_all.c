#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything based on the given format
 * @format: format string containing types of arguments passed
 * 
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *str;
	int flag = 0;
	va_start(args, format);

	if (format)
	{
		while (format[i])
		{
			if (flag)
				printf(", ");
            
			switch (format[i])
			{
			case 'c':
				printf("%c", va_arg(args, int));
				flag = 1;
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				flag = 1;
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				flag = 1;
				break;
			case 's':
				str = va_arg(args, char *);
				if (str)
					printf("%s", str);
				else
					printf("(nil)");
				flag = 1;
				break;
			default:
				break;
			}
			i++;
		}
	}
    
	va_end(args);
	printf("\n");
}

