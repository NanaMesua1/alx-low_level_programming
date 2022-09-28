#include "main.h"
#include <stdio.h>
/**
 *wildcmp -  function that compares two strings
 *if the strings can be considered identical
 *@s1: First input string
 *@s2: Second input string
 *Return: 1 if strings identical and 0 in otherwise
 */
int wildcmp(char *s1, char *s2)

{
	if (!*s1 && !*s2)
		return (1);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*' && (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2)))
		return (1);
	if (*s2 == '*' && *(s1 + 1) && *s2)
		return (0);
	return (0);
}
