/*
** EPITECH PROJECT, 2022
** event_room_l.c
** File description:
** rpg
*/

#include "my_rpg.h"

static void move_player_l(game_t *game)
{
    clock_walk(game);
    if (sfKeyboard_isKeyPressed(sfKeyZ) && game->player->play->pos.y >= 0) {
        show_move(game, 0, -15);
    }
    if (sfKeyboard_isKeyPressed(sfKeyS) && game->player->play->pos.y <= 810) {
        show_move(game, 0, 15);
    }
    if (sfKeyboard_isKeyPressed(sfKeyQ) && game->player->play->pos.x >= 200) {
        show_move(game, -15, 0);
    }
    if (sfKeyboard_isKeyPressed(sfKeyD) && game->player->play->pos.x <= 1600) {
        show_move(game, 15, 0);
    }
}

static void go_l_room(game_t *game)
{
    if ((game->player->play->pos.y > 400 && game->player->play->pos.y < 500)
    && (game->player->play->pos.x > 1580)) {
        game->player->play->pos.x = 130;
        game->player->play->pos.y -= 40;
        game->nb_scene = 7;
    }
}

void event_room_l(game_t *game)
{
    move_player_l(game);
    go_l_room(game);
}
