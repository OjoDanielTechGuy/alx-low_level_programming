#include <stdio.h>
/**
 * main - program that prints the first 50 Fibonacci numbers,
 * desc: starting with 1 and 2
 * followed by a new line.
 * The numbers must be separated by comma
 * You are allowed to use the standard library
 * Return: Always 0 (Success)
 */
int main(void)
{
	int counter = 2;
	long int x = 1, y = 2;
	long int z;

	printf("%lu, ", x);

	while (counter <= 50)
	{
		if (counter == 50)
		{
			printf("%lu\n", y);
		}
		else
		{
			printf("%lu, ", y);
		}

		z = y;
		y += x;
		x = z;
		counter++;
	}
	return (0);
}
