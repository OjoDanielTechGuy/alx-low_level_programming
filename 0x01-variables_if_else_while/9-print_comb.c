#include <stdio.h>
/**
 * main - Entry Point
 * desc: program that prints all possible combinations -
 * of single-digit numbers
 * Numbers must be separated by , followed by a space
 * Numbers should be printed in ascending order using only putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		if (i < 9)
		{
			putchar(44);
			putchar(32);
		}
		i++;
	}
	putchar('\n');

	return (0);
}
