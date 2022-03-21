#include "main.h"
/**
 * rev_string - function that prints a string, in reverse
 * @s: holds the value of characters
 * Return: reverse words
 */
void rev_string(char *s)
{
	int i;

	i = 0;

	while (s[i] != 0)
	{
		i++;
	}
	while (i < 0)
	{
		i--;
		_putchar(s[i]);
	}
	_putchar('\n');
}
