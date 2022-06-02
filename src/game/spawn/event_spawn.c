/*
** EPITECH PROJECT, 2022
** event_spawn.c
** File description:
** rpg
*/

#include "my_rpg.h"

void scroll_text(game_t *game)
{
    if (game->rpg->event.type == sfEvtMouseButtonPressed)
        game->rpg->text_check++;
    if (game->rpg->text_check > 0 && game->rpg->text_check < 2)
        game->scenes[4]->pic[4]->rect.top = 170;
    if (game->rpg->text_check > 2 && game->rpg->text_check < 4)
        game->scenes[4]->pic[4]->rect.top = 300;
    if (game->rpg->text_check > 4 && game->rpg->text_check < 6)
        game->scenes[4]->pic[4]->rect.top = 515;
    if (game->rpg->text_check > 6 && game->rpg->text_check < 8)
        game->scenes[4]->pic[4]->rect.top = 665;
    if (game->rpg->text_check > 8 && game->rpg->text_check < 10)
        game->scenes[4]->pic[4]->rect.top = 835;
    if (game->rpg->text_check > 10 && game->rpg->text_check < 12)
        game->scenes[4]->pic[4]->rect.top = 1020;
    scroll_text_annex(game);
}

static void event_giver(game_t *game)
{
    if (player_on_area(game->player->play,
    game->scenes[4]->buttons[0]->aspect, 1) == 1)
        game->scenes[4]->buttons[1]->aspect->hide = false;
    else
        game->scenes[4]->buttons[1]->aspect->hide = true;
    if (game->rpg->event.key.code == sfKeyE && game->rpg->event.type ==
    sfEvtKeyReleased && game->scenes[4]->buttons[1]->aspect->hide == false) {
        game->scenes[4]->pic[1]->hide = false;
        game->scenes[4]->pic[2]->hide = false;
        game->scenes[4]->pic[3]->hide = false;
        game->scenes[4]->pic[4]->hide = false;
        game->scenes[4]->pic[3]->rect.top = 0;
    } else if (player_on_area(game->player->play,
    game->scenes[4]->buttons[0]->aspect, 1) == 0) {
        game->scenes[4]->buttons[1]->aspect->hide = true;
        game->scenes[4]->pic[1]->hide = true;
        game->scenes[4]->pic[2]->hide = true;
        game->scenes[4]->pic[3]->hide = true;
        game->scenes[4]->pic[4]->hide = true;
    }
}

void init_player(game_t *game, char *sprt, char *name)
{
    game->player->play = malloc(sizeof(gameobj_t));
    game->player->name = name;
    game->player->play->pos = (sfVector2f){600, 500};
    game->player->play->rect = (sfIntRect){0, 690, 115, 110};
    game->player->play->scale = (sfVector2f){1.5, 1.5};
    game->player->play->spr = sfSprite_create();
    game->player->play->txt = sfTexture_createFromFile
    (sprt, NULL);
    game->player->play->hide = false;
    game->timer[2].clock = sfClock_create();
}

static void next_room(game_t *game)
{
    if ((game->player->play->pos.x > 800 && game->player->play->pos.x < 950)
    && (game->player->play->pos.y < 40)) {
        game->player->play->pos.y = 590;
        game->nb_scene = 7;
    }
}


void event_spawn(game_t *game)
{
    event_giver(game);
    next_room(game);
}
