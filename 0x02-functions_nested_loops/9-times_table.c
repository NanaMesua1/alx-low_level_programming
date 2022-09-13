#include "main.h"
/**
 *times-table - Check main.h
 *Description: It prints 9 times table starting with 0
 *Return: Nothing.
 */
void times_table(void)

{
	int k, m, a;

	for (k = 0; k <= 9; k++)
	{
		for (m = 0; m <= 9; m++)
		{
			a = k * m;

			if ((a / 10) == 0)
			{
				if (m != 0)
					_putchar(' ');
				_putchar(a + '0');

				if (m == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar((a / 10) + '0');
				_putchar((a % 10) + '0');
				if (m == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
