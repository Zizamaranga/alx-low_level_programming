#include "main.h"

/**
 * _strstr - Locates the substring
 * @haystack: String searched
 * @needle: Substring needed
 * Return: Pointer to the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *b = haystack;
		char *p = needle;

		while (*haystack && *p && *haystack == *p)
		{
			haystack++;
			p++;
		}
		if (!*p)
		{
			return (b);
		}
		haystack = b + 1;
	}
	return (NULL);
}


