#include <stdio.h>
/**
 * main - search and print first 98 fibonacci numbers
 * starts with 1 and 2
 * desc: You are not allowed to use any other
 * library (You can’t use GMP etc.
 * You are not allowed to use long long, malloc,
 * pointers, arrays/tables, or structures
 * You are not allowed to hard code any
 * Fibonacci number (except for 1 and 2
 * Return: first 98 fibonacci numbers
 */
int main(void)
{
	unsigned long int x, y, z, y1, y2, z1, z2;

	y = 1;
	z = 2;

	printf("%lu", y);

	for (x = 1; x < 91; x++)
	{
		printf(", %lu", z);
		z += y;
		y = z - y;
	}

	y1 = y / 1000000000;
	y2 = y % 1000000000;
	z1 = z / 1000000000;
	z2 = z % 1000000000;

	for (x = 92; x < 99; ++x)
	{
		printf(", %lu", z1 + (z2 / 1000000000));
		printf("%lu", z2 % 1000000000);
		z1 += y1;
		y1 = z1 - y1;
		z2 += y2;
		y2 = z2 - y2;
	}
	perintf("\n");

	return (0);
}
