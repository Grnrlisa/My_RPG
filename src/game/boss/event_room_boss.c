/*
** EPITECH PROJECT, 2022
** event_room_boss.c
** File description:
** rpg
*/

#include "my_rpg.h"

static void move_player_boss(game_t *game)
{
    clock_walk(game);
    if (sfKeyboard_isKeyPressed(sfKeyZ) && game->player->play->pos.y >= 0) {
        show_move(game, 0, -15);
    }
    if (sfKeyboard_isKeyPressed(sfKeyS) && game->player->play->pos.y <= 610) {
        show_move(game, 0, 15);
    }
    if (sfKeyboard_isKeyPressed(sfKeyQ) && game->player->play->pos.x >= 100) {
        show_move(game, -15, 0);
    }
    if (sfKeyboard_isKeyPressed(sfKeyD) && game->player->play->pos.x <= 1620) {
        show_move(game, 15, 0);
    }
}

static void go_boss_room(game_t *game)
{
    if ((game->player->play->pos.x > 750 && game->player->play->pos.x < 950)
    && (game->player->play->pos.y > 600)) {
        game->player->play->pos.y = 200;
        game->nb_scene = 7;
    }
}

void event_room_boss(game_t *game)
{
    move_player_boss(game);
    go_boss_room(game);
}
