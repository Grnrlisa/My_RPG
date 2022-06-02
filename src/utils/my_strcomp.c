/*
** EPITECH PROJECT, 2021
** B-MUL-200-REN-2-1-myrpg-lisa.garnier
** File description:
** my_strcomp.c
*/

#include "my_rpg.h"

int my_strcomp(char *str, char *comp)
{
    if (my_strlen(str) != my_strlen(comp))
        return 0;
    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] != comp[i])
            return 0;
    return 1;
}
