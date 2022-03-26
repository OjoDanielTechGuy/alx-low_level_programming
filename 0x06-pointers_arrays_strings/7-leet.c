#include "main.h"
/**
 * leet - encodes a string
 * @str: accepts strings to encode
 * desc: Letters a and A should be replaced by 4
 * Letters e and E should be replaced by 3
 * Letters o and O should be replaced by 0
 * Letters t and T should be replaced by 7
 * Letters l and L should be replaced by 1
 * Return: encoded string to integer value
 */
char *leet(char *str)
{
	int x, y;
	int look_for[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int replace_with[] = {'4', '3', '0', '7', '1'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (x = 0; x <= 9; x++)
		{
			if (str[i] == find[x])
			{
				str[i] = replace_with[x / 2];
				x = 9;
			}
		}
	}

	return (str);
}
