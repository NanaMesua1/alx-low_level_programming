#include "main.h"

/**
 *print_sign - printing the sign of a number
 *@n: An int number
 *Description: printing the sign of a number
 *Return: 1 if number is negative and 0 if otherwise
 */
int print_sign(int n)

{
	int value;

	if (n > 0)
	{
		value = 1;
		_putchar('+');

	}
	else if (n == 0)
	{
		value = 0;
		_putchar('0');
	}
	else
	{
		value = -1;
		_putchar('-');
	}
	return (value);
}
