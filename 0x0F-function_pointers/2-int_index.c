#include <stdlib.h>
#include "function_pointers.h"
/**
 *int_index - a function that searches for an integer.
 *@array: A pointer to the array
 *@size: Size of the array
 *@cmp: a pointer to the function to be used to compare values
 *Return: The index of the first element for which cmp
 *does not return 0; -1 if no elements matches or size <= 0.
 */
int int_index(int *array, int size, int (*cmp)(int))

{
	int i = 0;

	if (cmp == NULL || array == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (; i < size; i++)
		if (cmp(array[i]))
			return (i);

	if (i == size)
		return (-1);
	return (-1);
}
