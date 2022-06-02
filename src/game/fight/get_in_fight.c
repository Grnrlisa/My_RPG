/*
** EPITECH PROJECT, 2021
** B-MUL-200-REN-2-1-myrpg-lisa.garnier
** File description:
** get_in_fight.c
*/

#include "my_rpg.h"

void redi_action(game_t *game, int i)
{
    if (i == 0)
        action_atk(game);
    if (i == 1)
        action_def(game);
    if (i == 2)
        action_rest(game);
    if (i == 3)
        action_escape(game);
}

void change_life_bar(game_t *game)
{
    sfVector2f scale_p;
    sfVector2f scale_e;

    scale_p.y = 1;
    scale_p.x = ((float)game->play.life / (float)40);
    scale_e.y = 1;
    scale_e.x = ((float)game->enm.life / (float)40);
    sfSprite_setScale(game->scenes[11]->pic[2]->spr, scale_e);
    sfSprite_setScale(game->scenes[11]->pic[4]->spr, scale_p);
}

void choose_action(game_t *game)
{
    sfVector2i ms = sfMouse_getPositionRenderWindow(game->rpg->wdw);
    sfVector2f pos;

    for (int i = 0; i < game->scenes[11]->nb_butt; i++) {
        change_life_bar(game);
        pos = sfSprite_getPosition(game->scenes[11]->buttons[i]->aspect->spr);
        if (ms.x > pos.x && ms.x < pos.x + 170 && ms.y > pos.y &&
        ms.y < pos.y + 50 && game->rpg->event.type == sfEvtMouseButtonPressed)
            redi_action(game, i);
        else if (ms.x > pos.x && ms.x < pos.x + 170 && ms.y > pos.y &&
        ms.y < pos.y + 50)
            game->scenes[11]->buttons[i]->aspect->rect.top = 50;
        else
            game->scenes[11]->buttons[i]->aspect->rect.top = 0;
    }
}

void get_in_fight(game_t *game)
{
    int end_fight = 0;

    while(end_fight == 0) {
        display_scnes(game->scenes[game->nb_scene], game->rpg);
        disp_fight_player(game);
        while (sfRenderWindow_pollEvent(game->rpg->wdw, &game->rpg->event)) {
            choose_action(game);
        }
        if (game->enm.life < 0) {
            end_fight = 1;
            game->nb_scene = game->last_scn;
            sfMusic_pause(game->music.fight_music);
            sfMusic_play(game->music.dungeon_music);
            game->player->play->hide = false;
            return;
        }
        if (game->play.life < 0) {
            end_fight = 1;
            game->nb_scene = 13;
            game->victory = false;
            sfMusic_pause(game->music.fight_music);
            sfMusic_play(game->music.game_over_music);
            return;
        }
        sfRenderWindow_display(game->rpg->wdw);
    }
}