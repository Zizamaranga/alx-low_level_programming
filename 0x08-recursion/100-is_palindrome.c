#include "main.h"
#include <stdio.h>

/**
 * check_palindrome - Checks palindrome
 * @s: The string to check
 * @start: The starting index
 * @end: The ending index
 * Return: 1 if s is a palindrome, or 0
 */
int check_palindrome(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (check_palindrome(s, start + 1, end - 1));
}

/**
 * _strlen - Returns the length of a string
 * @s: The string
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int len = (0);

	while (s[len])

		len++;
	return (len);
}

/**
 * is_palindrome - Checks is a palindrome
 * @s: The string
 * Return: 1 if s is a palindrome, otherwise 0
 */
int is_palindrome(char *s)
{
	int len = _strlen(s);

	if (len <= 1)

		return (1);
	return (check_palindrome(s, 0, len - 1));
}

