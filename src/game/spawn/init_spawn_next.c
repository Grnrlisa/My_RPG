/*
** EPITECH PROJECT, 2022
** init_spawn_next.c
** File description:
** rpg
*/

#include "my_rpg.h"

void init_shop_png(scene_t *scenes)
{
    scenes->buttons[2] = malloc(sizeof(button_t));
    scenes->buttons[2]->aspect = malloc(sizeof(gameobj_t));
    scenes->buttons[2]->aspect->pos = (sfVector2f){660, 500};
    scenes->buttons[2]->aspect->rect = (sfIntRect){0, 0, 22, 23};
    scenes->buttons[2]->aspect->scale = (sfVector2f){8, 8};
    scenes->buttons[2]->aspect->spr = sfSprite_create();
    scenes->buttons[2]->aspect->size = (sfVector2f){22, 23};
    scenes->buttons[2]->aspect->txt = sfTexture_createFromFile
    ("assets/env/robin.png", NULL);
    scenes->buttons[2]->aspect->hide = true;
}

void init_pnj_icon(scene_t *scenes)
{
    scenes->pic[2] = malloc(sizeof(gameobj_t));
    scenes->pic[2]->pos = (sfVector2f){180, 835};
    scenes->pic[2]->rect = (sfIntRect){0, 0, 600, 600};
    scenes->pic[2]->scale = (sfVector2f){0.35, 0.35};
    scenes->pic[2]->spr = sfSprite_create();
    scenes->pic[2]->txt = sfTexture_createFromFile
    ("assets/env/pnj_ic.png", NULL);
    scenes->pic[2]->hide = true;
}

void init_pnj_dialogs(scene_t *scenes)
{
    scenes->pic[3] = malloc(sizeof(gameobj_t));
    scenes->pic[3]->pos = (sfVector2f){425, 860};
    scenes->pic[3]->rect = (sfIntRect){0, 0, 663, 30};
    scenes->pic[3]->scale = (sfVector2f){1, 1};
    scenes->pic[3]->spr = sfSprite_create();
    scenes->pic[3]->txt = sfTexture_createFromFile
    ("assets/env/pnj_texts/pnj_name.png", NULL);
    scenes->pic[3]->hide = true;
    scenes->pic[4] = malloc(sizeof(gameobj_t));
    scenes->pic[4]->pos = (sfVector2f){150, 900};
    scenes->pic[4]->rect = (sfIntRect){0, 0, 1609, 120};
    scenes->pic[4]->scale = (sfVector2f){1, 1};
    scenes->pic[4]->spr = sfSprite_create();
    scenes->pic[4]->txt = sfTexture_createFromFile
    ("assets/env/pnj_texts/pnj_texts.png", NULL);
    scenes->pic[4]->hide = true;
}