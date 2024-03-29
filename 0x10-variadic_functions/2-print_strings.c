#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_string - Prints numbers, followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * @...: A variable number of numbers to be printed.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
       va_list strings;
	char *str;
	unsigned int list;

	va_start(strings, n);

	for (list = 0; list < n; list++)
	{
		str = va_arg(strings, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (list != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(strings);
}

