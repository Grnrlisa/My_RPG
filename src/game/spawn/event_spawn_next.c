/*
** EPITECH PROJECT, 2022
** event_spawn_next.c
** File description:
** rpg
*/

#include "my_rpg.h"

void scroll_text(game_t *game)
{
    if (game->scenes[4]->pic[1]->hide == false && game->rpg->event.key.code ==
    sfKeySpace && game->rpg->event.type == sfEvtKeyReleased) {
        game->scenes[4]->pic[3]->rect.top += 10;
    }
}
