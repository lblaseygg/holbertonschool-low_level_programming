#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - Executes a function on each element of an array.
 * @array: The array on which the action will be performed.
 * @size: The size of the array.
 * @action: A pointer to the function that will be executed on each element.
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
