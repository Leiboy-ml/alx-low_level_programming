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

	int str_len = 0;
	int x;
	char *new;

	str = malloc((sizeof(char) * str_len) + 1);

	if (str == NULL)
	{
		return ('\0');
	}

	while (*str != '\0')
	{
		str_len++;
	}

	for (x = 0; x <= str_len; x++)

	{
		if (x == str_len)
		{
			str[x] = new[x];
		}
	}


	return (new);
	
}
