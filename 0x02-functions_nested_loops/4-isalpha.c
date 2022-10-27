#include "main.h"
/**
 *_isalpha - to check for an aplhabetic character
 *@c: int character
 *Return: 1 if letter, lowercase or uppercase, and 0 if otherrwise
 */
int _isalpha(int c)

{
	char lower, upper;
	int is_a_letter = 0;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (upper = 'A'; upper <= 'Z'; upper++)
		{
			if (c == lower || c == upper)
				is_a_letter = 1;
		}
	}
	return (is_a_letter);

}
