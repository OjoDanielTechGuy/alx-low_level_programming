#include <stdio.h>
/**
 * main - Entry Point
 * desc:program that computes and prints the sum
 * of all the multiples of 3 or 5 below 1024
 * You are allowed to use the standard library
 * Return: Always 0 (Success)
 */
int main(void)
{
	int start_n, end_n, total;

	end_n = 1024;
	total = 0;

	for (start_n = 0; start_n < end_n; start_n++)
	{
		if ((start_n % 3 == 0) || (start_n % 5 == 0))
		{
			total += start_n;
		}
		else
		{
			continue;
		}
	}
	printf("%d", total);
	printf("\n");

	return (0);
}
