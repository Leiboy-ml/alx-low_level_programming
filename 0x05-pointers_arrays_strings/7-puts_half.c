#include "main.h"

/**
 * puts_half - Prints the second half of a string
 * @str: The string in question
 */

void puts_half(char *str)
{
	int x = 0;
	int n, i;

	while (*str != '\0')
	{
		x++;
		str++;
	}
	if (x % 2 != 0)
	{
		n = (x - 1) / 2;
	}
	else
	{
		n = x / 2;
	}
	str -= n;
	for (i = 0; i < n; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
