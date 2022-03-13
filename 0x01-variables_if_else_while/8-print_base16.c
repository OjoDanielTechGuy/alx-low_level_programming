#include <stdio.h>
/**
 * main - Entry Point
 * desc: program that prints all the numbers of 
 * base 16 in lowercase using only putchar function
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
