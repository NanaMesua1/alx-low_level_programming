#include "main.h"
#include <stdio.h>
/**
 *_isupper - checks for uppercase character
 *@c: a text variable
 *Return: Returns 1 if uppercase and 0 if otherwise
 */
int _isupper(int c)

{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
