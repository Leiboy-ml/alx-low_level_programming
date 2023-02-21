#include "main.h"
#include <stdio.h>
/**
 * main - Prints string to console
 * Return: 0 - Success
 */

int main(void)
{
	int a = 97;

	while (a < 122)
	{
		_putchar("%c", a);
		a++;
	}

	return (0);
}

