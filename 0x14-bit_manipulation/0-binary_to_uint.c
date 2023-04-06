#include "main.h"

/**
*binary_to_uint - converts a binary number to an unsigned int.
*
*@b: a pointer to a string of 0 and 1 characters
*
* Return: if be is NULL of contains character other than 0 or 1 -0
* 		else he converted number.
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	int index = 0;

	if (b[index] == '\0')
		return (0);

	while ((b[index] == '0') || (b[index] == '1'))
	{
		num <<= 1;
		num += b[index] - '0';
		index++;
	}

	return (num);
}
