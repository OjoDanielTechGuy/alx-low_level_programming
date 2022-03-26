#include "main.h"
/**
 * _strcat - function that concatenates two strings
 * desc: This function appends the src string to the dest string
 * overwriting the terminating null byte (\0) at the end of
 * dest, and then adds a terminating null byte
 * @dest: accepts string
 * @src: string
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	a = 0;

	while (dest[a] != 0)
	{
		a++;
	}
	
	b = 0;

	while (src[b] != 0)
	{
		dest[a] = src[b];
		a++;
		b++;
	}

	return (dest);
}
