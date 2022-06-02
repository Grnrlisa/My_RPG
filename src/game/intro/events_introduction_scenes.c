/*
** EPITECH PROJECT, 2021
** my_defender
** File description:
** my_defender.c
*/

#include "my_rpg.h"

void events_intro_2(game_t *game)
{
    if (game->rpg->event.key.code == sfKeyEnter)
        game->nb_scene = 1;
    if (game->rpg->event.key.code == sfKeySpace) {
        game->scenes[3]->pic[4]->hide = false;
        game->rpg->text_check++;
    }
    if (game->rpg->event.key.code == sfKeySpace &&
    game->scenes[3]->pic[4]->rect.top >= 170) {
        if (game->rpg->text_check > 1 && game->rpg->text_check < 4) {
            game->scenes[3]->pic[4]->txt = sfTexture_createFromFile
            ("assets/intro/scene2/text5.png", NULL);
        } else if (game->rpg->text_check > 4)
            game->nb_scene = 1;
        game->scenes[3]->pic[4]->rect = (sfIntRect){0, -90, 1780, 100};
    }
}

void events_intro_l_annex(game_t *game)
{
    if (game->rpg->text_check > 1 && game->rpg->text_check < 4) {
        game->scenes[2]->pic[4]->txt = sfTexture_createFromFile
        ("assets/intro/scene1/text2.png", NULL);
    } else if (game->rpg->text_check > 4 && game->rpg->text_check < 6) {
        game->scenes[2]->pic[4]->txt = sfTexture_createFromFile
        ("assets/intro/scene1/text3.png", NULL);
    } else if (game->rpg->text_check > 6) {
        game->rpg->text_check = 0;
        game->nb_scene = 3;
    }
    game->scenes[2]->pic[4]->rect = (sfIntRect){0, -90, 1780, 100};
}

void events_intro_1(game_t *game)
{
    if (game->rpg->event.key.code == sfKeyEnter)
        game->nb_scene = 1;
    if (game->rpg->event.key.code == sfKeySpace) {
        game->scenes[2]->pic[4]->hide = false;
        game->scenes[2]->pic[3]->hide = true;
        game->rpg->text_check++;
    }
    if (game->rpg->event.key.code == sfKeySpace &&
    game->scenes[2]->pic[4]->rect.top >= 170) {
        events_intro_l_annex(game);
    }
}
