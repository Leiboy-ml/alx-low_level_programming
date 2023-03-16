#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: size of s2 to concatenate
 * Return: pointer or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	if (s1 == NULL)
	{
	s1 = "";
	}
	if (s2 == NULL)
	{
	s2 = "";
	}

	for (i = 0; i < n; i++)
	{
		if (n < strlen(s2))
		{
		s1 = malloc(sizeof(char) * strlen(s1));

		s2 = malloc(sizeof(char) * (n + 1));

		strcat(s1, (s2 + n));
		}
		if (n >= strlen(s2))
		{
		s1 = malloc(sizeof(char) * strlen(s1));

		s2 = malloc(sizeof(char) * strlen(s2));

		strcat(s1, s2);
		}
			return (s1);

		if (s1 || s2 == NULL)
		{
		free(s1);
		free(s2);
		}
	}
	return (NULL);
}
