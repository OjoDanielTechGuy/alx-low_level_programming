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
	int point, i = 0;
	char *duplicate;

	if (str == NULL)
	{
		return (NULL);
	}

	for (point = 0; str[point]; point++)
	{
		i++;
	}

	duplicate = malloc(sizeof(char) * (i + 1));

	if (duplicate == NULL)
	{
		return (NULL);
	}

	for (point = 0; str[point]; point++)
	{
		duplicate[point] = str[point];
	}

	duplicate[i] = '\0';

	return (duplicate);
}
