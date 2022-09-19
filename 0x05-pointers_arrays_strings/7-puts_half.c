#include "main.h"
/**
 *puts_half - a function that prints half of a string
 *followed by a new line
 *@str: An input string
 *Return: void
 */
void puts_half(char *str)

{
	int len = 0, a, n;

	while (str[len] != '\0')
		len++;

	if (len % 2 == 0)
		n = len / 2;

	else
		a = (len + 1) / 2;

	for (a = n; a < len; a++)
		_putchar(str[a]);

	_putchar('\n');

}
