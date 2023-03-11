#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Prints the number of arguments passed to it
 * @argc: tracks the number of arguments
 * @argv: holds an aray of arguments
 * return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc == 1)
		printf("%d\n", argc - 1);
	else
	{
		for (i = 0; *argv; i++, argv++)
			;

		printf("%d\n", i - 1);
	}

	return (0);
}
