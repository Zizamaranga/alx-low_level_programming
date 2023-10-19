#include <stdio.h>

/**
 * leet - Encodes a string into 1337
 * @str: The string to be encoded
 *
 * Return: The encoded string
 */
char *leet(char *str)
{
	char *lett = "aAeEoOtTlL";
	char *leets = "4433007711";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; lett[j] != '\0'; j++)
		{
			if (str[i] == lett[j])
			{
				str[i] = leets[j];
			}
		}
	}

	return (str);
}
