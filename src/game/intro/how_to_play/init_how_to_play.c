/*
** EPITECH PROJECT, 2021
** my_rpg
** File description:
** my_rpg.c
*/

#include "my_rpg.h"

static void init_how_to_play_pic(game_t *game)
{
    game->scenes[12]->pic[0] = malloc(sizeof(gameobj_t));
    game->scenes[12]->pic[0]->pos = (sfVector2f){0, 0};
    game->scenes[12]->pic[0]->rect = (sfIntRect){0, 0, 1920, 1080};
    game->scenes[12]->pic[0]->scale = (sfVector2f){1, 1};
    game->scenes[12]->pic[0]->spr = sfSprite_create();
    game->scenes[12]->pic[0]->txt = sfTexture_createFromFile
    ("assets/menu/how_to_play/how_to_play.png", NULL);
    game->scenes[12]->pic[0]->hide = false;
}

static void init_how_to_play_butt(game_t *game)
{
    game->scenes[12]->buttons[0] = malloc(sizeof(button_t));
    game->scenes[12]->buttons[0]->aspect = malloc(sizeof(gameobj_t));
    game->scenes[12]->buttons[0]->aspect->pos = (sfVector2f){890, 770};
    game->scenes[12]->buttons[0]->aspect->rect = (sfIntRect){0, 0, 139, 68};
    game->scenes[12]->buttons[0]->aspect->scale = (sfVector2f){1, 1};
    game->scenes[12]->buttons[0]->aspect->spr = sfSprite_create();
    game->scenes[12]->buttons[0]->aspect->txt = sfTexture_createFromFile
    ("assets/menu/how_to_play/okbutt.png", NULL);
    game->scenes[12]->buttons[0]->aspect->hide = false;
}

void init_how_to_play(game_t *game)
{
    game->scenes[12]->pic = malloc(sizeof(gameobj_t *) * 1);
    game->scenes[12]->buttons = malloc(sizeof(button_t *) * 1);
    init_how_to_play_pic(game);
    init_how_to_play_butt(game);
    game->scenes[12]->nb_pict = 1;
    game->scenes[12]->nb_butt = 1;
}

void event_how_to_play(game_t *game)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->rpg->wdw);
    sfVector2f pos =
        sfSprite_getPosition(game->scenes[12]->buttons[0]->aspect->spr);

    if (game->rpg->event.type == sfEvtMouseButtonPressed && mouse.x >= pos.x &&
        mouse.x <= pos.x + 139 && mouse.y >= pos.y && mouse.y <= pos.y + 126) {
            if (game->is_game == 0) {
            game->nb_scene = 4;
            redi_player(game);
            sfClock_restart(game->timer[7].clock);
            game->is_game = 5;
            game->rpg->text_check = 0;
            } else {
                game->nb_scene = game->last_scn;
                game->player->play->hide = false;
            }
        } else if (mouse.x >= pos.x && mouse.x <= pos.x + 139 &&
        mouse.y >= pos.y && mouse.y <= pos.y + 126) {
            game->scenes[12]->buttons[0]->aspect->rect.top = 58;
            sfSprite_setTextureRect(game->scenes[12]->buttons[0]->aspect->spr,
            game->scenes[12]->buttons[0]->aspect->rect);
        } else {
            game->scenes[12]->buttons[0]->aspect->rect.top = 0;
            sfSprite_setTextureRect(game->scenes[12]->buttons[0]->aspect->spr,
            game->scenes[12]->buttons[0]->aspect->rect);
        }
}
