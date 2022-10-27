#include "main.h"

/**
 *main - See description
 *Description: Print _putchar followed by a new line
 *Return: Always 0.
 */
int main(void)

{
	char putchar[] = "_putchar";
	int i = 0;

	while (putchar[i] != '\0')
	{
		_putchar(putchar[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
