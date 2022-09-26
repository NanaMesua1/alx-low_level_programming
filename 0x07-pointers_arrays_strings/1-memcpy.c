#include "main.h"
/**
 *_memcpy - function copies n bytes from memory area src to memory area dest
 *@src: memory area source to copy from
 *@dest: memory area destination to copy
 *@n: number of bytes
 *Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)

{
	char *temp = dest;

	while (n--)
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (temp);
}
