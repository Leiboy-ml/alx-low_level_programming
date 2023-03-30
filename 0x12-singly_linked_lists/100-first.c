#include <stdio.h>

void __attribute__((constructor)) before_main (void);

/**
 * before_main - prints a string before executing main
 * Return: nothing
 */

void print_before(void)
{
	printf("You're beat! and yet, you must allow,\n";
		"I bore my house upon my back!\n");
}
