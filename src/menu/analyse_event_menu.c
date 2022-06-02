/*
** EPITECH PROJECT, 2022
** analyse_event_menu.c
** File description:
** RPG
*/

#include "../../include/my_rpg.h"

static void analyse_startbutt(game_t *game, button_t *b)
{
    if (mouse_on_butt(b->aspect->pos, b->aspect->size, game->rpg) == 1
    && b->aspect->hide == false)
        b->aspect->rect.top = 200;
    if (mouse_on_butt(b->aspect->pos, b->aspect->size, game->rpg) == 0
    && b->aspect->hide == false)
        b->aspect->rect.top = 0;
    if (butt_clicked(b->aspect->pos, b->aspect->size, game->rpg) == 1
    && b->aspect->hide == false) {
        game->nb_scene = 2;
        sfMusic_stop(game->music.menu_music);
        sfMusic_play(game->music.intro_music);
    }
}

static void analyse_settbutt(game_t *game, button_t *b)
{
    if (mouse_on_butt(b->aspect->pos, b->aspect->size, game->rpg) == 1
    && b->aspect->hide == false)
        b->aspect->rect.top = 200;
    if (mouse_on_butt(b->aspect->pos, b->aspect->size, game->rpg) == 0
    && b->aspect->hide == false)
        b->aspect->rect.top = 0;
    if (butt_clicked(b->aspect->pos, b->aspect->size, game->rpg) == 1) {
        game->nb_scene = 6;
    }
}

static void analyse_quitbutt(game_t *game, button_t *b)
{
    if (mouse_on_butt(b->aspect->pos, b->aspect->size, game->rpg) == 1
    && b->aspect->hide == false)
        b->aspect->rect.top = 200;
    if (mouse_on_butt(b->aspect->pos, b->aspect->size, game->rpg) == 0
    && b->aspect->hide == false)
        b->aspect->rect.top = 0;
    if (butt_clicked(b->aspect->pos, b->aspect->size, game->rpg) == 1
    && b->aspect->hide == false)
        sfRenderWindow_close(game->rpg->wdw);
}

void analyse_event_menu(game_t *game)
{
    if (game->nb_scene == 0) {
        analyse_startbutt(game, game->scenes[0]->buttons[0]);
        analyse_settbutt(game, game->scenes[0]->buttons[1]);
        analyse_quitbutt(game, game->scenes[0]->buttons[2]);
    } else {
        analyse_setting(game);
    }
}
