#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - Entry Point
 * desc: You can only use _putchar twice in your code
 * Return:  a-z 10x
 */
void print_alphabet_x10(void)
{
	int count, n;

	count = 0;

	while (count < 10)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		count++;
		_putchar('\n');
	}
}
