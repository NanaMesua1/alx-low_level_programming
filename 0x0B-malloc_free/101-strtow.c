#include "main.h"
#include <stdlib.h>
/**
 *strtow - splits a string into words.
 *@str: the string
 *Return: returns a pointer to an array of strings (words)
 */
char **strtow(char *str)

{
	int i, flag, len;

	char **text;
	if (str == NULL || str[0] == '\0' || (str[0] == ' ' && str[1] == '\0'))
		return (NULL);

	i = flag = len = 0;
	while (str[i])
	{
		if (flag == 0 && str[i] != ' ')
			flag = 1;
		if (i > 0 && str[i] == ' ' && str[i - 1] != ' ')
		{
			flag = 0;
			len++;
		}
		i++;
	}
	len += flag == 1 ? 1 : 0;
	if (len == 0)
		return (NULL);
	text = (char **)malloc(sizeof(char *) * (len + 1));
	if (text == NULL)
		return (NULL);
	util(text, str);
	text[len] = NULL;
	return (text);
}
/**
 *util - a util function for fetching words into an array
 *@text: the strings array
 *@str: the string
 */
void util(char **words, char *str)

{
	int i, j, start, flag;

	while (str[i])
	{
		if (flag =
