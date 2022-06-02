/*
** EPITECH PROJECT, 2021
** B-MUL-200-REN-2-1-myrpg-lisa.garnier
** File description:
** display_fight.c
*/

#include "my_rpg.h"

void disp_fight_player(game_t *game)
{
    sfSprite_setTextureRect(game->play.play->spr, game->play.play->rect);
    sfSprite_setTextureRect(game->enm.play->spr, game->enm.play->rect);
    sfRenderWindow_drawSprite(game->rpg->wdw, game->play.play->spr, NULL);
    sfRenderWindow_drawSprite(game->rpg->wdw, game->enm.play->spr, NULL);
}