/*
** EPITECH PROJECT, 2022
** move_player.c
** File description:
** rpg
*/

#include "my_rpg.h"

void show_move(game_t *game, int add_x, int add_y)
{
    if (add_x == 0 && add_y < 0)
        game->player->play->rect.top = 925;
    if (add_x == 0 && add_y > 0)
        game->player->play->rect.top = 1155;
    if (add_x < 0 && add_y == 0)
        game->player->play->rect.top = 1040;
    if (add_x > 0 && add_y == 0)
        game->player->play->rect.top = 1270;
    if (game->player->play->rect.left <= 805) {
        game->player->play->rect.left += 115;
    } else {
        game->player->play->rect.left = 0;
    }
    game->player->play->pos.x += add_x;
    game->player->play->pos.y += add_y;
    is_fight(game);
    sfClock_restart(game->timer[2].clock);
}

void move_player(game_t *game)
{
    clock_walk(game);
    if (sfKeyboard_isKeyPressed(sfKeyZ) && game->player->play->pos.y >= 40 &&
    game->timer[2].sec > 0.01) {
        show_move(game, 0, -15);

    }
    if (sfKeyboard_isKeyPressed(sfKeyQ) && game->player->play->pos.x >= 100 &&
    game->timer[2].sec > 0.01) {
        game->player->play->rect.top = 1040;
        show_move(game, -15, 0);
    }
    if (sfKeyboard_isKeyPressed(sfKeyS) && game->player->play->pos.y <= 790 &&
    game->timer[2].sec > 0.01) {
        game->player->play->rect.top = 1155;
        show_move(game, 0, 15);
    }
    if (sfKeyboard_isKeyPressed(sfKeyD) && game->player->play->pos.x <= 1630 &&
    game->timer[2].sec > 0.01) {
        game->player->play->rect.top = 1270;
        show_move(game, 15, 0);
    }
}
