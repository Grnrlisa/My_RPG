/*
** EPITECH PROJECT, 2021
** my_defender
** File description:
** my_defender.c
*/

#include "my_rpg.h"

void clock_end(game_t *game)
{
    game->timer[4].time = sfClock_getElapsedTime(game->timer[4].clock);
    game->timer[4].sec = game->timer[4].time.microseconds / 1000000.0f;
}

void clock_end_2(game_t *game)
{
    game->timer[5].time = sfClock_getElapsedTime(game->timer[5].clock);
    game->timer[5].sec = game->timer[5].time.microseconds / 1000000.0f;
}

void clock_end_3(game_t *game)
{
    game->timer[6].time = sfClock_getElapsedTime(game->timer[6].clock);
    game->timer[6].sec = game->timer[6].time.microseconds / 1000000.0f;
}
