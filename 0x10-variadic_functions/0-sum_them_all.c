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
	va_list nums;
	unsigned int index, sum = 0;

	va_start(nums, n);

	for (index = 0; index < n; index++)
		sum += va_arg(nums, int);

	va_end(nums);

	return (sum);
}