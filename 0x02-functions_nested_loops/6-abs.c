#include "main.h"
/**
 * _abs - entry point
 *
 * @n: prints absolute
 *
 *
 * Return: Always 0 (Success)
 *
 */

int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
