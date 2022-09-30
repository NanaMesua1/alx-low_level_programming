#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *main - program that multiplies two numbers.
 *@argc: number of arguments passed
 *@argv:  pointer array which points to each argument passed to the program
 *Return: Always 0 (Success)
 */
int main(int argc, char **argv)

{
	int num1, num2, product;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		product = num1 * num2;
		printf("%d\n", product);
		return (0);
	}
}

