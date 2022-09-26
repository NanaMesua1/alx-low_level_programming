#include "main.h"
#include <stdio.h>
/**
 *_strspn - function that gets the length of a prefix substring.
 *@s: an input string
 *@accept: an input character with to locate into string s
 *Return:  the number of bytes in the initial segment of s
 *which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)

{
	int count = 0, flag;
	char *temp = accept;

	while (*s)
	{
		flag = 0;
		while (*accept)
		{
			if (*accept == *s)
			{
				count++;
				flag = 1;
				break;
			}
			accept++;
		}
		s++;
		accept = temp;
		if (flag == 0)
			break;
	}
	return (count);
}
