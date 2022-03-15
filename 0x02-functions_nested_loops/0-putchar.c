#include <stdio.h>
#include "main.h"
/**
 * main - Entry Point
 * desc: program that prints _putchar, followed by a new line.
 * The program should return 0
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *fn = "_putchar";

	while (*fn)
	{
		_putchar(*fn);
		fn++;
	}
	_putchar('\n');

	return (0);
}
