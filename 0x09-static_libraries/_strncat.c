#include "main.h"

char *_strncat(char *dest, char *src, int n)
{
    char *temp = dest;

    while (*dest) {
        dest++;
    }

    while (n > 0 && *src) {
        *dest = *src;
        dest++;
        src++;
        n--;
    }

    *dest = '\0'; // add the null-terminating character
    return temp;
}

