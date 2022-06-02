/*
** EPITECH PROJECT, 2021
** B-MUL-200-REN-2-1-myrpg-lisa.garnier
** File description:
** init_slot.c
*/

#include "my_rpg.h"

void disp_slot(game_t *game)
{
    for (int x = 0; x != 5; x++)
        for (int y = 0; y != 3; y++) {
            is_click_slot(game, x, y);
            sfRenderWindow_drawSprite(game->rpg->wdw,
            game->rpg->inv->slot[x][y].spr, NULL);
        }
    for (int i = 0; i != 3; i++) {
    sfSprite_setTexture(game->rpg->inv->itm[i].spr,
    game->rpg->inv->itm[i].txt, sfTrue);
    sfSprite_setTextureRect(game->rpg->inv->itm[i].spr,
    game->rpg->inv->itm[i].rect);
    sfSprite_setPosition(game->rpg->inv->itm[i].spr, 
    game->rpg->inv->itm[i].pos);
        if (game->rpg->inv_check == 1)
            game->rpg->inv->itm[i].hide = false;
        else 
            game->rpg->inv->itm[i].hide = true;
    if (game->rpg->inv->itm[i].hide == false)
        sfRenderWindow_drawSprite(game->rpg->wdw,
            game->rpg->inv->itm[i].spr, NULL);
    }
}

int disp_inv(game_t *game, int y)
{
    sfRenderWindow_drawSprite(game->rpg->wdw, game->rpg->inv->spr_bk, NULL);
    sfRenderWindow_drawSprite(game->rpg->wdw, game->rpg->inv->spr_ic, NULL);
    sfRenderWindow_drawSprite(game->rpg->wdw,
        game->rpg->inv->butt->aspect->spr, NULL);
    for (; y < game->rpg->inv->nb_texts; y++)
        display_inventory_texts(game, y);
    return y;
}

static void annex_init_slot(game_t *game, int x, int y)
{
    game->rpg->inv->slot[x][y].rect = (sfIntRect){0, 0, 119, 120};
    game->rpg->inv->slot[x][y].is_empty = 1;
    sfSprite_setTexture(game->rpg->inv->slot[x][y].spr,
    game->rpg->inv->slot[x][y].txtr, sfTrue);
    sfSprite_setTextureRect(game->rpg->inv->slot[x][y].spr,
    game->rpg->inv->slot[x][y].rect);
    sfSprite_setPosition(game->rpg->inv->slot[x][y].spr,
    game->rpg->inv->slot[x][y].pos);
}

void init_slot(game_t *game)
{
    int pos_x = 0;
    int pos_y = 0;

    game->rpg->inv->slot = malloc(sizeof(s_slot *) * 5);
    for (int i = 0; i != 5; i++)
        game->rpg->inv->slot[i] = malloc(sizeof(s_slot) * 3);
    for (int x = 0; x != 5; x++)
        for (int y = 0; y != 3; y++) {
            pos_x = 400 + (130 * x);
            pos_y = 400 + (130 * y);
            game->rpg->inv->slot[x][y].spr = sfSprite_create();
            game->rpg->inv->slot[x][y].txtr = sfTexture_createFromFile(\
            "assets/env/inventory/inventory_square_with_selec.png", NULL);
            game->rpg->inv->slot[x][y].pos = (sfVector2f){pos_x, pos_y};
            annex_init_slot(game, x, y);
        }
}
