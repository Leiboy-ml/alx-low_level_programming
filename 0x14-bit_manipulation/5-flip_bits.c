#include "main.h"

/**
 * flip_bits - Counts the number of bits to be flipped to get from one number to the other
 *
 * @n: the num
 * @m: the recieving num
 *
 * Return: the nuber of bits required to get from n to m.
 *
 **/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, bits = 0;

	while (xor > 0)
	{
		bits += (xor & 1);

		xor >>= 1;
	}

	return (bits);
}
