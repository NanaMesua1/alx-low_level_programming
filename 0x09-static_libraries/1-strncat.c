#include "main.h"
/**
 *_strncat - Concatenates two strings.
 *@dest: Destination string
 *@src: Source string
 *@n: Number of bytes to use from src
 *Return: A pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)

{
	int dest_len, i;

	for (dest_len = 0; dest[dest_len] != '\0'; dest_len++)
		;
	for (i = 0; src[i] != '\0' && n > 0; i++, n--, dest_len++)
	{
		dest[dest_len] = src[i];
	}
	return (dest);
}
