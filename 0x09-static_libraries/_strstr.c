#include "main.h"

char *_strstr(char *haystack, char *needle)
{
    while (*haystack) {
        char *begin = haystack;
        char *pattern = needle;

        while (*haystack && *pattern && *haystack == *pattern) {
            haystack++;
            pattern++;
        }

        if (!*pattern) {
            return begin;
        }
        haystack = begin + 1;
    }

    return NULL;
}

