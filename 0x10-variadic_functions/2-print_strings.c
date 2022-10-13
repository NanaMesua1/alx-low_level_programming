#include <stdio.h>
#include<stdarg.h>
#include "variadic_functions.h"
/**
 *print_strings - function that prints strings,
 *followed by a new
 *@separator: string to be printed between the strings
 *@n: number of strings passed to the function
 *@...: other arguments
 *Return: set of printed strings
 */
void print_strings(const char *separator, const unsigned int n, ...)

{
	va_list c_list;
	unsigned int i = 0;
	char *string;

	va_start(c_list, n);
	for (; i < n; i++)
	{
		string = va_arg(c_list, char*);
		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);
		if (separator == NULL)
			continue;
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(c_list);
}
