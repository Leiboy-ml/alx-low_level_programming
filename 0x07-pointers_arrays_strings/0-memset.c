#include "main.h"

/**
 * _memset - Function  to fill memory with a constant byte
 * @s: Starting address
 * @b: The byte to fill with
 * @n: Number of bytes
 * Return: s (start address)
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
