#include "variadic_functions.h"
#include <stdarg.h>


/**
 * sum_them_all - returns sum of all the parameters passed
 * @n: the number of parameters passed to the funtion
 *
 * @...:A varable number of parameters to calculate the sum of.
 *
 * Return: If n == 0 - 0.
 * else  - the sum of all the parameters passed
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list numbers;

	va_start(numbers, n);

	unsigned int elements, sum = 0 ;

	if (n == 0)
		return (0);

	for (elements = 0; elements <= n; elements++)
	
		sum += va_arg(numbers, int);

		va_end(numbers);

		return (sum);
}
