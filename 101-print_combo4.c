#include <stdio.h>
/**
 * main - Entry Point
 * desc: Progam that prints all possible different
 * combination of three digits.
 * Return 0 (Success)
 */
int main(void)
{
	int count, a, b, c;

	for (count = 0; count < 1000; count++)
	{
		a = count / 100; /* in hundred */
		b = (count / 10) % 10; /* in tens */
		c = count % 10; /* in units */

		if (a < b && b < c)
		{
			putchar(a + '0');
			putchar(b + '0');
			putchar(c + '0');

			if (count < 700)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');

	return (0);
}
