#include "main.h"
#include <stdio.h>
/**
 *_isupper - checks for uppercase character
 *@c: a text variable
 *Return: Returns 1 if uppercase and 0 if otherwise
 */
int _isupper(int c)

{
	char uppercase = 'A';
	int isupper = 0;

	for (; uppercase <= 'Z'; uppercase++)
	{
		if (c == uppercase)
		{
			isupper = 1;
			break;

		}
	}
	return (isupper);
}
