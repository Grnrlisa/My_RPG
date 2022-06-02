/*
** EPITECH PROJECT, 2022
** init_0.c
** File description:
** charlesmil
*/

#include "my_rpg.h"

void init_menu_castle(game_t *game)
{
    game->scenes[0]->pic[1] = malloc(sizeof(gameobj_t));
    game->scenes[0]->pic[1]->pos = (sfVector2f){0, 0};
    game->scenes[0]->pic[1]->rect = (sfIntRect){0, 0, 1920, 1080};
    game->scenes[0]->pic[1]->scale = (sfVector2f){1, 1};
    game->scenes[0]->pic[1]->spr = sfSprite_create();
    game->scenes[0]->pic[1]->txt = sfTexture_createFromFile
    ("assets/menu/castle_menu.png", NULL);
    game->scenes[0]->pic[1]->hide = false;
}

void init_menu_name(game_t *game)
{
    game->scenes[0]->pic[2] = malloc(sizeof(gameobj_t));
    game->scenes[0]->pic[2]->pos = (sfVector2f){1000, 0};
    game->scenes[0]->pic[2]->rect = (sfIntRect){0, 0, 1920, 1080};
    game->scenes[0]->pic[2]->scale = (sfVector2f){1, 1};
    game->scenes[0]->pic[2]->spr = sfSprite_create();
    game->scenes[0]->pic[2]->txt = sfTexture_createFromFile
    ("assets/menu/game_name.png", NULL);
    game->scenes[0]->pic[2]->hide = false;
}

void init_menu_startbutton(game_t *game)
{
    game->scenes[0]->buttons[0] = malloc(sizeof(button_t));
    game->scenes[0]->buttons[0]->aspect = malloc(sizeof(gameobj_t));
    game->scenes[0]->buttons[0]->aspect->pos = (sfVector2f){150, 800};
    game->scenes[0]->buttons[0]->aspect->rect = (sfIntRect){0, 0, 570, 180};
    game->scenes[0]->buttons[0]->aspect->scale = (sfVector2f){0.75, 0.75};
    game->scenes[0]->buttons[0]->aspect->spr = sfSprite_create();
    game->scenes[0]->buttons[0]->aspect->size = (sfVector2f){410, 135};
    game->scenes[0]->buttons[0]->aspect->txt = sfTexture_createFromFile
    ("assets/menu/play_butt.png", NULL);
    game->scenes[0]->buttons[0]->aspect->hide = false;
}

void init_menu(game_t *game)
{
    game->scenes[0]->pic = malloc(sizeof(gameobj_t *) * 3);
    game->scenes[0]->buttons = malloc(sizeof(button_t *) * 3);
    game->scenes[6]->pic = malloc(sizeof(gameobj_t *) * 4);
    game->scenes[6]->buttons = malloc(sizeof(button_t *) * 6);
    init_menu_background(game);
    init_menu_castle(game);
    init_menu_name(game);
    init_menu_startbutton(game);
    init_menu_settbutton(game);
    init_menu_quitbutton(game);
    init_sett_menu(game);
    game->scenes[0]->nb_pict = 3;
    game->scenes[0]->nb_butt = 3;
    game->scenes[0]->nb_text = 0;
    game->scenes[6]->nb_pict = 4;
    game->scenes[6]->nb_butt = 6;
    game->scenes[6]->nb_text = 0;
    game->player->play = NULL;
}

void init_all(game_t *game, s_mus_t *music)
{
    game->is_game = 0;
    init_menu(game);
    init_sound(game, music);
    init_character_selection(game);
    init_introduction_scenes(game);
    init_spawn(game);
    init_room_mid(game);
    init_room_l(game);
    init_room_r(game);
    init_how_to_play(game);
    init_inventory(game);
    init_room_boss(game);
    init_slot(game);
    init_pause(game);
    init_end_scenes(game);
}
