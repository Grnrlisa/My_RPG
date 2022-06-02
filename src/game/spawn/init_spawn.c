/*
** EPITECH PROJECT, 2022
** init_spawn.c
** File description:
** rpg
*/

#include "my_rpg.h"

static void init_text_box(scene_t *scenes)
{
    scenes->pic[1] = malloc(sizeof(gameobj_t));
    scenes->pic[1]->pos = (sfVector2f){150, 800};
    scenes->pic[1]->rect = (sfIntRect){0, 0, 1700, 380};
    scenes->pic[1]->scale = (sfVector2f){1, 1};
    scenes->pic[1]->spr = sfSprite_create();
    scenes->pic[1]->txt = sfTexture_createFromFile
    ("assets/env/text_box.png", NULL);
    scenes->pic[1]->hide = true;
}

static void init_spawn_room(scene_t *scenes)
{
    sfUint8 *pixel_screen = malloc(4 * 1920 * 1080);

    scenes->pic[0] = malloc(sizeof(gameobj_t));
    scenes->pic[0]->pos = (sfVector2f){-440, -50};
    scenes->pic[0]->rect = (sfIntRect){0, 0, 1920, 1080};
    scenes->pic[0]->scale = (sfVector2f){1.5, 1.15};
    scenes->pic[0]->spr = sfSprite_create();
    scenes->pic[0]->txt = sfTexture_createFromFile
    ("assets/env/donj1.png", NULL);
    put_pixel(pixel_screen, 10, 10, 255, 255);
    sfTexture_updateFromPixels(scenes->pic[0]->txt,
    pixel_screen, 1920, 1080, 1, 2);
    scenes->pic[0]->hide = false;
    init_text_box(scenes);
}

void init_png_talk_butt(scene_t *scenes)
{
    scenes->buttons[1] = malloc(sizeof(button_t));
    scenes->buttons[1]->aspect = malloc(sizeof(gameobj_t));
    scenes->buttons[1]->aspect->pos = (sfVector2f){320, 350};
    scenes->buttons[1]->aspect->rect = (sfIntRect){0, 100, 24, 149};
    scenes->buttons[1]->aspect->scale = (sfVector2f){1.5, 1.5};
    scenes->buttons[1]->aspect->spr = sfSprite_create();
    scenes->buttons[1]->aspect->size = (sfVector2f){24, 49};
    scenes->buttons[1]->aspect->txt = sfTexture_createFromFile
    ("assets/env/excl.png", NULL);
    scenes->buttons[1]->aspect->hide = true;
}

void init_spawn_giver(scene_t *scenes)
{
    scenes->buttons[0] = malloc(sizeof(button_t));
    scenes->buttons[0]->aspect = malloc(sizeof(gameobj_t));
    scenes->buttons[0]->aspect->pos = (sfVector2f){300, 400};
    scenes->buttons[0]->aspect->rect = (sfIntRect){0, 0, 110, 115};
    scenes->buttons[0]->aspect->scale = (sfVector2f){1.5, 1.5};
    scenes->buttons[0]->aspect->spr = sfSprite_create();
    scenes->buttons[0]->aspect->size = (sfVector2f){110, 125};
    scenes->buttons[0]->aspect->txt = sfTexture_createFromFile
    ("assets/env/pnj_front.png", NULL);
    scenes->buttons[0]->aspect->hide = false;
}

void init_spawn(game_t *game)
{
    game->timer[7].clock = sfClock_create();
    game->scenes[4]->pic = malloc(sizeof(gameobj_t *) * 5);
    game->scenes[4]->buttons = malloc(sizeof(button_t *) * 3);
    init_spawn_room(game->scenes[4]);
    init_spawn_giver(game->scenes[4]);
    init_png_talk_butt(game->scenes[4]);
    init_shop_png(game->scenes[4]);
    init_pnj_icon(game->scenes[4]);
    init_pnj_dialogs(game->scenes[4]);
    game->scenes[4]->nb_pict = 5;
    game->scenes[4]->nb_butt = 3;
    game->scenes[4]->nb_text = 0;
}