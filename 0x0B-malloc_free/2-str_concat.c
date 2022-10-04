#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *str_concat - function that concatenates two strings
 *@s1: An input pointer of the first string
 *@s2: An input pointer of the second string
 *Return: Apointer to concatened strings or NULL if it str is NULL
 */
char *str_concat(char *s1, char *s2)

{
	char *new_str, *string1, *string2;

	int i = 0, len_s1 = 0, len_s2 = 0;

	string1 = s1;
	string2 = s2;

	if (s1 == NULL)
		s1 = "";

	while (*s1)
	{
		len_s1++;
		s1++;
	}
	s1 = string1;
	if (s2 == NULL)
		s2 = "";
	while (*s2)
	{
		len_s2++;
		s2++;
	}
	s2 = string2;
	new_str = malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	string1 = new_str;
	if (new_str == NULL)
		return (NULL);
	for (; i < (len_s1 + len_s2); i++)
	{
		if (i < len_s1)
		{
			new_str[i] = *s1;
			s1++;
		}
		else
		{
			new_str[i] = *s2;
			s2++;
		}
	}
	new_str[i] = '\0';
	return (string1);
}

