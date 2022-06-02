/*
** EPITECH PROJECT, 2022
** events_setting.c
** File description:
** rpg
*/

#include "my_rpg.h"

void go_to_menu(game_t *game, button_t *b)
{
    if (mouse_on_butt(b->aspect->pos, b->aspect->size, game->rpg) == 1
    && b->aspect->hide == false)
        b->aspect->rect.top = 35;
    if (mouse_on_butt(b->aspect->pos, b->aspect->size, game->rpg) == 0
    && b->aspect->hide == false)
        b->aspect->rect.top = 0;
    if (butt_clicked(b->aspect->pos, b->aspect->size, game->rpg) == 1) {
        game->nb_scene = 0;
    }
}
