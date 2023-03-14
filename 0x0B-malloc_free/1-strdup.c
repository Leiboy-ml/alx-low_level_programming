#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _strdup - duplicates a string in a new location
 * @str: the string in question
 * Return: NULL or pointer
 */

char *_strdup(char *str)
{
	char n;
	int str_len = 0;
	int x;
	char *new;

	str = malloc((sizeof(n) * str_len));

	if (str == NULL)
	{
		return ('\0');
	}

	for (x = 0; x <= str_len; x++)

	str[x] = *new;
}
