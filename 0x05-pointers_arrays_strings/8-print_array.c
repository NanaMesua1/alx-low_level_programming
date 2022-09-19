#include "main.h"
#include <stdio.h>
/**
 *print_array - a function that prints n elements of an array of integers,
 *followed by a new line.
 *@a: an input array
 *@n: an input integer
 *Return: void
 */
void print_array(int *a, int n)

{
	int x = 0;

	for (; x < n; x++)
	{
		printf("%d", a[x]);
		if (x < n - 1)
			printf(", ");
	}
	putchar('\n');

}
