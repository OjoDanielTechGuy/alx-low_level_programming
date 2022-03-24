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
	int i, j;

	for (i = 0; dest[i] = '\0'; ++i);

	for (j = 0; src[j] != '\0'; ++j, ++i)
	{
		dest[i] = src[j];
	}

	dest[i] = '\0';

	return (dest);
}
