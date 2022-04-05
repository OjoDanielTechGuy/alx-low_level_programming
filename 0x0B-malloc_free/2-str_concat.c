#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - concatenation of two strings
 * @s1: first value
 * @s2: second value
 * Return: string concatenation
 */
char *str_concat(char *s1, char *s2)
{
	char *duplicate;
	int index, duplicate_index = 0, len = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	for (index = 0; s1[index] || s2[index]; index++)
	{
		len++;
	}

	duplicate = malloc(sizeof(char) * len);

	if (duplicate == NULL)
	{
		return (NULL);
	}

	for (index = 0; s1[index]; index++)
	{
		duplicate[duplicate_index++] = s1[index];
	}

	for (index = 0; s2[index]; index++)
	{
		duplicate[duplicate_index++] = s2[index];
	}

	return (duplicate);
}
