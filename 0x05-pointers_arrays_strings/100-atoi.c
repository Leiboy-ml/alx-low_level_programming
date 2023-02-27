#include "main.h"
#include <stdio.h>

/**
 * _atoi - Converts string to integer
 * @s: the string in question
 * Return: integer
 */

int _atoi(char *s)
{
	unsigned int result = 0;
	int sign = 1;
	int p = 0;

	for (p = 0; s[p] != '\0'; p++)
	{
		if (s[p] == '-')
		{
			sign *= -1;
		}
		if (s[p] == '+')
		{
			sign *= 1;
		}
		if (s[p] >= '0' && s[p] <= '9')
		{
			result = result * 10 + s[p] - '0';
		}
		if ((result > 1) && !(s[p] >= '0' && s[p] <= '9'))
		{
			break;
		}
	}
	return (result * sign);
}
