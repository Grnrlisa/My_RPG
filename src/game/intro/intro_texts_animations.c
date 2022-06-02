/*
** EPITECH PROJECT, 2021
** my_defender
** File description:
** my_defender.c
*/

#include "my_rpg.h"

void texts_animation_2(game_t *game)
{
    clock_texts_2(game);
    if (game->timer[1].sec > 0.2) {
        if (game->scenes[3]->pic[4]->rect.top <= 170)
            game->scenes[3]->pic[4]->rect.top += 90;
        sfSprite_setTextureRect(game->scenes[3]->pic[4]->spr,
        game->scenes[3]->pic[4]->rect);
        sfClock_restart(game->timer[1].clock);
    }
}

void texts_animation(game_t *game)
{
     clock_texts(game);
     if (game->timer[0].sec > 0.3) {
         if (game->scenes[2]->pic[4]->rect.top <= 170)
             game->scenes[2]->pic[4]->rect.top += 90;
         sfSprite_setTextureRect(game->scenes[2]->pic[4]->spr,
         game->scenes[2]->pic[4]->rect);
         sfClock_restart(game->timer[0].clock);
     }
}
