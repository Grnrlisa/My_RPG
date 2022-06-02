/*
** EPITECH PROJECT, 2021
** my_defender
** File description:
** my_defender.c
*/

#include "my_rpg.h"

void init_end_scenes_3(game_t *game)
{
    game->scenes[13]->pic[4] = malloc(sizeof(gameobj_t));
    game->scenes[13]->pic[4]->pos = (sfVector2f){0, 0};
    game->scenes[13]->pic[4]->rect = (sfIntRect){-1920, 0, 1920, 1080};
    game->scenes[13]->pic[4]->scale = (sfVector2f){1, 1};
    game->scenes[13]->pic[4]->spr = sfSprite_create();
    if (game->victory == false) {
        game->scenes[13]->pic[4]->txt = sfTexture_createFromFile
        ("assets/game_over/text_loose.png", NULL);
    } else {
        game->scenes[13]->pic[4]->txt = sfTexture_createFromFile
        ("assets/game_over/text_win.png", NULL);
    }
    game->scenes[13]->pic[4]->hide = false;
}

void init_end_scenes_2(game_t *game)
{
    game->scenes[13]->pic[2] = malloc(sizeof(gameobj_t));
    game->scenes[13]->pic[2]->pos = (sfVector2f){0, 0};
    game->scenes[13]->pic[2]->rect = (sfIntRect){0, 0, 1920, 1080};
    game->scenes[13]->pic[2]->scale = (sfVector2f){1, 1};
    game->scenes[13]->pic[2]->spr = sfSprite_create();
    game->scenes[13]->pic[2]->txt = sfTexture_createFromFile
    ("assets/game_over/gem_animation.png", NULL);
    game->scenes[13]->pic[2]->hide = false;
    game->scenes[13]->pic[3] = malloc(sizeof(gameobj_t));
    game->scenes[13]->pic[3]->pos = (sfVector2f){0, 0};
    game->scenes[13]->pic[3]->rect = (sfIntRect){0, 0, 1920, 1080};
    game->scenes[13]->pic[3]->scale = (sfVector2f){1, 1};
    game->scenes[13]->pic[3]->spr = sfSprite_create();
    game->scenes[13]->pic[3]->txt = sfTexture_createFromFile
    ("assets/game_over/foreground.png", NULL);
    game->scenes[13]->pic[3]->hide = false;
    game->scenes[13]->pic[1]->hide = true;
}

void init_end_scenes_1(game_t *game)
{
    game->scenes[13]->pic[0] = malloc(sizeof(gameobj_t));
    game->scenes[13]->pic[0]->pos = (sfVector2f){0, 0};
    game->scenes[13]->pic[0]->rect = (sfIntRect){0, 0, 1920, 1080};
    game->scenes[13]->pic[0]->scale = (sfVector2f){1, 1};
    game->scenes[13]->pic[0]->spr = sfSprite_create();
    if (game->victory == false) {
        game->scenes[13]->pic[0]->txt = sfTexture_createFromFile
        ("assets/game_over/final_scene_lose.png", NULL);
    } else {
        game->scenes[13]->pic[0]->txt = sfTexture_createFromFile
        ("assets/game_over/final_scene_win.png", NULL);
    }
    game->scenes[13]->pic[0]->hide = false;
    game->scenes[13]->pic[1] = malloc(sizeof(gameobj_t));
    game->scenes[13]->pic[1]->pos = (sfVector2f){640, 80};
    game->scenes[13]->pic[1]->rect = (sfIntRect){0, 0, 585, 900};
    game->scenes[13]->pic[1]->scale = (sfVector2f){1, 1};
    game->scenes[13]->pic[1]->spr = sfSprite_create();
    game->scenes[13]->pic[1]->txt = sfTexture_createFromFile
    ("assets/game_over/expl_end.png", NULL);
}

void init_end_scenes(game_t *game)
{
    game->timer[4].clock = sfClock_create();
    game->timer[5].clock = sfClock_create();
    game->timer[6].clock = sfClock_create();
    game->scenes[13]->pic = malloc(sizeof(gameobj_t *) * 5);
    init_end_scenes_1(game);
    init_end_scenes_2(game);
    init_end_scenes_3(game);
    game->scenes[13]->nb_pict = 5;
}
