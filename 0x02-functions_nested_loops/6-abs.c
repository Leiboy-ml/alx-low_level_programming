#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * int_abs(int) - main entry point
 *
 * the function computes the absolute value of an integer
 *
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
