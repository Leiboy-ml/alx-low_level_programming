#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <ctype.h>

/**
 * main - finds the minimum number of coins
 * @argc: number of arguments passed
 * @argv: list of arguments
 * Return: 0 - success 1 - otherwise
 */

int main(int argc, char *argv[])
{
	int cents;
	int coin_count;
	int num_coins;
	int coins[5] = {25, 10, 5, 2, 1};
	int x;
	

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	num_coins = 0;

	for (x = 0; x < 5; x++)
	{
		coin_count = cents / coins[x];
		num_coins += coin_count;
		cents -= coin_count * coins[x];
	}
	printf("%d\n", num_coins);
	return (0);
}
