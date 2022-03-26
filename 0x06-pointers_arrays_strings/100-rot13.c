#include "main.h"
/**
 * rot13 - function that encodes a string
 * @str: accepts string value that needs to be encode
 * Return: encoding of string input
 */
char *rot13(char *str)
{
	int x, y;

	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	x = 0;
	while (str[x] != '\0')
	{
		y = 0;
		while (alpha[y] != '\0')
		{
			if (str[x] == alpha[y])
			{
				str[x] = rot[y];
				break;
			}
			y++;
		}
		x++;
	}
	return (str);
}
