#include "main.h"
/**
 *print_number - Prints any integer with putchar
 *@n: Number to prints
 *Return: Nothing
 */
void print_number(int n)

{
	unsigned int j;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	j = n;

	if (j / 10)
		print_number(j / 10);
	_putchar(j % 10 + '0');
}
