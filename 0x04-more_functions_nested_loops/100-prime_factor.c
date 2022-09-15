#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: Always 0
 */
int main(void)

{
	unsigned long int a = 3, num = 612852475143;

	for (; a < 12057; a += 2)
	{
		while (num % a == 0 && num != a)
			num /= a;
	}
	printf("%lu\n", num);
	return (0);

}
