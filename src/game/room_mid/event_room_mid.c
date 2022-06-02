/*
** EPITECH PROJECT, 2022
** event_room_mid.c
** File description:
** rpg
*/

#include "my_rpg.h"

static void move_player_mid(game_t *game)
{
    clock_walk(game);
    if (sfKeyboard_isKeyPressed(sfKeyZ)
    && game->player->play->pos.y >= 100) {
        show_move(game, 0, -15);
    }
    if (sfKeyboard_isKeyPressed(sfKeyS)
    && game->player->play->pos.y <= 610) {
        show_move(game, 0, 15);
    }
    if (sfKeyboard_isKeyPressed(sfKeyQ)
    && game->player->play->pos.x >= 120) {
        show_move(game, -15, 0);
    }
    if (sfKeyboard_isKeyPressed(sfKeyD)
    && game->player->play->pos.x <= 1630) {
        show_move(game, 15, 0);
    }
}

static void go_mid_next(game_t *game)
{
    if ((game->player->play->pos.y < 500 && game->player->play->pos.y > 300)
    && (game->player->play->pos.x > 1610)) {
        game->player->play->pos.x = 120;
        game->player->play->pos.y += 50;
        game->nb_scene = 9;
    }
    if ((game->player->play->pos.x > 800 && game->player->play->pos.x < 950)
    && (game->player->play->pos.y < 120)) {
        game->player->play->pos.y = 500;
        game->nb_scene = 10;
    }
}

static void go_mid_room(game_t *game)
{
    if ((game->player->play->pos.x > 800 && game->player->play->pos.x < 950)
    && (game->player->play->pos.y > 595)) {
        game->player->play->pos.y = 130;
        game->nb_scene = 4;
    }
    if ((game->player->play->pos.y < 500 && game->player->play->pos.y > 300)
    && (game->player->play->pos.x < 130)) {
        game->player->play->pos.x = 1570;
        game->player->play->pos.y += 60;
        game->nb_scene = 8;
    }
    go_mid_next(game);
}

void event_room_mid(game_t *game)
{
    move_player_mid(game);
    go_mid_room(game);
}
