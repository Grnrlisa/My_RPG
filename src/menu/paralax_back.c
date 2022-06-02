/*
** EPITECH PROJECT, 2021
** B-MUL-200-REN-2-1-myrpg-lisa.garnier
** File description:
** paralax.back.c
*/

#include "my_rpg.h"

void paralax_back_intro(game_t *game)
{
    if (game->scenes[2]->pic[1]->rect.left != 1920)
        game->scenes[2]->pic[1]->rect.left += 1;
    else
        game->scenes[2]->pic[1]->rect.left = 0;
    sfSprite_setTextureRect(game->scenes[2]->pic[1]->spr,
    game->scenes[2]->pic[1]->rect);
    if (game->scenes[2]->pic[2]->rect.left != 1920)
        game->scenes[2]->pic[2]->rect.left += 2;
    else
        game->scenes[2]->pic[2]->rect.left = 0;
    sfSprite_setTextureRect(game->scenes[2]->pic[2]->spr,
    game->scenes[2]->pic[2]->rect);
}

void paralax_back(game_t *game)
{
    if (game->scenes[0]->pic[0]->rect.left != 1920)
        game->scenes[0]->pic[0]->rect.left += 1;
    else
        game->scenes[0]->pic[0]->rect.left = 0;
    sfSprite_setTextureRect(game->scenes[0]->pic[0]->spr,
    game->scenes[0]->pic[0]->rect);
    paralax_back_intro(game);
    if (game->scenes[6]->pic[0]->rect.left != 1920)
        game->scenes[6]->pic[0]->rect.left += 1;
    else
        game->scenes[6]->pic[0]->rect.left = 0;
    sfSprite_setTextureRect(game->scenes[6]->pic[0]->spr,
    game->scenes[6]->pic[0]->rect);
    paralax_back_intro(game);
}
