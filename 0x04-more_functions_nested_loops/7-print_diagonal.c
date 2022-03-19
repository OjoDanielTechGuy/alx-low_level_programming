#include "main.h"
/**
 * print_diagonal - function that draws a diagonal line
 * on the terminal
 * @n: number of times to be \ charater should be printed
 * desc: You can only use _putchar function to print
 * The diagonal should end with a \n
 * If n is 0 or less, the function should only print a \n
 * Return: diagonal line
 */
void print_diagonal(int n)
{
	int x, y;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 1; x <= n; x++)
		{
			for (y = 1; y < x; y++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
