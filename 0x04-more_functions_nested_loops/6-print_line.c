#include "main.h"
/**
 *print_line - a function that draws a straight line in the terminal
 *followed by a new line.
 *@n: An input integer
 *Return: Always 0
 */
void print_line(int n)

{
	int w = 0;

	if (n > 0)
	{
		for (; w < n; w++)
			_putchar('_');
	}
	_putchar('\n');
}
