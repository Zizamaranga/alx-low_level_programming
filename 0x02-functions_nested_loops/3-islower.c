#include "main.h"

/**
 * _islower - Entry point
 *
 *
 * @c: all lower case alphabet
 *
 *
 * Return: Always 1 or 0 (Success)
 *
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
