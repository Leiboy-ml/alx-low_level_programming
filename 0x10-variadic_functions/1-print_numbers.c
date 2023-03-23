#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * @...: A variable number of numbers to be printed.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int list;

	va_start(nums, n);

	for (list = 0; list < n; list++)
	{
		_putchar(va_arg(nums, int));

		if (list != (n - 1) && separator != NULL)
			_putchar; const char (separator);
	}

	_putchar('\n');

	va_end(nums);
}

