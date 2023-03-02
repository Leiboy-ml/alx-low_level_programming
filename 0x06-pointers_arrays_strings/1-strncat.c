#include "main.h"

/**
 * _strncat - concatenates @src to @des
 * Return: dest
 * @dest: dest is a is pointer to the destination array
 * @src: src is is the string to be appended
 * @n: n is the variable integer
 * Description: this fuction links 2 strings
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0;
	int dest_len = 0;

	while (dest[index++])
	{
		dest_len++;
	}
	for (index = 0; src[index] && index < n; index++)
	{
		dest[dest_len++] = src[index];
	}
	return (dest);
}
