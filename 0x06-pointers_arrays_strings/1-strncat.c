#include "main.h"
/**
 *_strncat - a function that concatenates two strings
 *@dest: an input string
 *@src: an input string
 *@n: an input integer
 *Return: A pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)

{
	int len_src = 0, a = 0;
	char *kat = dest, *tak = src;

	while (*src)
	{
		len_src++;
		src++;
	}
	while (*dest)
		dest++;

	if (n > len_src)
		n = len_src;
	src = tak;

	for (; a < n; a++)
		*dest++ = *src++;
	*dest = '\0';
	return (kat);
}
