#include "main.h"

/**
 * _puts_recursion - funtion prints string
 * @s : string variable
 * Return - void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}

	if (*s != '\0')
	{
		_putchar(*s);
		*s++;
	}
}
