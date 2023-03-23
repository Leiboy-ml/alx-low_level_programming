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
	unsigned int elements, sum = 0 ;

	va_start(numbers, n);

	for (elements = 0; elements <= n; elements++)
	{
		if (n == 0)
			return (0);
		else 
			sum += va_arg(numbers, int);

		va_end(numbers);

		return (sum);
	}
}
