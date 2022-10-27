#include "main.h"
/**
 *cap_string - capitalize all words of a string
 *@str: string
 *Return: 'str'
 */
char *cap_string(char *str)

{
	int i, j;
	int kat;
	char tak[] = ",;.!?(){}\n\t\" ";

	for (i = 0, kat = 0; str[i] != '\0'; i++)
	{
		if (str[0] > 96 && str[0] < 123)
			kat = 1;
		for (j = 0; tak[j] != '\0'; j++)
		{
			if (tak[j] == str[i])
				kat = 1;
		}
		if (kat)
		{
			if (str[i] > 96 && str[i] < 123)
			{
				str[i] -= 32;
				kat = 0;
			}
			else if (str[i] > 64 && str[i] < 91)
				kat = 0;
			else if (str[i] > 47 && str[i] < 58)
				kat = 0;
		}
	}
	return (str);
}
