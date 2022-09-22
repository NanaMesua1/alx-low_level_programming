#include "main.h"
/**
 *rot13 - function that encodes a string using rot13
 *@s: An input string to encode using rot13
 *Return: 's'
 */
char *rot13(char *s)

{
	int a;
	char ab[] = "NOPQRSTUVWXYZABCDEFGHIJKLM";
	char dc[] = "nopqrstuvwxyzabcdefghijklm";

	for (a = 0; s[a] != '\0'; a++)
	{
		if ((s[a] > 64 && s[a] < 91) || (s[a] > 96 && s[a] < 123))
		{
			s[a] = (s[a] - 65 > 25) ? dc[s[a] - 97] : ab[s[a] - 65];
		}
	}
	return (s);
}
