#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	char s[] = "Last digit of";
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;

	if (lastDigit > 5)
	{
		printf("%s %d is %d and is greater than 5\n", s, n, lastDigit);
	}
	else if (lastDigit == 0)
	{
		printf("%s %d is %d and is 0\n", s, n, lastDigit);
	}
	else if (lastDigit < 6)
	{
		printf("%s %d is %d and is less than 6 and not 0\n", s, n, lastDigit);
	}
	
	return (0);
}
