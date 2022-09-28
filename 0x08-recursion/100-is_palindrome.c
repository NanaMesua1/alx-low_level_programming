#include "main.h"
#include <stdio.h>
/**
 *_strlen_recursion - function to calculate the length of the string
 *@s: the input string to calculate length
 *Return: the length of string
 */
int _strlen_recursion(char *s)

{
	if (!*s)
	{
		return (0);
	}
	return (_strlen_recursion(s + 1) + 1);
}
/**
 *is_palindrome - function to check if a string is a palindrome
 *@s: an input string
 *Return: 1 if string is a palindrome
 *0 if otherwise
 */
int is_palindrome(char *s)

{
	int len;

	len = _strlen_recursion(s);
	if (len <= 1)
		return (1);
	return (_palindrome(s, len));
}
/**
 *_palindrome - the reversed string function
 *@s: the input string
 *@len: the length of the input string 's'
 *Return: the reversed string
 */
int _palindrome(char *s, int len)

{
	if (len <= 1)
		return (1);
	else if (*s == *(s + len - 1))
	{
		return (_palindrome(s + 1, len - 2));
	}
	else
		return (0);
}
