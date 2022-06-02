/*
** EPITECH PROJECT, 2022
** my_str_to_word_array
** File description:
** my_stwa
*/

#include "my_rpg.h"

int count_separator(char *str, char sep)
{
    int nb = 0;
    int i = 0;

    for (; str[i] != '\0'; i++) {
        if (str[i] == sep) {
            nb++;
        }
        if (str[i] == sep && str[i + 1] == sep)
            nb--;
    }
    return nb;
}

char *my_strnbcpy(char *dest, char *str, int nb, char sep)
{
    int i = 0;
    int j = 0;
    int k = 0;

    for (; str[i] != '\0'; i++) {
        if (str[i] == sep)
            k++;
        if (k >= nb) {
            break;
        }
    }
    if (k >= nb && str[i] == sep)
        i++;
    for (;str[i] != sep && str[i] != '\0'; i++) {
        dest[j] = str[i];
        j++;
    }
    dest[j] = '\0';
    return dest;
}

char *fillline(char *str, int i, char sep)
{
    int a = 0;
    char *final = malloc(sizeof(char) * my_strlen(str) + 2);

    for (; str[i] != sep && str[i] != '\0'; i++) {
        final[a] = str[i];
        a++;
    }
    final[a] = '\0';
    return final;
}

char **my_stwa(char *str, char sep)
{
    int nb = count_separator(str, sep);
    int i = 0;
    int a = 0;
    char **array = malloc(sizeof(char *) * (nb + 2));

    for (; a <= nb; a++) {
        array[a] = fillline(str, i, sep);
        for (; str[i] != sep && str[i] != '\0'; i++);
        i++;
    }
    array[a] = NULL;
    return array;
}
