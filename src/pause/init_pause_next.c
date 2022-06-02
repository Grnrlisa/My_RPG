/*
** EPITECH PROJECT, 2022
** init_pause.c
** File description:
** rpg
*/

#include "my_rpg.h"

void init_pause_htp(game_t *game)
{
    game->scenes[5]->buttons[3] = malloc(sizeof(button_t));
    game->scenes[5]->buttons[3]->aspect = malloc(sizeof(gameobj_t));
    game->scenes[5]->buttons[3]->aspect->pos = (sfVector2f){740, 480};
    game->scenes[5]->buttons[3]->aspect->rect = (sfIntRect){0, 0, 436, 55};
    game->scenes[5]->buttons[3]->aspect->scale = (sfVector2f){1, 1};
    game->scenes[5]->buttons[3]->aspect->spr = sfSprite_create();
    game->scenes[5]->buttons[3]->aspect->size = (sfVector2f){436, 55};
    game->scenes[5]->buttons[3]->aspect->txt = sfTexture_createFromFile
    ("assets/menu/pause/htp_pause.png", NULL);
    game->scenes[5]->buttons[3]->aspect->hide = false;
}

void init_pause_quit(game_t *game)
{
    game->scenes[5]->buttons[2] = malloc(sizeof(button_t));
    game->scenes[5]->buttons[2]->aspect = malloc(sizeof(gameobj_t));
    game->scenes[5]->buttons[2]->aspect->pos = (sfVector2f){790, 680};
    game->scenes[5]->buttons[2]->aspect->rect = (sfIntRect){0, 0, 351, 65};
    game->scenes[5]->buttons[2]->aspect->scale = (sfVector2f){1, 1};
    game->scenes[5]->buttons[2]->aspect->spr = sfSprite_create();
    game->scenes[5]->buttons[2]->aspect->size = (sfVector2f){351, 65};
    game->scenes[5]->buttons[2]->aspect->txt = sfTexture_createFromFile
    ("assets/menu/pause/quit_pause.png", NULL);
    game->scenes[5]->buttons[2]->aspect->hide = false;
}

void init_pause_gomenu(game_t *game)
{
    game->scenes[5]->buttons[1] = malloc(sizeof(button_t));
    game->scenes[5]->buttons[1]->aspect = malloc(sizeof(gameobj_t));
    game->scenes[5]->buttons[1]->aspect->pos = (sfVector2f){800, 580};
    game->scenes[5]->buttons[1]->aspect->rect = (sfIntRect){0, 0, 335, 60};
    game->scenes[5]->buttons[1]->aspect->scale = (sfVector2f){1, 1};
    game->scenes[5]->buttons[1]->aspect->spr = sfSprite_create();
    game->scenes[5]->buttons[1]->aspect->size = (sfVector2f){335, 112};
    game->scenes[5]->buttons[1]->aspect->txt = sfTexture_createFromFile
    ("assets/menu/pause/settings_pause.png", NULL);
    game->scenes[5]->buttons[1]->aspect->hide = false;
    init_pause_quit(game);
}
