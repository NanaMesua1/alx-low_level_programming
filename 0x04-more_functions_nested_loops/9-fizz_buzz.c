#include "main.h"
#include <stdio.h>
/**
 *main - Entry piont
 *
 *Description: Prints FizzBuzz
 *Return: Always 0
 */
int main(void)

{
	int c = 1;

	for (; c < 100 ; c++)
	{
		if (c % 3 == 0 && c % 5 == 0)
			printf("FizzBuzz ");
		else if (c % 3 == 0)
			printf("Fizz ");
		else if (c % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", c);
	}

	printf("Buzz\n");

	return (0);

}
