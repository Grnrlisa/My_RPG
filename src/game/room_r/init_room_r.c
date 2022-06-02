/*
** EPITECH PROJECT, 2022
** init_room_r.c
** File description:
** rpg
*/

#include "my_rpg.h"

static void init_background(scene_t *scenes)
{
    scenes->pic[0] = malloc(sizeof(gameobj_t));
    scenes->pic[0]->pos = (sfVector2f){-460, -80};
    scenes->pic[0]->rect = (sfIntRect){0, 0, 1920, 1080};
    scenes->pic[0]->scale = (sfVector2f){1.45, 1.1};
    scenes->pic[0]->spr = sfSprite_create();
    scenes->pic[0]->txt = sfTexture_createFromFile
    ("assets/env/room_right.png", NULL);
    scenes->pic[0]->hide = false;
}

void init_room_r(game_t *game)
{
    game->scenes[9]->pic = malloc(sizeof(gameobj_t *) * 1);
    game->scenes[9]->buttons = malloc(sizeof(button_t *) * 0);
    init_background(game->scenes[9]);
    game->scenes[9]->nb_pict = 1;
    game->scenes[9]->nb_butt = 0;
    game->scenes[9]->nb_text = 0;
}
