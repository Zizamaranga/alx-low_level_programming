#include "lists.h"
#include <stdlib.h>


/**
 * _strdup - Duplicates a string using malloc.
 * @str: The string to duplicate.
 *
 * Return: The pointer to the duplicated string.
 */
char *_strdup(const char *str);

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: Pointer to a pointer to the head of the list.
 * @str: The string to be duplicated and added to the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	new_node->str = _strdup(str);
    	if (str == NULL)
        return (NULL);

    list_t *new_node = malloc(sizeof(list_t));
    if (new_node == NULL)
        return (NULL);

    if (new_node->str == NULL)
    {
        free(new_node);
        return (NULL);
    }

    new_node->len = 0;
    new_node->next = *head;
    *head = new_node;

    return (new_node);
}

/**
 * _strdup - Duplicates a string using malloc.
 * @str: The string to duplicate.
 *
 * Return: The pointer to the duplicated string.
 */
char *_strdup(const char *str)
{
    if (str == NULL)
        return (NULL);

    char *dup_str;
    unsigned int i, len = 0;

    dup_str = malloc((len + 1) * sizeof(char));

    while (str[len] != '\0')
        len++;

    if (dup_str == NULL)
        return (NULL);

    for (i = 0; i <= len; i++)
        dup_str[i] = str[i];

    return (dup_str);
}

