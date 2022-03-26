#include "main.h"
/**
 * print_number - function that prints an integer
 * @n: accepts value for integer
 * Return: integer value
 */
void print_number(int n)
{
	unsigned int x = n;

	if (x < 0)
	{
		_putchar(45);
		x = -x;
	}
	if (x / 10)
	{
		print_number(x / 10);
	}
	_putchar(x % 10 + '0');
}
