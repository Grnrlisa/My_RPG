/*
** EPITECH PROJECT, 2021
** CSFML
** File description:
** my_rpg
*/

#include "my_rpg.h"

game_t *malloc_game(void)
{
    game_t *game = malloc(sizeof(game_t));
    game->scenes = malloc(sizeof(scene_t*) * SIZE);
    game->player = malloc(sizeof(player_t) * 4);
    game->timer = malloc(sizeof(s_clock) * 8);
    game->scenes[MENU] = malloc(sizeof(scene_t));
    game->scenes[CHAR_SELEC] = malloc(sizeof(scene_t));
    game->scenes[INTRO_1] = malloc(sizeof(scene_t));
    game->scenes[INTRO_2] = malloc(sizeof(scene_t));
    game->scenes[GAME] = malloc(sizeof(scene_t));
    game->scenes[PAUSE] = malloc(sizeof(scene_t));
    game->scenes[SETT_MENU] = malloc(sizeof(scene_t));
    game->scenes[ROOM_MID] = malloc(sizeof(scene_t));
    game->scenes[ROOM_L] = malloc(sizeof(scene_t));
    game->scenes[ROOM_R] = malloc(sizeof(scene_t));
    game->scenes[BOSS] = malloc(sizeof(scene_t));
    game->scenes[HOW_TO_PLAY] = malloc(sizeof(scene_t));
    game->scenes[FIGHT] = malloc(sizeof(scene_t));
    game->scenes[END] = malloc(sizeof(scene_t));

    return game;
}

void apply_change(gameobj_t *picture, rpg_t *rpg)
{
    if (picture != NULL) {
        sfSprite_setTexture(picture->spr, picture->txt, sfTrue);
        sfSprite_setScale(picture->spr, picture->scale);
        sfSprite_setTextureRect(picture->spr, picture->rect);
        sfSprite_setPosition(picture->spr, picture->pos);
        sfRenderWindow_drawSprite(rpg->wdw, picture->spr, NULL);
    }
}

void apply_change_texts(texte_t *texts, rpg_t *rpg)
{
    if (texts != NULL) {
        sfText_setFont(texts->text, texts->font);
        sfText_setColor(texts->text, texts->color);
        sfText_setCharacterSize(texts->text, texts->size);
        sfText_setPosition(texts->text, texts->pos);
        sfText_setString(texts->text, texts->content);
        sfRenderWindow_drawText(rpg->wdw, texts->text, NULL);
    }
}

void display_player(game_t *game, rpg_t *rpg)
{
    if (game->player->play != NULL && game->player->play->hide == false)
        apply_change(game->player->play, rpg);
}

void display_scnes(scene_t *scene, rpg_t *rpg)
{
    int i = 0;
    int j = 0;
    int y = 0;

    for (; i < scene->nb_pict; i++) {
        if (scene->pic[i]->hide == false)
            apply_change(scene->pic[i], rpg);
    }
    for (; j < scene->nb_butt; j++) {
        if (scene->buttons[j]->aspect->hide == false)
            apply_change(scene->buttons[j]->aspect, rpg);
    }
    for (; y < scene->nb_text; y++) {
        if (scene->texts[y]->hide == false)
            apply_change_texts(scene->texts[y], rpg);
    }
}
