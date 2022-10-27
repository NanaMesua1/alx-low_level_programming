#include "main.h"
/**
 *swap_int - function that swaps the values of two integers
 *@a: the input integer pointer
 *@b: the input integer pointer
 *Return: void
 */
void swap_int(int *a, int *b)

{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;

}
