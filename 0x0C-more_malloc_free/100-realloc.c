#include "main.h"
#include <stdlib.h>
/**
 *_realloc - A function that reallocates a memory block using malloc and free
 *@ptr: pointer to the memory previously allocated
 *@old_size: old size in bytes of memory llocated space
 *@new_size: new size in bytes of memory to be allocated
 *Return: void pointer to new memory location
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)

{
	char *w;
	unsigned int i, n = new_size;
	char *old = ptr;

	if (ptr == NULL)
	{
		w = malloc(new_size);
		return (w);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);
	w = malloc(new_size);
	if (w == NULL)
		return (NULL);
	if (new_size > old_size)
		n = old_size;
	for (i = 0; i < n; i++)
		w[i] = old[i];
	free(ptr);
	return (w);
}
