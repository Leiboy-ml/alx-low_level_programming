#include "main.h"

/**
 * clear_bit - sets the value of a bit at a given index to 0.
 * @n: A pointer to the bit.
 * @index: the index to set the value at 
 *
 * return : If an error occurs - -1
 * else 1
 *
 * */

int clear_bit(unsigned long *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long it) * 8)
			return (-1);

			*n &= ~(1 << index);

			return (1);
}
