#include "function_pointers.h"

/**
* array_iterator - function that executes a function given.
* @array: int array.
* @size: array size.
* @action: function pointer.
* Return: void.
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *x = array + size - 1;

	if (array && size && action)
		while (array <= x)
			action(*array++);
}
