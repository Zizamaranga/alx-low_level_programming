#include "main.h"

/**
 * _strspn - gets full length of a prefix substring
 * @s: string searched through
 * @accept: characters matched
 * Return: the no of bytes from accept
 *
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int k, l;
	unsigned int count = 0;
	int match;

	for (k = 0; s[k]; k++)
	{
		match = 0;
		for (l = 0; accept[l]; l++)
		{
			if (s[k] == accept[l])
			{
				count++;
				match = 1;
				break;
			}
		}
		if (match == 0)
		{
			break;
		}
	}
	return (count);
}

