/*
** EPITECH PROJECT, 2021
** B-MUL-200-REN-2-1-myrpg-lisa.garnier
** File description:
** is_click_slot.c
*/

#include "my_rpg.h"

void is_click_slot(game_t *game, int x, int y)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->rpg->wdw);
    sfVector2f pos = sfSprite_getPosition(game->rpg->inv->slot[x][y].spr);

    if (mouse.x >= pos.x && mouse.x <= pos.x + 120 && mouse.y >= pos.y &&
    mouse.y <= pos.y + 120)
        game->rpg->inv->slot[x][y].rect.top = 120;
    else
        game->rpg->inv->slot[x][y].rect.top = 0;
    sfSprite_setTextureRect(game->rpg->inv->slot[x][y].spr,
    game->rpg->inv->slot[x][y].rect);
}
