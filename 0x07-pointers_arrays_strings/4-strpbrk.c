#include "main.h"
/**
 * *_strpbrk - searches a strng for any set of bytes
 * @s: string to search through
 * @accept: characters to match
 * Return: a pointer to the bytes that matches
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int k, l;

	for (k = 0; s[k]; k++)
	{
		for (l = 0; accept[l]; l++)
		{
			if (s[k] == accept[l])
			{
				return (s + k);
			}
		}
	}
	return (NULL);
}
