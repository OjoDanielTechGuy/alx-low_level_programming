#include "main.h"
/**
 * _strncpy - functions that copy strings
 * @dest: array returns
 * @src: serves as pointer to receive an array
 * @n: iterations times
 * Return: dest parameter
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	i = i;

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
