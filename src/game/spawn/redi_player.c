/*
** EPITECH PROJECT, 2021
** B-MUL-200-REN-2-1-myrpg-lisa.garnier
** File description:
** redi_player.c
*/

#include "my_rpg.h"

void redi_player(game_t *game)
{
    if (game->scenes[1]->pic[3]->hide == false)
        init_player(game, "assets/character/ant_sprsht.png", "Antonin");
    if (game->scenes[1]->pic[5]->hide == false)
        init_player(game, "assets/character/charl_sprsht.png", "Charles");
    if (game->scenes[1]->pic[4]->hide == false)
        init_player(game, "assets/character/leo_sprsht.png", "Leo");
    if (game->scenes[1]->pic[2]->hide == false)
        init_player(game, "assets/character/lisa_sprsht.png", "Lisa");
}