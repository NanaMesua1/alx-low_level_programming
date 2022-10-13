#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 *print_numbers - function that prints numbers,
 *followed by a new line.
 *@separator: string to be printed between numbers
 *@n: number of integers passed to the function
 *@...: other arguments
 *Return: List of printed numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)

{
	va_list b_list;
	unsigned int i = 0;
	int num_list;

	va_start(b_list, n);
	for (; i < n; i++)
	{
		num_list = va_arg(b_list, int);
		printf("%d", num_list);
		if (separator == NULL)
			continue;
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(b_list);
}
