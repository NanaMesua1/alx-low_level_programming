#include "main.h"
/**
 *_strcat - a function that concatenates two strings
 *@dest: the char string
 *@src: the char  string
 *Return: A pointer to the resulting string
 */
char *_strcat(char *dest, char *src)

{
	char *kat = dest;

	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	return (kat);

}

