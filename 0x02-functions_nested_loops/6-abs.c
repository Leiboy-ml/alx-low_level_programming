#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * int_abs(int) - main entry point
 *
 * _abs - Finds the absolute value of an integer
 *
 * x: is the integer value
 *
 * the function computes the absolute value of an integer
 *
 * Return: integer
 */
int _abs(int x)
{
	if (x < 0)
	{
		return (x * -1);
	}
	else
	{
		return (x);
	}
}
