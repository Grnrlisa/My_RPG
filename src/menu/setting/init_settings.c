/*
** EPITECH PROJECT, 2022
** init_settings.c
** File description:
** rpg
*/

#include "my_rpg.h"

static void volbutt(game_t *game)
{
    game->scenes[6]->buttons[5] = malloc(sizeof(button_t));
    game->scenes[6]->buttons[5]->aspect = malloc(sizeof(gameobj_t));
    game->scenes[6]->buttons[5]->aspect->pos = (sfVector2f){1318, 461};
    game->scenes[6]->buttons[5]->aspect->rect = (sfIntRect){0, 0, 47, 78};
    game->scenes[6]->buttons[5]->aspect->scale = (sfVector2f){1, 1};
    game->scenes[6]->buttons[5]->aspect->spr = sfSprite_create();
    game->scenes[6]->buttons[5]->aspect->size = (sfVector2f){47, 78};
    game->scenes[6]->buttons[5]->aspect->txt = sfTexture_createFromFile
    ("assets/menu/settings/vol_curs.png", NULL);
    game->scenes[6]->buttons[5]->aspect->hide = false;
}

static void init_sett_volbar(game_t *game)
{
    game->scenes[6]->pic[3] = malloc(sizeof(gameobj_t));
    game->scenes[6]->pic[3]->pos = (sfVector2f){550, 450};
    game->scenes[6]->pic[3]->rect = (sfIntRect){0, 0, 790, 22};
    game->scenes[6]->pic[3]->scale = (sfVector2f){1, 1};
    game->scenes[6]->pic[3]->spr = sfSprite_create();
    game->scenes[6]->pic[3]->txt = sfTexture_createFromFile
    ("assets/menu/settings/vol_bar.png", NULL);
    game->scenes[6]->pic[3]->hide = false;
    volbutt(game);
}

static void init_sett_volbckg(game_t *game)
{
    game->scenes[6]->pic[2] = malloc(sizeof(gameobj_t));
    game->scenes[6]->pic[2]->pos = (sfVector2f){550, 450};
    game->scenes[6]->pic[2]->rect = (sfIntRect){0, 0, 790, 22};
    game->scenes[6]->pic[2]->scale = (sfVector2f){1, 1};
    game->scenes[6]->pic[2]->spr = sfSprite_create();
    game->scenes[6]->pic[2]->txt = sfTexture_createFromFile
    ("assets/menu/settings/vol_bckg.png", NULL);
    game->scenes[6]->pic[2]->hide = false;
    init_sett_volbar(game);
}

void init_sett_background(game_t *game)
{
    game->scenes[6]->pic[0] = malloc(sizeof(gameobj_t));
    game->scenes[6]->pic[0]->pos = (sfVector2f){0, 0};
    game->scenes[6]->pic[0]->rect = (sfIntRect){0, 0, 1920, 1080};
    game->scenes[6]->pic[0]->scale = (sfVector2f){1, 1};
    game->scenes[6]->pic[0]->spr = sfSprite_create();
    game->scenes[6]->pic[0]->txt = sfTexture_createFromFile
    ("assets/menu/background_menu.png", NULL);
    game->scenes[6]->pic[0]->hide = false;
    init_sett_volbckg(game);
}
