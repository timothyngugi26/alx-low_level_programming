#include<stddef.h>
#include"function_pointers.h"
/**
 * array_iterator - iterate through array
 * @array: target array
 * @size: array size
 * @action:function pointer array
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action) (int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(*array);
		array++;
	}
}

