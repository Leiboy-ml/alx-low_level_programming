#include "main.h"
#include <stdio.h>

/**
 * main - Prints string to console
 * Return: 0 - Success
 */
void print_alphabet(int);

int main(void)
{
	int a = 97;

	while (a <= 122)
	{
		_putchar(a);
		a++;
		
	}

	_putchar("\n");

	return (0);
}
