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
	int w, x, len1, len2, len;
	char *string;

	len1 = len2 = 0;

	if (s1 != NULL)
	{
		w = 0;
		while (s1[w++] != '\0')
			len1++;
	}
	if (s2 != NULL)
	{
		w = 0;
		while (s2[w++] != '\0')
			len2++;
	}

	len = len1 + len2;
	string = (char *)malloc(sizeof(char) * (len + 1));
	if (string == NULL)
		return (NULL);
	for (w = 0; w < len1; w++)
		string[w] = s1[w];
	for (x = 0; x < len2; x++, w++)
		string[w] = s2[x];
	string[len] = '\0';

	return (string);
}
