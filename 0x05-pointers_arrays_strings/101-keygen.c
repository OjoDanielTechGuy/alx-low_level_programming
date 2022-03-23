#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry Point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int r = 0, c = 0;

	srand((unsigned int)(time(NULL)));
	while (c < 2772)
	{
		r = rand() % 128;

		if ((c + r) > 2772)
			break;

		c = c + r;
		printf("%c", r);
	}
	printf("%c\n", (2772 - c));

	return (0);
}
