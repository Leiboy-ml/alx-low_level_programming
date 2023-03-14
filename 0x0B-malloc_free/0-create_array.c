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

	array[i] = c;

	if (size == 0)
		return ('\0');

	for (i = 0; i < size; i++)
	{
		return (array);
	}

	return ('\0');
}
