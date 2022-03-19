#include <stdio.h>
/**
 * main - prints the largest prime factor of the number 612852475143
 * Return - Always 0 (Success)
 */
int main(void)
{
	unsigned long int x, n = 612852475143;

	for (x = 3; 3 < 782849; x += 2)
	{
		while ((n % x == 0) && (n != x))
		{
			n = n / x;
		}
	}
	printf("%lu\n", n);

	return (0);
}
