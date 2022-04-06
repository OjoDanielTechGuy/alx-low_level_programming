#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints minimum number
 * @argc: number of array
 * @argv: array of pointers
 * desc: Usage: ./change cents
 * where cents is the amount of cents you need to give back
 * if the number of arguments passed to your program is not exactly 1,
 * print Error, followed by a new line, and return 1
 * use atoi to parse the parameter passed to your program
 * If the number passed as the argument is negative, print 0,
 * followed by a new line
 * use an unlimited number of coins of values 25, 10, 5, 2, and 1 cent
 * Return:  minimum number of coins
 */
int main(int argc, char *argv[])
{
	int cents, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	while (cents > 0)
	{
		while (cents >= 25)
		{
			cents -= 25;
			coins++;
		}
		while (cents >= 10)
		{
			cents -= 10;
			coins++;
		}
		while (cents >= 5)
		{
			cents -= 5;
			coins++;
		}
		while (cents >= 2)
		{
			cents -= 2;
			coins++;
		}
		while (cents >= 1)
		{
			cents -= 1;
			coins++;
		}
	}

	printf("%d\n", coins);

	return (0);
}