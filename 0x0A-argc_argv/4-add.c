#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 *main - program that adds positive numbers.
 *@argc: number of arguments passed
 *@argv: pointer array which points to each argument passed to the program
 *Return: Always 0 (Success)
 */
int main(int argc, char **argv)

{
	int num, sum = 0, i;

	while (argc-- > 1)
	{
		for (i = 0; argv[argc][i]; i++)
		{
			if (!(isdigit(argv[argc][i])))
			{
				printf("Error\n");
				return (1);
			}
		}
		num = atoi(argv[argc]);
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
