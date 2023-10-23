#include "main.h"
/**
 * *_strchr - locates character in a string.
 * @s: string to search through
 * @c: character were loooking for
 * Return: Null or pointer to the first occurrence
 *
 */



char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}

