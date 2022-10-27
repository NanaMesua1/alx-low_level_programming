#include "main.h"
#include <stdlib.h>
/**
 *malloc_checked - A function that allocates memory using malloc
 *@b: the unsigned input integer
 *Return: A pointer to allocated memory or NULL if it fails
 */
void *malloc_checked(unsigned int b)

{
	void *a;

	a = malloc(b);
	if (a == NULL)
		exit(98);
	return (a);
}
