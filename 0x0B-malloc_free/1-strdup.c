#include "main.h"
#include <stdlib.h>
/**
 *_strdup - function that returns a pointer
 *to a newly allocated space in memory
 *which contains a copy of the string given as a parameter.
 *@str: An input pointer of the string to copy.
 *Return: Apointer to new string or NULL if it str is NULL
 */
char *_strdup(char *str)

{
	char *n_s, *temp;

	int i = 0, length = 0;

	if (str == NULL)
		return (NULL);
	temp = str;

	while (*str)
	{
		length++;
		str++;

	}

	str = temp;
	n_s = malloc(sizeof(char) * (length + 1));
	temp = n_s;

	if (n_s != NULL)
	{
		for (; i < length; i++)
		{
			n_s[i] = *str;
			str++;
		}
		n_s[i] = '\0';

		return (temp);
	}
	else
		return (NULL);
}
