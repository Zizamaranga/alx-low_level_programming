#include "lists.h"
#include <stddef.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
size_t print_list(const list_t *h)
{
    size_t node_count = 0;

    const char *temp_str = h->str;

    while (h != NULL)
    {
        if (h->str == NULL)
        {
            _putchar('[');
            _putchar('0' + h->len / 10);
            _putchar('0' + h->len % 10);
            _putchar(']');
            _putchar(' ');
            _putchar('(');
            _putchar('n');
            _putchar('i');
            _putchar('l');
            _putchar(')');
            _putchar('\n');
        }
        else
        {
            _putchar('[');
            _putchar('0' + h->len / 10);
            _putchar('0' + h->len % 10);
            _putchar(']');
            _putchar(' ');


            while (*temp_str != '\0')
            {
                _putchar(*temp_str);
                temp_str++;
            }
            _putchar('\n');
        }

        h = h->next;
        node_count++;
    }

    return (node_count);
}

