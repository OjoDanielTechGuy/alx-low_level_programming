#include "main.h"
/**
 * print_triangle - function that prints a triangle
 * @size: size of triangle
 * desc: use _putchar function to print
 * If size is 0 or less, the function should print only a new line
 * Use the character # to print the triangle01~
 * Return: triangle shape
 */
int print_triangle(int size)
{
	int x, y, z;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (y = 0; y <= (size - 1); y++)
		{
			for (x = 0; x < (size - 1) - y; y++)
			{
				_putchar(' ');
			}
			for (z = 0; z <= y; z++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
