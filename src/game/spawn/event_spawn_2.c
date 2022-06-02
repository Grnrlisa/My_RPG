/*
** EPITECH PROJECT, 2022
** event_spawn.c
** File description:
** rpg
*/

#include "my_rpg.h"

void clock_wake_up(game_t *game)
{
    game->timer[7].time = sfClock_getElapsedTime(game->timer[7].clock);
    game->timer[7].sec = game->timer[7].time.microseconds / 1000000.0f;
}

void player_wake_up(game_t *game)
{
    clock_wake_up(game);
    if (game->timer[7].sec < 2) {
        game->player->play->rect.top = 2310;
        game->player->play->rect.left = 550;
    } else
        move_player(game);
}

void scroll_text_annex(game_t *game)
{
    if (game->rpg->text_check > 12 && game->rpg->text_check < 14)
        game->scenes[4]->pic[4]->rect.top = 1175;
    if (game->rpg->text_check > 14 && game->rpg->text_check < 16)
        game->scenes[4]->pic[4]->rect.top = 1295;
    if (game->rpg->text_check > 16 && game->rpg->text_check < 18)
        game->scenes[4]->pic[4]->rect.top = 1445;
    if (game->rpg->text_check > 18 && game->rpg->text_check < 20) {
        game->scenes[4]->pic[4]->rect.top = 1635;
        game->scenes[4]->pic[2]->hide = true;
        game->scenes[4]->pic[3]->hide = true;
        game->rpg->inv_check = 1;
    }
}