/*
** EPITECH PROJECT, 2021
** my_defender
** File description:
** my_defender.c
*/

#include "my_rpg.h"

void clock_texts(game_t *game)
{
    game->timer[0].time = sfClock_getElapsedTime(game->timer[0].clock);
    game->timer[0].sec = game->timer[0].time.microseconds / 1000000.0f;
}

void clock_texts_2(game_t *game)
{
    game->timer[1].time = sfClock_getElapsedTime(game->timer[1].clock);
    game->timer[1].sec = game->timer[1].time.microseconds / 1000000.0f;
}

void clock_walk(game_t *game)
{
    game->timer[2].time = sfClock_getElapsedTime(game->timer[2].clock);
    game->timer[2].sec = game->timer[2].time.microseconds / 1000000.0f;
}

void clock_pause(game_t *game)
{
    game->timer[3].time = sfClock_getElapsedTime(game->timer[3].clock);
    game->timer[3].sec = game->timer[3].time.microseconds / 1000000.0f;
}
