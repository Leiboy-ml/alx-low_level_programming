#include <stdio.h>
#include "main.h"

/**
 * main - Prints the number of arguments passed to it
 * @argc: tracks the number of arguments
 * @argv: holds an aray of arguments
 * return: 0
 */

int main(int argc, char *argv[]__attribute__((unused)))
{
	int i;

	for (i = 0; i < argc; i++);
	{
		printf("%d\n", i-1);

	}

	return (0);
}
