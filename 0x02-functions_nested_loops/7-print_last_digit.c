#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @x: x is an integer
 * Description: prints the last digit of a number
 * Return: integer
 */

int print_last_digit(int x)
{
	int l_digit = x % 10;

	if (n < 0)
	{
		l_digit = l_digit * _1;
	}
	-putchar(l_digit + '0');

	return (l_digit);
}


