#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry Point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int y = 0, x = 0;
	time_t t;

	srand((unsigned int)time(&t));
	while (x < 2772)
	{
		y = rand() % 128;

		if ((x + y) > 2772)
			break;

		x += y;
		printf("%x", y);
	}
	printf("%x\n", (2772 - x));

	return (0);
}
