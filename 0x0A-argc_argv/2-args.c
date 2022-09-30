#include "main.h"
#include <stdio.h>
/**
 *main - program that prints all arguments it receives.
 *@argc: the number of arguments passed
 *@argv: pointer array which points to each argument passed to the program
 *Return: Always 0 (Success)
 */
int main(int argc, char **argv)

{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
