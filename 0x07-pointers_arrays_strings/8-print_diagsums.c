#include "main.h"
#include <stdio.h>
/**
 *print_diagsums - a function that prints the sum of the two diagonals
 *of a square matrix of integers.
 *@a: a square matrix of integers
 *@size: an input integer with the size of matrix
 *Return: Nothing
 */
void print_diagsums(int *a, int size)

{
	int i = 0, m = size * size, s1 = 0, s2 = 0;

	for (; i < m; i += size + 1)
		s1 += a[i];

	for (i = size - 1; i < m - 1; i += size - 1)
		s2 += a[i];
	printf("%d, %d\n", s1, s2);
}
