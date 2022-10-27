#include "main.h"
#include <stdio.h>
/**
 *_pow_recursion - function that returns the value of
 *x raised to the power of y.
 *@x: an input integer
 *@y: an input integer
 *Return: the result of x raised to the power y
 *and -1 if y is lower than 0.
 */
int _pow_recursion(int x, int y)

{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	else if (y == 1)
		return (x);
	return (x *= _pow_recursion(x, y - 1));
}
