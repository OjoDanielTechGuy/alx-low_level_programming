#include "main.h"
/**
 * print_triangle - function that prints a triangle
 * @size: n number of size
 * desc: use _putchar function to print
 * If size is 0 or less, the function should print only a new line
 * Use the character # to print the triangle01~
 * Return: triangle shape
 */
void print_triangle(int size)
{
	int x = 0;
	int n = size - 1;
	int y;

	if (size > 0)
	{
		for (; x < size; x++)
		{
			for (y = 0; y < size; y++)
			{
				if (y < n)
					_putchar(' ');
				else
					_putchar('#')
			}
			n--;
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
