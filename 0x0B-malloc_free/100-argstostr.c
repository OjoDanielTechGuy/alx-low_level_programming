#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * argstostr - concatenates all arguments
 * @ac: int value
 * @av: string value
 * des: Returns NULL if ac == 0 or av == NULL
 * also return NULL if it fails
 * Each argument should be followed by a \n in the new string
 * Return: pointer to a new string
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, n, k, len = ac;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
		{
			len++;
		}
	}

	str = malloc(sizeof(char) * len + 1);

	if (str == NULL)
	{
		return (NULL);
	}

	k = 0;

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
		{
			str[k++] = av[i][n];
		}

		str[k++] = '\n';
	}

	str[len] = '\0';

	return (str);
}
