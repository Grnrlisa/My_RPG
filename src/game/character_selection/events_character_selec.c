/*
** EPITECH PROJECT, 2021
** my_defender
** File description:
** my_defender.c
*/

#include "my_rpg.h"

void show_hide_character_select(game_t *game, int i)
{
    game->scenes[1]->texts[0]->hide = false;
    game->scenes[1]->texts[2]->hide = false;
    game->scenes[1]->texts[3]->hide = false;
    game->scenes[1]->texts[4]->hide = false;
    game->scenes[1]->texts[5]->hide = false;
    game->scenes[1]->buttons[4]->aspect->hide = false;
    game->scenes[1]->texts[0]->content = game->player[i].name;
    game->scenes[1]->texts[6]->content = my_itoa(game->player[i].life);
    game->scenes[1]->texts[7]->content = my_itoa(game->player[i].speed);
    game->scenes[1]->texts[8]->content = my_itoa(game->player[i].strenght);
    game->scenes[1]->texts[9]->content = my_itoa(game->player[i].defense);
}

void is_click_choice_annex(game_t *game, int i)
{
    if (i == 2) {
        game->scenes[1]->pic[3]->hide = false;
        game->scenes[1]->pic[4]->hide = true;
        game->scenes[1]->pic[2]->hide = true;
        game->scenes[1]->pic[5]->hide = true;
        game->scenes[1]->texts[1]->content =\
            "'' I'm going to shit everywhere ''";
        game->nb_char = 2;
        game->rpg->inv->icon_path = "assets/env/inventory/ant.png";
    } else if (i == 3) {
        game->scenes[1]->pic[5]->hide = false;
        game->scenes[1]->pic[3]->hide = true;
        game->scenes[1]->pic[4]->hide = true;
        game->scenes[1]->pic[2]->hide = true;
        game->scenes[1]->texts[1]->content = "'' uwu help me ''";
        game->nb_char = 3;
        game->rpg->inv->icon_path = "assets/env/inventory/charl.png";
    }
}

void is_click_choice(game_t *game, int i)
{
    show_hide_character_select(game, i);
    if (i == 0) {
        game->scenes[1]->pic[2]->hide = false;
        game->scenes[1]->pic[3]->hide = true;
        game->scenes[1]->pic[4]->hide = true;
        game->scenes[1]->pic[5]->hide = true;
        game->scenes[1]->texts[1]->content =
        "'' yes i have a graphic design high degree ''";
        game->nb_char = 0;
        game->rpg->inv->icon_path = "assets/env/inventory/lisa.png";
    } else if (i == 1) {
        game->scenes[1]->pic[4]->hide = false;
        game->scenes[1]->pic[2]->hide = true;
        game->scenes[1]->pic[3]->hide = true;
        game->scenes[1]->pic[5]->hide = true;
        game->scenes[1]->texts[1]->content = "'' eeeehhhhh ''";
        game->nb_char = 1;
        game->rpg->inv->icon_path = "assets/env/inventory/leo.png";
    }
    is_click_choice_annex(game, i);
}

void events_character_selection(game_t *game)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->rpg->wdw);
    sfVector2f pos;

    for (int i = 0; i != game->scenes[1]->nb_butt; i++) {
        pos = sfSprite_getPosition(game->scenes[1]->buttons[i]->aspect->spr);
    if (game->rpg->event.type == sfEvtMouseButtonPressed && mouse.x >= pos.x &&
        mouse.x <= pos.x + 100 && mouse.y >= pos.y && mouse.y <= pos.y + 130) {
            sfSound_play(game->music.bip_sound);
            is_click_choice(game, i);
        } else if (mouse.x >= pos.x && mouse.x <= pos.x + 100 &&
        mouse.y >= pos.y && mouse.y <= pos.y + 130) {
            game->scenes[1]->buttons[i]->aspect->rect.top = 119;
            sfSprite_setTextureRect(game->scenes[1]->buttons[i]->aspect->spr,
            game->scenes[1]->buttons[i]->aspect->rect);
        } else {
            game->scenes[1]->buttons[i]->aspect->rect.top = 0;
            sfSprite_setTextureRect(game->scenes[1]->buttons[i]->aspect->spr,
            game->scenes[1]->buttons[i]->aspect->rect);
        }
    }
}

void events_character_selection_annex(game_t *game)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->rpg->wdw);
    sfVector2f pos = sfSprite_getPosition(
        game->scenes[1]->buttons[4]->aspect->spr);

    if (game->rpg->event.type == sfEvtMouseButtonPressed && mouse.x >= pos.x &&
        mouse.x <= pos.x + 350 && mouse.y >= pos.y && mouse.y <= pos.y + 40) {
            game->nb_scene = 12;
            sfMusic_stop(game->music.intro_music);
            sfMusic_play(game->music.dungeon_music);
        } else if (mouse.x >= pos.x && mouse.x <= pos.x + 350 &&
        mouse.y >= pos.y && mouse.y <= pos.y + 40) {
            game->scenes[1]->buttons[4]->aspect->rect.top = 47;
            sfSprite_setTextureRect(game->scenes[1]->buttons[4]->aspect->spr,
            game->scenes[1]->buttons[4]->aspect->rect);
        } else {
            game->scenes[1]->buttons[4]->aspect->rect.top = 0;
            sfSprite_setTextureRect(game->scenes[1]->buttons[4]->aspect->spr,
            game->scenes[1]->buttons[4]->aspect->rect);
        }
}
