/*
** EPITECH PROJECT, 2022
** event_room_r.c
** File description:
** rpg
*/

#include "my_rpg.h"

static void move_player_r(game_t *game)
{
    clock_walk(game);
    if (sfKeyboard_isKeyPressed(sfKeyZ) && game->player->play->pos.y >= 0) {
        show_move(game, 0, -15);
    }
    if (sfKeyboard_isKeyPressed(sfKeyS) && game->player->play->pos.y <= 810) {
        show_move(game, 0, 15);
    }
    if (sfKeyboard_isKeyPressed(sfKeyQ) && game->player->play->pos.x >= 80) {
        show_move(game, -15, 0);
    }
    if (sfKeyboard_isKeyPressed(sfKeyD) && game->player->play->pos.x <= 1490) {
        show_move(game, 15, 0);
    }
}

static void go_r_room(game_t *game)
{
    if ((game->player->play->pos.y > 400 && game->player->play->pos.y < 500)
    && (game->player->play->pos.x < 120)) {
        game->player->play->pos.x = 1550;
        game->player->play->pos.y -= 40;
        game->nb_scene = 7;
    }
}

void event_room_r(game_t *game)
{
    move_player_r(game);
    go_r_room(game);
}
