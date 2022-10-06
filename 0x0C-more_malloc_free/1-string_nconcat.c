#include "main.h"
#include <stdlib.h>
/**
 *string_nconcat - A function that concatenates two strings
 *@s1: An input pointer of the first string
 *@s2: An input pointer of the second string
 *@n: an input integer of number of string to concatenate
 *Return: A pointer to concatened strings or NULL if it str is NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)

{
	char *concat;
	unsigned int i, x, y;

	if (s1 == NULL)
	{
		i = 0;
	}
	else
	{
		for (i = 0; s1[i]; ++i)
			;
	}
	if (s2 == NULL)
	{
		x = 0;
	}
	else
	{
		for (x = 0; s2[x]; ++x)
			;
	}
	if (x > n)
		x = n;
	concat = malloc(sizeof(char) * (i + x + 1));
	if (concat == NULL)
		return (NULL);
	for (y = 0; y < i; y++)
		concat[y] = s1[y];
	for (y = 0; y < x; y++)
		concat[y + i] = s2[y];
	concat[i + x] = '\0';
	return (concat);
}
