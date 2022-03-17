#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - function that prints all natural numbers from n to 98
 * @n: An integer
 * desc: Numbers must be separated by a comma
 * Numbers should be printed in order
 * The first printed number should be the number passed to your function
 * The last printed number should be 98
 * You are allowed to use the standard library
 * Return: N to 98
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);

			if (n == 98)
			{
				continue;
			}
			printf(", ");
		}
		printf("\n");
	}
	else
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);

			if (n == 98)
			{
				continue;
			}
			printf(", ");
		}
		printf("\n");
	}
}
