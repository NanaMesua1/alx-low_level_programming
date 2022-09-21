#include "main.h"
/**
 *_strncpy - a function that copys the strings
 *@dest: an input string
 *@src: an input string
 *@n: an input integer
 *Return: A pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)

{
	int len_src = 0, a = 0;
	char *kat = dest, *tak = src;

	while (*src)
	{
		len_src++;
		src++;
	}
	len_src++;

	if (n > len_src)
		n = len_src;
	src = tak;

	for (; a < n; a++)
		*dest++ = *src++;
	return (kat);

}
