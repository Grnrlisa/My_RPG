/*
** EPITECH PROJECT, 2022
** analyse_sett_menu.c
** File description:
** rpg
*/

#include "my_rpg.h"

void enable_butt(game_t *game, button_t *b)
{
    if (mouse_on_butt(b->aspect->pos, b->aspect->size, game->rpg) == 1
    && b->aspect->hide == false)
        b->aspect->rect.top = 130;
    if (mouse_on_butt(b->aspect->pos, b->aspect->size, game->rpg) == 0
    && b->aspect->hide == false)
        b->aspect->rect.top = 0;
    if (butt_clicked(b->aspect->pos, b->aspect->size, game->rpg) == 1) {
        sfRenderWindow_close(game->rpg->wdw);
        game->rpg->wdw = sfRenderWindow_create(game->rpg->mode, "my rpg",
        PARAM, NULL);
        sfRenderWindow_setFramerateLimit(game->rpg->wdw, 30);
    }
}

void disable_butt(game_t *game, button_t *b)
{
    if (mouse_on_butt(b->aspect->pos, b->aspect->size, game->rpg) == 1
    && b->aspect->hide == false)
        b->aspect->rect.top = 130;
    if (mouse_on_butt(b->aspect->pos, b->aspect->size, game->rpg) == 0
    && b->aspect->hide == false)
        b->aspect->rect.top = 0;
    if (butt_clicked(b->aspect->pos, b->aspect->size, game->rpg) == 1) {
        sfRenderWindow_close(game->rpg->wdw);
        game->rpg->wdw = sfRenderWindow_create(game->rpg->mode, "my rpg",
        PARAM_2, NULL);
        sfRenderWindow_setFramerateLimit(game->rpg->wdw, 30);
    }
}
