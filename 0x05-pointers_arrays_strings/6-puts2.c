#include "main.h"
/**
 * puts2 - function that prints every other character of a string
 * @str: string input
 * Return: print every second character
 */
void puts2(char *str)
{
	int x = 0;

	for (; str[x] != '\0'; x++)
	{
		if ((x % 2 == 0))
			_putchar(str[x]);
		else
			continue;
	}
	_putchar('\n');

}
