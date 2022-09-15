#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)

{

	int d, p, q, c;


	for (d = 0; d < 1000; d++)
	{
		p = d / 100;
		q = (d / 10) % 10;
		c = d % 10;

		if (p < q && q < c)
		{
			putchar(p + '0');
			putchar(q + '0');
			putchar(c + '0');

			if (d < 700)
			{
				putchar(44);
				putchar(32);

			}
		}
	}
	putchar('\n');

	return (0);

}
