#include <stdio.h>
/**
 * main - Entry Point
 * des:  write a program that finds and prints the
 * sum of the even-valued terms
 * whose values do not exceed 4,000,000
 * Return: Always 0 (Success)
 */
int main (void)
{
	int x, y, z, total;

	x = 1;
	y = 2;
	total = 0;

	while (y < 4000000)
	{
		if (y % 2 == 0)
		{
			total += y;
		}
		z = y;
		y += x;
		x = z;
	}
	printf("%d\n", total);

	return (0);
}
