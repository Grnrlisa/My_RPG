/*
** EPITECH PROJECT, 2021
** my_defender
** File description:
** my_defender.c
*/

#include "my_rpg.h"

void intro_sprites_moove_rect(game_t *game)
{
    if (game->scenes[3]->pic[0]->rect.left <= 9600)
        game->scenes[3]->pic[0]->rect.left += 1920;
    if (game->scenes[3]->pic[0]->rect.left >= 9600)
        game->scenes[3]->pic[0]->rect.left = 0;
    if (game->scenes[3]->pic[1]->rect.left <= 2448)
        game->scenes[3]->pic[1]->rect.left += 222;
    if (game->scenes[3]->pic[1]->rect.left >= 2448)
        game->scenes[3]->pic[1]->rect.left = 0;
    if (game->scenes[3]->pic[2]->rect.left <= 2240)
        game->scenes[3]->pic[2]->rect.left += 250;
    if (game->scenes[3]->pic[2]->rect.left >= 2240)
        game->scenes[3]->pic[2]->rect.left = 0;
    if (game->scenes[3]->pic[3]->rect.left <= 1940)
        game->scenes[3]->pic[3]->rect.left += 1930;
    if (game->scenes[3]->pic[3]->rect.left >= 1940)
        game->scenes[3]->pic[3]->rect.left = 0;
}

void bkg_intro_animation(game_t *game)
{
    clock_texts(game);
    if (game->timer[0].sec > 0.1) {
        intro_sprites_moove_rect(game);
        sfSprite_setTextureRect(game->scenes[3]->pic[0]->spr,
        game->scenes[3]->pic[0]->rect);
        sfSprite_setTextureRect(game->scenes[3]->pic[1]->spr,
        game->scenes[3]->pic[1]->rect);
        sfSprite_setTextureRect(game->scenes[3]->pic[2]->spr,
        game->scenes[3]->pic[2]->rect);
        sfSprite_setTextureRect(game->scenes[3]->pic[3]->spr,
        game->scenes[3]->pic[3]->rect);
        sfClock_restart(game->timer[0].clock);
    }
}

void init_intro_2_bckg(game_t *game)
{
    game->scenes[3]->pic[0] = malloc(sizeof(gameobj_t));
    game->scenes[3]->pic[0]->pos = (sfVector2f){0, 0};
    game->scenes[3]->pic[0]->rect = (sfIntRect){0, 0, 1920, 1080};
    game->scenes[3]->pic[0]->scale = (sfVector2f){1, 1};
    game->scenes[3]->pic[0]->spr = sfSprite_create();
    game->scenes[3]->pic[0]->txt = sfTexture_createFromFile
    ("assets/intro/scene2/animated_bckg.png", NULL);
    game->scenes[3]->pic[0]->hide = false;
    game->scenes[3]->pic[1] = malloc(sizeof(gameobj_t));
    game->scenes[3]->pic[1]->pos = (sfVector2f){1120, 530};
    game->scenes[3]->pic[1]->rect = (sfIntRect){0, 0, 213, 325};
    game->scenes[3]->pic[1]->scale = (sfVector2f){1, 1};
    game->scenes[3]->pic[1]->spr = sfSprite_create();
    game->scenes[3]->pic[1]->txt = sfTexture_createFromFile
    ("assets/intro/scene2/run.png", NULL);
    game->scenes[3]->pic[1]->hide = false;
}

void init_intro_2_texts(game_t *game)
{
    game->scenes[3]->pic[4] = malloc(sizeof(gameobj_t));
    game->scenes[3]->pic[4]->pos = (sfVector2f){50, 50};
    game->scenes[3]->pic[4]->rect = (sfIntRect){0, -90, 1780, 100};
    game->scenes[3]->pic[4]->scale = (sfVector2f){1, 1};
    game->scenes[3]->pic[4]->spr = sfSprite_create();
    game->scenes[3]->pic[4]->txt = sfTexture_createFromFile
    ("assets/intro/scene2/text4.png", NULL);
    game->scenes[3]->pic[4]->hide = true;
}

void init_intro_2_bckg_annex(game_t *game)
{
    game->scenes[3]->pic[2] = malloc(sizeof(gameobj_t));
    game->scenes[3]->pic[2]->pos = (sfVector2f){1300, 300};
    game->scenes[3]->pic[2]->rect = (sfIntRect){0, 0, 240, 500};
    game->scenes[3]->pic[2]->scale = (sfVector2f){1, 1};
    game->scenes[3]->pic[2]->spr = sfSprite_create();
    game->scenes[3]->pic[2]->txt = sfTexture_createFromFile
    ("assets/intro/scene2/pyramid.png", NULL);
    game->scenes[3]->pic[2]->hide = false;
    game->scenes[3]->pic[3] = malloc(sizeof(gameobj_t));
    game->scenes[3]->pic[3]->pos = (sfVector2f){0, 0};
    game->scenes[3]->pic[3]->rect = (sfIntRect){0, 0, 1920, 1080};
    game->scenes[3]->pic[3]->scale = (sfVector2f){1, 1};
    game->scenes[3]->pic[3]->spr = sfSprite_create();
    game->scenes[3]->pic[3]->txt = sfTexture_createFromFile
    ("assets/intro/scene2/foreground.png", NULL);
    game->scenes[3]->pic[3]->hide = false;
}
