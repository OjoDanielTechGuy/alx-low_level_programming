#include <stdio.h>
/**
 * main - Entry Point
 * desc: program that prints the lowercase alphabet in reverse using only putchar function
 * You can only use putchar twice
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
