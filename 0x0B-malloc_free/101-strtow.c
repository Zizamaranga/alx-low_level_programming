#include <stdlib.h>
#include <stdio.h>

int is_space(char c)
{
    return (c == ' ' || c == '\t' || c == '\n');
}
int count_words(char *str)
{
    int co = 0, i = 0;

    while (str[i] != '\0')
    {
        while (is_space(str[i]))
            i++;
        if (str[i] != '\0' && !is_space(str[i]))
        {
            co++;
            while (str[i] != '\0' && !is_space(str[i]))
                i++;
        }
    }
    return (co);
}

char **strtow(char *str)
{
    char **wo;
    int i, j, k, wo_co = 0, wo_len = 0;

    if (str == NULL || *str == '\0')
        return (NULL);

    wo_co = count_words(str);

    wo = malloc((wo_co + 1) * sizeof(char *));
    if (wo == NULL)
        return (NULL);

    for (i = 0; i < wo_co; i++)
    {
        while (is_space(*str))
            str++;
        wo_len = 0;
        while (str[wo_len] != '\0' && !is_space(str[wo_len]))
            wo_len++;
        wo[i] = malloc((wo_len + 1) * sizeof(char));
        if (wo[i] == NULL)
        {
            for (j = 0; j < i; j++)
                free(wo[j]);
            free(wo);
            return (NULL);
        }
        for (k = 0; k < wo_len; k++)
            wo[i][k] = str[k];
        wo[i][k] = '\0';
        str += wo_len;
    }
    wo[wo_co] = NULL;
    return (wo);
}

