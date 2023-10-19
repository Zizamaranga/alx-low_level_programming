#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: First string
 * @s2: Second string
 * Return: An integral value
 *
 */

int _strcmp(char *s1, char *s2)
{
	while (*s2 && *s1 && *s2 == *s1)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
