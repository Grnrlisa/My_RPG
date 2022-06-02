/*
** EPITECH PROJECT, 2021
** my_defender
** File description:
** my_defender.c
*/

#include "my_rpg.h"

void end_animation_3(game_t *game)
{
    if (game->timer[6].sec > 6) {
       if (game->timer[4].sec > 0.3) {
          if (game->scenes[13]->pic[4]->rect. left <= 5760)
             game->scenes[13]->pic[4]->rect.left += 1920;
          if (game->scenes[13]->pic[4]->rect.left >= 5760)
             game->scenes[13]->pic[4]->rect.left = 5760;
       }
    }
}

void end_animation_2(game_t *game)
{
    clock_end_2(game);
    if (game->timer[5].sec > 0.1) {
          if (game->scenes[13]->pic[2]->rect.left == 9600)
             game->scenes[13]->pic[1]->hide = false;
          if (game->scenes[13]->pic[1]->rect.left <= 16380)
             game->scenes[13]->pic[1]->rect.left += 585;
          if (game->scenes[13]->pic[1]->rect.left >= 16380)
             game->scenes[13]->pic[1]->rect.left = 0;
          sfClock_restart(game->timer[5].clock);
    }
    end_animation_3(game);
}

void end_animation(game_t *game)
{
    clock_end(game);
    clock_end_3(game);
    if (game->timer[6].sec > 0.8) {
       if (game->timer[4].sec > 0.3) {
             if (game->scenes[13]->pic[2]->rect.left <= 11520)
                game->scenes[13]->pic[2]->rect.left += 1920;
             if (game->scenes[13]->pic[2]->rect.left >= 9600)
                game->scenes[13]->pic[2]->rect.left = 9600;
       }
    }
       if (game->timer[4].sec > 0.3) {
          if (game->scenes[13]->pic[3]->rect.left <= 3840)
             game->scenes[13]->pic[3]->rect.left += 1919;
          if (game->scenes[13]->pic[3]->rect.left >= 1920)
             game->scenes[13]->pic[3]->rect.left = 0;
          sfClock_restart(game->timer[4].clock);
       }
    end_animation_2(game);
}

void events_end_scenes(game_t *game)
{
    sfMusic_play(game->music.game_over_music);
    if (sfKeyboard_isKeyPressed(sfKeyEscape))
        sfRenderWindow_close(game->rpg->wdw);
}