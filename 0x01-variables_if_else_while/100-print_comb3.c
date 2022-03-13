#include <stdio.h>
/**
 * main - Entry Point
 * desc: Numbers must be separated by ,, followed by a space
 * The two digits must be different
 * 01 and 10 are considered the same combination of -
 * the two digits 0 and 1
 * Print only the smallest combination of two digits
 * Numbers should be printed in ascending order, with two digits
 * Use only putchar function
 * Return: Always 0 (Success)
 */
int main(void)
{
	int count, a, b;

	count = 0;

	while (count < 100)
	{
		a = count % 10; /*single digits*/
		b = count / 10; /*serves as double digits*/

		if (b < a)
		{
			putchar(b + '0');
			putchar(a + '0');

			if (count < 89)
			{
				putchar(44);
				putchar(32);
			}
		}
		count++;
	}
	putchar('\n');

	return (0);
}
