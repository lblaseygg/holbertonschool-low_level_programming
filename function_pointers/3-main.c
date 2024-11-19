#include "3-calc.h"

/**
 * main - Performs simple operations
 * @argc: The number of arguments passed to the program
 * @argv: The array of arguments passed to the program
 *
 * Return: 0 on success, or exits with an error code on failure
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	int (*operation)(int, int);

	if (argc != 4)  /* Check if the correct number of arguments is passed */
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	operation = get_op_func(argv[2]);

	if (operation == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", operation(num1, num2));
	return (0);
}
