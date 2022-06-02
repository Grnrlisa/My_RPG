/*
** EPITECH PROJECT, 2021
** my_defender
** File description:
** my_defender.c
*/

#include "my_rpg.h"

void init_intro_1_bckg(game_t *game)
{
    game->scenes[2]->pic[0] = malloc(sizeof(gameobj_t));
    game->scenes[2]->pic[0]->pos = (sfVector2f){0, 0};
    game->scenes[2]->pic[0]->rect = (sfIntRect){0, 0, 1920, 1080};
    game->scenes[2]->pic[0]->scale = (sfVector2f){1, 1};
    game->scenes[2]->pic[0]->spr = sfSprite_create();
    game->scenes[2]->pic[0]->txt = sfTexture_createFromFile
    ("assets/intro/scene1/bckgintro.png", NULL);
    game->scenes[2]->pic[0]->hide = false;
    game->scenes[2]->pic[1] = malloc(sizeof(gameobj_t));
    game->scenes[2]->pic[1]->pos = (sfVector2f){0, 500};
    game->scenes[2]->pic[1]->rect = (sfIntRect){0, 0, 1920, 1080};
    game->scenes[2]->pic[1]->scale = (sfVector2f){1, 1};
    game->scenes[2]->pic[1]->spr = sfSprite_create();
    game->scenes[2]->pic[1]->txt = sfTexture_createFromFile
    ("assets/intro/scene1/mountains.png", NULL);
    game->scenes[2]->pic[1]->hide = false;
}

void init_intro_1_bckg_annex(game_t *game)
{
    game->scenes[2]->pic[2] = malloc(sizeof(gameobj_t));
    game->scenes[2]->pic[2]->pos = (sfVector2f){0, 700};
    game->scenes[2]->pic[2]->rect = (sfIntRect){0, 0, 1920, 1080};
    game->scenes[2]->pic[2]->scale = (sfVector2f){1, 1};
    game->scenes[2]->pic[2]->spr = sfSprite_create();
    game->scenes[2]->pic[2]->txt = sfTexture_createFromFile
    ("assets/intro/scene1/graveyard.png", NULL);
    game->scenes[2]->pic[2]->hide = false;
    game->scenes[2]->pic[3] = malloc(sizeof(gameobj_t));
    game->scenes[2]->pic[3]->pos = (sfVector2f){0, 00};
    game->scenes[2]->pic[3]->rect = (sfIntRect){0, 0, 300, 75};
    game->scenes[2]->pic[3]->scale = (sfVector2f){1, 1};
    game->scenes[2]->pic[3]->spr = sfSprite_create();
    game->scenes[2]->pic[3]->txt = sfTexture_createFromFile
    ("assets/intro/scene1/info_intro.png", NULL);
    game->scenes[2]->pic[3]->hide = false;
}

void init_intro_1_texts(game_t *game)
{
    game->scenes[2]->pic[4] = malloc(sizeof(gameobj_t));
    game->scenes[2]->pic[4]->pos = (sfVector2f){50, 900};
    game->scenes[2]->pic[4]->rect = (sfIntRect){0, -90, 1780, 100};
    game->scenes[2]->pic[4]->scale = (sfVector2f){1, 1};
    game->scenes[2]->pic[4]->spr = sfSprite_create();
    game->scenes[2]->pic[4]->txt = sfTexture_createFromFile
    ("assets/intro/scene1/textcomp.png", NULL);
    game->scenes[2]->pic[4]->hide = true;
}

void init_introduction_scenes(game_t *game)
{
    game->timer[0].clock = sfClock_create();
    game->timer[1].clock = sfClock_create();
    game->scenes[2]->pic = malloc(sizeof(gameobj_t *) * 5);
    game->scenes[3]->pic = malloc(sizeof(gameobj_t *) * 5);
    init_intro_1_bckg(game);
    init_intro_1_bckg_annex(game);
    init_intro_1_texts(game);
    init_intro_2_bckg(game);
    init_intro_2_bckg_annex(game);
    init_intro_2_texts(game);
    game->scenes[2]->nb_pict = 5;
    game->scenes[2]->nb_butt = 0;
    game->scenes[2]->nb_text = 0;
    game->scenes[3]->nb_pict = 5;
    game->scenes[3]->nb_butt = 0;
    game->scenes[3]->nb_text = 0;
}
