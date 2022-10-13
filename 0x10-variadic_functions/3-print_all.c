#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 *print_all - function that prints anything.
 *@format: list of types of arguments passed to the function
 *Returns: void.
 */
void print_all(const char * const format, ...)

{
	int i;
	int cap;
	char *s1;
	va_list d_list;

	va_start(d_list, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(d_list, int));
				cap = 0;
				break;
			case 'i':
				printf("%i", va_arg(d_list, int));
				cap = 0;
				break;
			case 'f':
				printf("%f", va_arg(d_list, double));
				cap = 0;
				break;
			case 's':
				s1 = va_arg(d_list, char*);
				if (s1 == NULL)
					s1 = "(nil)";
				printf("%s", s1);
				cap = 0;
				break;
			default:
				cap = 1;
				break;
		}
		if (format[i + 1] != '\0' && cap == 0)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(d_list);
}
