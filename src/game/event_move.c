/*
** EPITECH PROJECT, 2021
** B-MUL-200-REN-2-1-myrpg-lisa.garnier
** File description:
** event_mode.c
*/

#include "my_rpg.h"

void event_move(game_t *game)
{
    if (game->nb_scene == 4)
        event_spawn(game);
    if (game->nb_scene == 7)
        event_room_mid(game);
    if (game->nb_scene == 8)
        event_room_l(game);
    if (game->nb_scene == 9)
        event_room_r(game);
    if (game->nb_scene == 10)
        event_room_boss(game);
}