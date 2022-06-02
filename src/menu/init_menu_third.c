/*
** EPITECH PROJECT, 2022
** init_menu_third.c
** File description:
** rpg
*/

#include "../../include/my_rpg.h"

static void init_sett_backmenu(game_t *game)
{
    game->scenes[6]->buttons[4] = malloc(sizeof(button_t));
    game->scenes[6]->buttons[4]->aspect = malloc(sizeof(gameobj_t));
    game->scenes[6]->buttons[4]->aspect->pos = (sfVector2f){770, 820};
    game->scenes[6]->buttons[4]->aspect->rect = (sfIntRect){0, 0, 395, 37};
    game->scenes[6]->buttons[4]->aspect->scale = (sfVector2f){1, 1};
    game->scenes[6]->buttons[4]->aspect->spr = sfSprite_create();
    game->scenes[6]->buttons[4]->aspect->size = (sfVector2f){395, 37};
    game->scenes[6]->buttons[4]->aspect->txt = sfTexture_createFromFile
    ("assets/menu/settings/go_back.png", NULL);
    game->scenes[6]->buttons[4]->aspect->hide = false;
}

static void init_sett_voldown(game_t *game)
{
    game->scenes[6]->buttons[3] = malloc(sizeof(button_t));
    game->scenes[6]->buttons[3]->aspect = malloc(sizeof(gameobj_t));
    game->scenes[6]->buttons[3]->aspect->pos = (sfVector2f){780, 350};
    game->scenes[6]->buttons[3]->aspect->rect = (sfIntRect){0, 0, 62, 50};
    game->scenes[6]->buttons[3]->aspect->scale = (sfVector2f){1, 1};
    game->scenes[6]->buttons[3]->aspect->spr = sfSprite_create();
    game->scenes[6]->buttons[3]->aspect->size = (sfVector2f){62, 79};
    game->scenes[6]->buttons[3]->aspect->txt = sfTexture_createFromFile
    ("assets/menu/settings/less_butt.png", NULL);
    game->scenes[6]->buttons[3]->aspect->hide = false;
    init_sett_backmenu(game);
}

static void init_sett_volup(game_t *game)
{
    game->scenes[6]->buttons[2] = malloc(sizeof(button_t));
    game->scenes[6]->buttons[2]->aspect = malloc(sizeof(gameobj_t));
    game->scenes[6]->buttons[2]->aspect->pos = (sfVector2f){1100, 350};
    game->scenes[6]->buttons[2]->aspect->rect = (sfIntRect){0, 0, 52, 50};
    game->scenes[6]->buttons[2]->aspect->scale = (sfVector2f){1, 1};
    game->scenes[6]->buttons[2]->aspect->spr = sfSprite_create();
    game->scenes[6]->buttons[2]->aspect->size = (sfVector2f){52, 50};
    game->scenes[6]->buttons[2]->aspect->txt = sfTexture_createFromFile
    ("assets/menu/settings/plus_butt.png", NULL);
    game->scenes[6]->buttons[2]->aspect->hide = false;
}

void init_sett_disabled(game_t *game)
{
    game->scenes[6]->buttons[1] = malloc(sizeof(button_t));
    game->scenes[6]->buttons[1]->aspect = malloc(sizeof(gameobj_t));
    game->scenes[6]->buttons[1]->aspect->pos = (sfVector2f){1030, 650};
    game->scenes[6]->buttons[1]->aspect->rect = (sfIntRect){0, 0, 336, 130};
    game->scenes[6]->buttons[1]->aspect->scale = (sfVector2f){1, 1};
    game->scenes[6]->buttons[1]->aspect->spr = sfSprite_create();
    game->scenes[6]->buttons[1]->aspect->size = (sfVector2f){336, 135};
    game->scenes[6]->buttons[1]->aspect->txt = sfTexture_createFromFile
    ("assets/menu/settings/disable_but.png", NULL);
    game->scenes[6]->buttons[1]->aspect->hide = false;
    init_sett_volup(game);
    init_sett_voldown(game);
}

void init_sett_butts(game_t *game)
{
    game->scenes[6]->buttons[0] = malloc(sizeof(button_t));
    game->scenes[6]->buttons[0]->aspect = malloc(sizeof(gameobj_t));
    game->scenes[6]->buttons[0]->aspect->pos = (sfVector2f){550, 650};
    game->scenes[6]->buttons[0]->aspect->rect = (sfIntRect){0, 0, 336, 130};
    game->scenes[6]->buttons[0]->aspect->scale = (sfVector2f){1, 1};
    game->scenes[6]->buttons[0]->aspect->spr = sfSprite_create();
    game->scenes[6]->buttons[0]->aspect->size = (sfVector2f){336, 135};
    game->scenes[6]->buttons[0]->aspect->txt = sfTexture_createFromFile
    ("assets/menu/settings/enable_but.png", NULL);
    game->scenes[6]->buttons[0]->aspect->hide = false;
    init_sett_disabled(game);
    init_sett_background(game);
}
