#include "main.h"

/**
 * times_table - Function to print times table
 * Return: 0 -Success
 */

void times_table(void)
{
	int a = 0;
	int x = 0;
	int m;

	for (a = 0; a <= 9; a++)
	{
		for (x = 0; x <= 9; x++)
		{
			m = a * x;
			if (m < 10)
			{
				if (x == 0)
				{
					_putchar(m + '0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(m + '0');
				}
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar((m / 10) + '0');
				_putchar((m % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
