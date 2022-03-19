#include "main.h"
/**
 * print_square - function that prints a square,
 * followed by a new line.
 * @size: size of square
 * desc: use _putchar function to print
 * If size is 0 or less, the function should print only a new line
 * Use the character # to print the square
 * Return: # as representation of squares
 */
void print_square(int size)
{
	int x, y;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < size; x++)
		{
			for (y = 0; y < size; y++)
			{
				_putchar('#');

			}
			_putchar('\n');
		}
	}
}
