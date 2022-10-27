#include "main.h"
/**
 *rev_string - a function that reverse a string
 *@s: an input string
 *Return: void
 */
void rev_string(char *s)

{
	int len = 0, a = 0;

	char swap;

	while (s[len] != '\0')
		len++;
	while (a < len--)
	{
		swap = s[a];
		s[a++] = s[len];
		s[len] = swap;

	}

}
