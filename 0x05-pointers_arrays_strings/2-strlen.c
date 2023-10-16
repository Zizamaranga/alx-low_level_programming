#include "main.h"


/**
 * _strlen - Entry point
 *
 * @s: pointer to a string
 *
 * Return: Return length of the string
 *
 */

int _strlen(char *s)
{
	int length = 0;

	while (*(s + length) != '\0')
	{
		length++;
	}

	return (length);
}
