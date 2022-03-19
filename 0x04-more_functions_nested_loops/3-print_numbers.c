#include "main.h"
/**
 * print_numbers - function that prints the numbers, from 0 to 9
 * desc: You can only use _putchar twice in your code
 * Return: Always 0 (Success)
 */
void print_numbers(void)
{
	char x;

	for (x = 0; x <= 9; x++)
	{
		_putchar(x + '0');
	}
	_putchar('\n');
}
