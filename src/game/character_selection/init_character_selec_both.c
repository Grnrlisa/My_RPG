/*
** EPITECH PROJECT, 2021
** init_character_select_both.c
** File description:
** initcharachter
*/

#include "my_rpg.h"

void init_character_selection_buttons_annex_suit(game_t *game)
{
    game->scenes[1]->buttons[2]->aspect->hide = false;
    game->scenes[1]->buttons[3] = malloc(sizeof(button_t));
    game->scenes[1]->buttons[3]->aspect = malloc(sizeof(gameobj_t));
    game->scenes[1]->buttons[3]->aspect->pos = (sfVector2f){1200, 150};
    game->scenes[1]->buttons[3]->aspect->rect = (sfIntRect){0, 0, 110, 120};
    game->scenes[1]->buttons[3]->aspect->scale = (sfVector2f){1, 1};
    game->scenes[1]->buttons[3]->aspect->spr = sfSprite_create();
    game->scenes[1]->buttons[3]->aspect->size = (sfVector2f){110, 125};
    game->scenes[1]->buttons[3]->aspect->txt = sfTexture_createFromFile
    ("assets/character/charl_selec.png", NULL);
    game->scenes[1]->buttons[3]->aspect->hide = false;
}
