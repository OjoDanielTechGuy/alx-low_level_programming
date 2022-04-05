#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - returns a pointer to a new string
 * which is a duplicate of the string str
 * @str: accepts string value
 * Return: a pointer
 */
char *_strdup(char *str)
{
	int i, point;
	char *duplicate;

	if (str == NULL)
	{
		return (NULL);
	}

	for (point = 0; point <= *str; point++)
	{
	}

	point += 1;
	duplicate = malloc(sizeof(char) * point);

	for (i = 0; i < point; i++)
	{
		duplicate[i] = str[i];
	}

	if (duplicate == NULL)
	{
		return (NULL);
	}

	return (duplicate);
}
