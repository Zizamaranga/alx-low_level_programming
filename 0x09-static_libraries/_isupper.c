#include "main.h"

/**
 * _isupper - Entry point
 *
 * @c: the letters of the alphabet
 *
 *
 * Return: Always 1 or 0 (Success)
 */

int _isupper(int c)
{
        if (c >= 'A' && c <= 'Z')
                return (1);
        else
                return (0);
}

