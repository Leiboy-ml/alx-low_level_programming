#include "main.h"
#include <stdio.h>
/**
 * print_sign - Entry point
 * n: the integer value it receives
 * Description: checks if the number is positive,negative or zero
 * * Return: 1 if positive,-1 if negative,else returns zero
 */


int print_sign(int n)
{
	if (n > 0)
        {
	_putchar("%d is greater than zero\n",n);
	
	return (1);

        }

        else if (n < 0)
	
        {
		_putchar("%d is less than zero\n",n);
                return (-1);
                
        }
        else
        {
		_putchar("%d is zero\n",n);
		return (0);
        }
}
