#include "main.h"
/**
 *print_diagonal - a function that draws a diagonal line on the terminal.
 *@n: An input integer
 *Return: Always 0
 */
void print_diagonal(int n)

{
	int a = 0, b;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 1; a <= n; a++)
		{
			if (a > 1)
			{
				for (b = 1; b <= a - 1; b++)
				{
					_putchar(' ');
				}
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
