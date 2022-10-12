#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *main - ...
 *@argc: ...
 *@argv: ...
 *Return: ...
 */
int main(int argc, char *argv[])

{
	int (*opt)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	opt = get_op_func(argv[2]);

	if (!opt)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", opt(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
