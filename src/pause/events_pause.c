/*
** EPITECH PROJECT, 2022
** events_pause.c
** File description:
** rpg
*/

#include "my_rpg.h"

static void analyse_resumbutt(game_t *game, button_t *b)
{
    if (mouse_on_butt(b->aspect->pos, b->aspect->size, game->rpg) == 1
    && b->aspect->hide == false)
        b->aspect->rect.top = 61;
    if (mouse_on_butt(b->aspect->pos, b->aspect->size, game->rpg) == 0
    && b->aspect->hide == false)
        b->aspect->rect.top = 0;
    if (butt_clicked(b->aspect->pos, b->aspect->size, game->rpg) == 1) {
        game->nb_scene = game->last_scn;
        game->player->play->hide = false;
    }
}

static void analyse_gomenubutt(game_t *game, button_t *b)
{
    if (mouse_on_butt(b->aspect->pos, b->aspect->size, game->rpg) == 1
    && b->aspect->hide == false)
        b->aspect->rect.top = 60;
    if (mouse_on_butt(b->aspect->pos, b->aspect->size, game->rpg) == 0
    && b->aspect->hide == false)
        b->aspect->rect.top = 0;
    if (butt_clicked(b->aspect->pos, b->aspect->size, game->rpg) == 1)
        game->nb_scene = 5;
}

static void analyse_quitbutt(game_t *game, button_t *b)
{
    if (mouse_on_butt(b->aspect->pos, b->aspect->size, game->rpg) == 1
    && b->aspect->hide == false)
        b->aspect->rect.top = 60;
    if (mouse_on_butt(b->aspect->pos, b->aspect->size, game->rpg) == 0
    && b->aspect->hide == false)
        b->aspect->rect.top = 0;
    if (butt_clicked(b->aspect->pos, b->aspect->size, game->rpg) == 1
    && b->aspect->hide == false)
        sfRenderWindow_close(game->rpg->wdw);
}

static void analyse_htpbutt(game_t *game, button_t *b)
{
    if (mouse_on_butt(b->aspect->pos, b->aspect->size, game->rpg) == 1
    && b->aspect->hide == false)
        b->aspect->rect.top = 60;
    if (mouse_on_butt(b->aspect->pos, b->aspect->size, game->rpg) == 0
    && b->aspect->hide == false)
        b->aspect->rect.top = 0;
    if (butt_clicked(b->aspect->pos, b->aspect->size, game->rpg) == 1
    && b->aspect->hide == false)
        game->nb_scene = 12;
}

void events_pause(game_t *game)
{
    clock_pause(game);
    game->player->play->hide = true;
    if (game->timer[3].sec > 0.01) {
        game->scenes[5]->pic[0]->pos.x -= 2;
        game->scenes[5]->pic[1]->pos.x -= 2;
        sfClock_restart(game->timer[3].clock);
    }
    if (game->scenes[5]->pic[1]->pos.x <= 0) {
        game->scenes[5]->pic[0]->pos.x = 0;
        game->scenes[5]->pic[1]->pos.x = 1920;
    }
    sfSprite_setPosition(game->scenes[5]->pic[0]->spr,
        game->scenes[5]->pic[0]->pos);
    analyse_resumbutt(game, game->scenes[5]->buttons[0]);
    analyse_gomenubutt(game, game->scenes[5]->buttons[1]);
    analyse_quitbutt(game, game->scenes[5]->buttons[2]);
    analyse_htpbutt(game, game->scenes[5]->buttons[3]);
}
