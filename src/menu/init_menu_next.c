/*
** EPITECH PROJECT, 2022
** init_menu_next.c
** File description:
** RPG
*/

#include "../../include/my_rpg.h"

void init_sett_menu(game_t *game)
{
    game->scenes[6]->pic[1] = malloc(sizeof(gameobj_t));
    game->scenes[6]->pic[1]->pos = (sfVector2f){325, 170};
    game->scenes[6]->pic[1]->rect = (sfIntRect){0, 0, 1297, 779};
    game->scenes[6]->pic[1]->scale = (sfVector2f){1, 1};
    game->scenes[6]->pic[1]->spr = sfSprite_create();
    game->scenes[6]->pic[1]->txt = sfTexture_createFromFile
    ("assets/menu/settings/setting_sheet.png", NULL);
    game->scenes[6]->pic[1]->hide = false;
    init_sett_butts(game);
}

void init_menu_background(game_t *game)
{
    game->scenes[0]->pic[0] = malloc(sizeof(gameobj_t));
    game->scenes[0]->pic[0]->pos = (sfVector2f){0, 0};
    game->scenes[0]->pic[0]->rect = (sfIntRect){0, 0, 1920, 1080};
    game->scenes[0]->pic[0]->scale = (sfVector2f){1, 1};
    game->scenes[0]->pic[0]->spr = sfSprite_create();
    game->scenes[0]->pic[0]->txt = sfTexture_createFromFile
    ("assets/menu/background_menu.png", NULL);
    game->scenes[0]->pic[0]->hide = false;
}

void init_menu_quitbutton(game_t *game)
{
    game->scenes[0]->buttons[2] = malloc(sizeof(button_t));
    game->scenes[0]->buttons[2]->aspect = malloc(sizeof(gameobj_t));
    game->scenes[0]->buttons[2]->aspect->pos = (sfVector2f){1350, 800};
    game->scenes[0]->buttons[2]->aspect->rect = (sfIntRect){0, 0, 570, 180};
    game->scenes[0]->buttons[2]->aspect->scale = (sfVector2f){0.75, 0.75};
    game->scenes[0]->buttons[2]->aspect->spr = sfSprite_create();
    game->scenes[0]->buttons[2]->aspect->size = (sfVector2f){410, 135};
    game->scenes[0]->buttons[2]->aspect->txt = sfTexture_createFromFile
    ("assets/menu/quit_butt.png", NULL);
    game->scenes[0]->buttons[2]->aspect->hide = false;
}

void init_menu_settbutton(game_t *game)
{
    game->scenes[0]->buttons[1] = malloc(sizeof(button_t));
    game->scenes[0]->buttons[1]->aspect = malloc(sizeof(gameobj_t));
    game->scenes[0]->buttons[1]->aspect->pos = (sfVector2f){750, 800};
    game->scenes[0]->buttons[1]->aspect->rect = (sfIntRect){0, 0, 570, 180};
    game->scenes[0]->buttons[1]->aspect->scale = (sfVector2f){0.75, 0.75};
    game->scenes[0]->buttons[1]->aspect->spr = sfSprite_create();
    game->scenes[0]->buttons[1]->aspect->size = (sfVector2f){410, 135};
    game->scenes[0]->buttons[1]->aspect->txt = sfTexture_createFromFile
    ("assets/menu/settings_butt.png", NULL);
    game->scenes[0]->buttons[1]->aspect->hide = false;
}
