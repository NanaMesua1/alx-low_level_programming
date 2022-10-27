#include "main.h"
/**
 *leet - a function that encodes a string into 1337
 *@s: the string to encode
 *Return: 's'
 */
char *leet(char *s)

{
	int a = 0, b;

	char kat[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'},
	     tak[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};

	while (s[a])
	{
		for (b = 0; b < 10; b++)
			if (s[a] == tak[b])
				s[a] = kat[b];
		a++;
	}
	return (s);

}
