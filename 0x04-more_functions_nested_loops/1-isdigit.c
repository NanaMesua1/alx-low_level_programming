#include "main.h"
/**
 * *_isdigit - function that checks for a digit (0 through 9).
 *@c: character
 *Description: defines if a character is a digit
 *Return: 1 if yes 0 if otherwise
 */
int _isdigit(int c)

{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);

}
