#include "main.h"

/**
 * _isdigit - Entry point
 *
 * @c: return value
 *
 * Return: Always 1 or 0 (Success)
 *
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
