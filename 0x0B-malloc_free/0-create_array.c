#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_arrary - creation of array
 * @size: size of array
 * @c: char value
 * Return: NULL if size = 0 or pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	array = malloc(sizeof(char) * size);

	if(size == 0 || array = NULL)
	{
		return (NULL);
	}

	for(i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
