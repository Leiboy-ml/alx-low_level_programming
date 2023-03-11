#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: array of  arguments
 * Return: 0 success
 */

int main(int argc, char **argv)
{
	int sum = 0, x = 0, y = 0;

	for (x = 1; x < argc; x++)
	{
		for (y = 0; argv[x][y] != '\0'; y++)
		{
			if (!(isdigit(argv[x][y])))
			{
				printf("Error\n");
				return (0);
			}
		}
		sum += atoi(argv[x]);
	}
	printf("%d\n", sum);
	return (0);
}
