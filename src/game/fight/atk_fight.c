/*
** EPITECH PROJECT, 2021
** B-MUL-200-REN-2-1-myrpg-lisa.garnier
** File description:
** action_fight.c
*/

#include "my_rpg.h"

int play_atk(game_t *game)
{
    game->enm.life -= game->play.strenght - rand() % game->enm.defense;
    if (game->enm.life < 0)
        return 1;
    return 0;
}

int enm_atk(game_t *game)
{
    game->play.life -= game->enm.strenght - rand() % game->play.defense;
    if (game->enm.life < 0)
        return 1;
    return 0;
}

void action_atk(game_t *game)
{
    if (game->play.speed > game->enm.speed) {
        if (play_atk(game) == 1)
            return;
        if (enm_atk(game) == 1) 
            return;
    }
    else if (game->play.speed < game->enm.speed) {
        if (enm_atk(game) == 1)
            return;
        if (play_atk(game) == 1)
            return;
    }
}