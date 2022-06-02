/*
** EPITECH PROJECT, 2021
** mydef
** File description:
** ini menu + parallaxs
*/

#include "my.h"

void set_vol(defend_t *def, int vol)
{
    sfMusic_setVolume(def->music.start_sound, vol);
    sfMusic_setVolume(def->music.second_sound, vol);
}

void on_click_vol_evs(defend_t *def, sfVector2i mouse, sfVector2f pos2,
sfVector2f pos3)
{
    int vol = 100;
    if (def->event.type == sfEvtMouseButtonPressed && mouse.x >= pos2.x &&
    mouse.x <= pos2.x + 30 && mouse.y >= pos2.y && mouse.y <= pos2.y + 30 &&
    def->opt.bar_2.rect.width > 0) {
        vol = (def->opt.bar_2.rect.width / 5);
        set_vol(def, vol);
        def->opt.curs.pos.x -= 50;
        sfSprite_setPosition(def->opt.curs.spr, def->opt.curs.pos);
        def->opt.bar_2.rect.width -= 50;
        sfSprite_setTextureRect(def->opt.bar_2.spr, def->opt.bar_2.rect);
    } if (def->event.type == sfEvtMouseButtonPressed && mouse.x >= pos3.x &&
    mouse.x <= pos3.x + 30 && mouse.y >= pos3.y && mouse.y <= pos3.y + 30 &&
    def->opt.bar_2.rect.width < 500) {
        vol = (def->opt.bar_2.rect.width / 5);
        set_vol(def, vol);
        def->opt.curs.pos.x += 50;
        sfSprite_setPosition(def->opt.curs.spr, def->opt.curs.pos);
        def->opt.bar_2.rect.width += 50;
        sfSprite_setTextureRect(def->opt.bar_2.spr, def->opt.bar_2.rect);
    }
}

void vol_but_evs(defend_t *def, sfVector2i mouse)
{
    sfVector2f pos2 = sfSprite_getPosition(def->opt.less.spr);
    sfVector2f pos3 = sfSprite_getPosition(def->opt.plus.spr);

    if (mouse.x >= pos2.x && mouse.x <= pos2.x + 30 && mouse.y >= pos2.y
    && mouse.y <= pos2.y + 30) {
        def->opt.less.rect.top = 24;
        sfSprite_setTextureRect(def->opt.less.spr, def->opt.less.rect);
    } else {
        def->opt.less.rect.top = 0;
        sfSprite_setTextureRect(def->opt.less.spr, def->opt.less.rect);
    }
    if (mouse.x >= pos3.x && mouse.x <= pos3.x + 40 && mouse.y >= pos3.y
    && mouse.y <= pos3.y + 40) {
        def->opt.plus.rect.top = 48;
        sfSprite_setTextureRect(def->opt.plus.spr, def->opt.plus.rect);
    } else {
        def->opt.plus.rect.top = 0;
        sfSprite_setTextureRect(def->opt.plus.spr, def->opt.plus.rect);
    }
    on_click_vol_evs(def, mouse, pos2, pos3);
}

void settings_evs(defend_t *def)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(def->wdw);
    sfVector2f pos = sfSprite_getPosition(def->opt.back.spr);

    if ((def->event.type == sfEvtMouseButtonPressed && mouse.x >= pos.x &&
    mouse.x <= pos.x + 170 && mouse.y >= pos.y && mouse.y <= pos.y + 70) ||
    def->event.key.code == sfKeyEscape) {
        def->scene = 1;
    } else if (mouse.x >= pos.x && mouse.x <= pos.x + 170 && mouse.y >= pos.y
    && mouse.y <= pos.y + 50) {
        def->opt.back.rect.top = 52;
        sfSprite_setTextureRect(def->opt.back.spr, def->opt.back.rect);
    } else {
        def->opt.back.rect.top = 0;
        sfSprite_setTextureRect(def->opt.back.spr, def->opt.back.rect);
    }
    vol_but_evs(def, mouse);
    change_music_evs(def, mouse);
}

void settings_is_open(defend_t *def)
{
    sfRenderWindow_drawSprite(def->wdw, def->sp_back, NULL);
    sfRenderWindow_drawSprite(def->wdw, def->opt.bar_1.spr, NULL);
    sfRenderWindow_drawSprite(def->wdw, def->opt.bar_2.spr, NULL);
    sfRenderWindow_drawSprite(def->wdw, def->opt.curs.spr, NULL);
    sfRenderWindow_drawSprite(def->wdw, def->opt.vol.spr, NULL);
    sfRenderWindow_drawSprite(def->wdw, def->opt.less.spr, NULL);
    sfRenderWindow_drawSprite(def->wdw, def->opt.plus.spr, NULL);
    sfRenderWindow_drawSprite(def->wdw, def->opt.back.spr, NULL);
    sfRenderWindow_drawSprite(def->wdw, def->opt.change.spr, NULL);
    sfRenderWindow_drawSprite(def->wdw, def->opt.opt_1.spr, NULL);
    sfRenderWindow_drawSprite(def->wdw, def->opt.opt_2.spr, NULL);
    settings_evs(def);
    sfRenderWindow_display(def->wdw);
}
