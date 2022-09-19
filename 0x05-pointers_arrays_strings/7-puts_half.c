#include "main.h"
/**
 *puts_half - a function that prints half of a string, followed by a new line
 *@str: An input string
 *Return: void
 */
void puts_half(char *str)

{
	int len = 0, a, b;

	while (str[len] != '\0')
		len++;

	if (len % 2 == 0)
		b = len / 2;

	else
		a = (len + 1) / 2;

	for (a = b; a < len; a++)
		_putchar(str[a]);

	_putchar('\n');

}
