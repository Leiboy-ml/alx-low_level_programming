#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * create_array - function to create array of characters
 * @size: the size of the array
 * @c: character to append in array
 * Return: pointer to array or NULL
 */

char *create_array(unsigned int size, char c)
{

	unsigned int i;

	char *array;


	array = malloc((sizeof(c) * size));

	for (i = 0; i < size; i++)
	{
		if (i == 0)
		{
			array[i] = c;

			return ('\0');
		}

	return (array);
	}

	return ('\0');
}
