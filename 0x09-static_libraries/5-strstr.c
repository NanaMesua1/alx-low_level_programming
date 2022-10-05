#include "main.h"
/**
 *_strstr - locates a substring.
 *@haystack: source string
 *@needle: the substring
 *Return: a pointer to the beginning of the located substring,
 *or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)

{
	int i, j, k;
	char *ar;

	for (i = 0, k = 0; haystack[i] != '\0'; i++, j++)
	{
		ar = &haystack[i];
		j = 0;
		while (needle[j + k] != '\0' && haystack[i + k] != '\0'
				&& needle[j + k] == haystack[i + k])
		{
			if (haystack[i + k] != needle[j + k])
				break;
			k++;
		}
		if (needle[j + k] == '\0')
			return (ar);
	}
	return (0);
}
