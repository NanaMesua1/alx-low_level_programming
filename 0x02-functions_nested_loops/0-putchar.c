#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
*/
int main(void)

{
	char *a = "_putchar";

	while (*a)
	{
		_putchar(*a);
		a++;

	}

	_putchar('\n');

	return (0);

}
