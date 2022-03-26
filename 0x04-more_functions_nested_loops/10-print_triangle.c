#include "main.h"
/**
 * print_triangle - function that prints a triangle
 * @size:  size of triangle
 * desc: use _putchar function to print
 * If size is 0 or less, the function
 * should print only a new line
 * Use the character # to print the triangle
 * Return: Always 0 (Success)
 */
void print_triangle(int size)
{
	int hash, index;

	if (size > 0)
	{
		for (hash = 1; hash <= size; hash++)
		{
			for (index = size - hash; index > 0; index--)
				_putchar(' ');

			for (index = 0; index < hash; index++)
				_putchar('#');

			if (hash == size)
				continue;

			_putchar('\n');

		}
	}
	_putchar('\n');
}
