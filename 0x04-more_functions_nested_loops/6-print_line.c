#include "main.h"
/**
 * print_line - function that draws a straight line
 * in the terminal.
 * desc: only use _putchar function to print
 * @n: Where n is the number of times the character
 * _ should be printed
 * The line should end with a \n
 * If n is 0 or less, the function should only print \n
 * Return: a straight line (Success)
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
