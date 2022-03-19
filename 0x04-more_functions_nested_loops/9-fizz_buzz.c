#include "main.h"
/**
 * main - program that prints
 * the numbers from 1 to 100
 * @size: represents integer number
 * desc: for multiples of three print Fizz
 * instead of the number and for the multiples
 * of five print Buzz
 * For numbers which are multiples of both
 * three and five print FizzBuzz
 * Each number or word should be separated by a space
 * standard library can be use
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char f[] = "Fizz";
	char b[] = "Buzz";
	char fb[] = "FizzBuzz";

	for (i = 1; i <= 100; i++)
	{
		if (i == 100)
			printf("%s", b);
		else if ((i % 3 == 0) && (i % 5 == 0))
			printf("%s ", fb);
		else if (i % 3 == 0)
			printf("%s ", f);
		else if (i % 5 == 0)
			printf("%s ", b);
		else
			printf("%d ", i);
	}
	printf("\n");

	return (0);
}
