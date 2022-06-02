/*
** EPITECH PROJECT, 2021
** my_strcat
** File description:
** Task02 CPool Day07
*/

#include "my_rpg.h"

char *my_strcat(char *to_join, char *str)
{
    char *new = NULL;
    int i = 0;
    int j = 0;

    if (!to_join)
        return (str);
    new = malloc(sizeof(char) * (my_strlen(to_join) + my_strlen(str) + 3));
    if (new == NULL)
        return (NULL);
    if (str != NULL)
        for (; str[i]; i++)
            new[i] = str[i];
    for (; to_join[j]; j++)
        new[i + j] = to_join[j];
    new[i + j] = '\0';
    free(str);
    return (new);
}
