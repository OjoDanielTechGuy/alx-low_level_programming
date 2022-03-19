#include "main.h"
/**
 * print_most_numbers - function that prints the numbers, from 0 to 9
 * desc: Do not print 2 and 4
 * You can only use _putchar twice in your code
 * Return: Always 0 (Success)
 */
void print_most_numbers(void)
{
	char x;

	for (x = 0; x <= 9; x++)
	{
		if (x == 2 || x == 4)
		{
			continue;
		}
		else
		{
			_putchar(x + '0');
		}
	}
	_putchar('\n');
}
