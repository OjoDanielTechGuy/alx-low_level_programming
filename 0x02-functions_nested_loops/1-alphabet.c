#include <stdio.h>
#include "main.h"
/**
 * main - Entry Point
 * desc:You can only use _putchar twice in your code
 * function that prints the alphabet, in lowercase
 * followed by a new line
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');

}
