#include <stdlib.h>
#include <stdio.h>
/**
 *print_codes - print the opcodes of this program
 *@j: address of the main function
 *@n: number of bytes to print
 *Return: void
 */
void print_codes(char *j, int n)

{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%.2hhx", j[i]);
		if (i < n - 1)
			printf(" ");
	}
	printf("\n");
}
/**
 *main - prints the opcodes of its own main function
 *@argc: number of arguments passed to the function
 *@argv: array of pointers to arguments
 *Return: always O
 */
int main(int argc, char **argv)

{
	int n;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_codes((char *)&main, n);
	return (0);
}
