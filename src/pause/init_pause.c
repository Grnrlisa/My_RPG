/*
** EPITECH PROJECT, 2022
** init_pause.c
** File description:
** rpg
*/

#include "my_rpg.h"

static void init_pause_font(scene_t *scenes)
{
    scenes->pic[2] = malloc(sizeof(gameobj_t));
    scenes->pic[2]->pos = (sfVector2f){0, 0};
    scenes->pic[2]->rect = (sfIntRect){0, 0, 1920, 1080};
    scenes->pic[2]->scale = (sfVector2f){1, 1};
    scenes->pic[2]->spr = sfSprite_create();
    scenes->pic[2]->txt = sfTexture_createFromFile
    ("assets/menu/pause/pause_menu.png", NULL);
    scenes->pic[2]->hide = false;
}

static void init_sec_back(scene_t *scenes)
{
    scenes->pic[1] = malloc(sizeof(gameobj_t));
    scenes->pic[1]->pos = (sfVector2f){1920, 0};
    scenes->pic[1]->rect = (sfIntRect){0, 0, 1920, 1080};
    scenes->pic[1]->scale = (sfVector2f){1, 1};
    scenes->pic[1]->spr = sfSprite_create();
    scenes->pic[1]->txt = sfTexture_createFromFile
    ("assets/menu/background_menu.png", NULL);
    scenes->pic[1]->hide = false;
    init_pause_font(scenes);
}

static void init_background(scene_t *scenes)
{
    scenes->pic[0] = malloc(sizeof(gameobj_t));
    scenes->pic[0]->pos = (sfVector2f){0, 0};
    scenes->pic[0]->rect = (sfIntRect){0, 0, 1920, 1080};
    scenes->pic[0]->scale = (sfVector2f){1, 1};
    scenes->pic[0]->spr = sfSprite_create();
    scenes->pic[0]->txt = sfTexture_createFromFile
    ("assets/menu/background_menu.png", NULL);
    scenes->pic[0]->hide = false;
    init_sec_back(scenes);
}

static void init_pause_resum(game_t *game)
{
    game->scenes[5]->buttons[0] = malloc(sizeof(button_t));
    game->scenes[5]->buttons[0]->aspect = malloc(sizeof(gameobj_t));
    game->scenes[5]->buttons[0]->aspect->pos = (sfVector2f){662, 380};
    game->scenes[5]->buttons[0]->aspect->rect = (sfIntRect){0, 0, 607, 63};
    game->scenes[5]->buttons[0]->aspect->scale = (sfVector2f){1, 1};
    game->scenes[5]->buttons[0]->aspect->spr = sfSprite_create();
    game->scenes[5]->buttons[0]->aspect->size = (sfVector2f){607, 63};
    game->scenes[5]->buttons[0]->aspect->txt = sfTexture_createFromFile
    ("assets/menu/pause/goback_pause.png", NULL);
    game->scenes[5]->buttons[0]->aspect->hide = false;
}

void init_pause(game_t *game)
{
    game->scenes[5]->pic = malloc(sizeof(gameobj_t *) * 3);
    game->scenes[5]->buttons = malloc(sizeof(button_t *) * 4);
    init_background(game->scenes[5]);
    init_pause_resum(game);
    init_pause_gomenu(game);
    init_pause_htp(game);
    game->scenes[5]->nb_pict = 3;
    game->scenes[5]->nb_butt = 4;
    game->scenes[5]->nb_text = 0;
    game->timer[3].clock = sfClock_create();
}
