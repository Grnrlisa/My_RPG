/*
** EPITECH PROJECT, 2022
** analyse_sett_menu.c
** File description:
** rpg
*/

#include "my_rpg.h"

void set_vol(game_t *game, int vol)
{
    sfMusic_setVolume(game->music.intro_music, vol);
    sfMusic_setVolume(game->music.menu_music, vol);
    sfMusic_setVolume(game->music.dungeon_music, vol);
    sfMusic_setVolume(game->music.game_over_music, vol);
    //sfMusic_setVolume(game->music.fight_music, vol);
    //sfMusic_setVolume(game->music.boss_music, vol);
}

static void vol_down(game_t *game, button_t *b, int vol)
{
    if (mouse_on_butt(b->aspect->pos, b->aspect->size, game->rpg) == 1
    && b->aspect->hide == false)
        b->aspect->rect.top = 40;
    if (mouse_on_butt(b->aspect->pos, b->aspect->size, game->rpg) == 0
    && b->aspect->hide == false)
        b->aspect->rect.top = 0;
    if (butt_clicked(b->aspect->pos, b->aspect->size, game->rpg) == 1 &&
    game->scenes[6]->pic[3]->rect.width > 0) {
        game->scenes[6]->pic[3]->rect.width -= 79;
        sfSprite_setTextureRect(game->scenes[6]->pic[3]->spr,
            game->scenes[6]->pic[3]->rect);
        vol = (game->scenes[6]->pic[3]->rect.width / 5);
        set_vol(game, vol);
        game->scenes[6]->buttons[5]->aspect->pos.x -= 79;
        sfSprite_setPosition(game->scenes[6]->buttons[5]->aspect->spr,
            game->scenes[6]->buttons[5]->aspect->pos);
    }
}

static void vol_up(game_t *game, button_t *b, int vol)
{
    if (mouse_on_butt(b->aspect->pos, b->aspect->size, game->rpg) == 1
    && b->aspect->hide == false)
        b->aspect->rect.top = 40;
    if (mouse_on_butt(b->aspect->pos, b->aspect->size, game->rpg) == 0
    && b->aspect->hide == false)
        b->aspect->rect.top = 0;
    if (butt_clicked(b->aspect->pos, b->aspect->size, game->rpg) == 1 &&
    game->scenes[6]->pic[3]->rect.width < 790) {
        game->scenes[6]->pic[3]->rect.width += 79;
        sfSprite_setTextureRect(game->scenes[6]->pic[3]->spr,
            game->scenes[6]->pic[3]->rect);
        vol = (game->scenes[6]->pic[3]->rect.width / 5);
        set_vol(game, vol);
        game->scenes[6]->buttons[5]->aspect->pos.x += 79;
        sfSprite_setPosition(game->scenes[6]->buttons[5]->aspect->spr,
            game->scenes[6]->buttons[5]->aspect->pos);
    }
}

void analyse_setting(game_t *game)
{
    int vol = 100;

    enable_butt(game, game->scenes[6]->buttons[0]);
    disable_butt(game, game->scenes[6]->buttons[1]);
    vol_up(game, game->scenes[6]->buttons[2], vol);
    vol_down(game, game->scenes[6]->buttons[3], vol);
    go_to_menu(game, game->scenes[6]->buttons[4]);
}
