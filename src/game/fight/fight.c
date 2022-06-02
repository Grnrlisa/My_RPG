/*
** EPITECH PROJECT, 2021
** B-MUL-200-REN-2-1-myrpg-lisa.garnier
** File description:
** fight.c
*/

#include "my_rpg.h"

static int get_speed(int enm_stat)
{
    int speed = 1;
    int comp = 1;

    for (int i = 0; i != enm_stat; i++, comp++) {
        if (comp == 4) {
            speed++;
            comp = 0;
        }
    }
    return speed;
}

void init_enm(game_t *game, sfIntRect rect, char *txt, char *name)
{
    game->enm.defense = game->enm.level * 4;
    game->enm.life = game->enm.level * 4;
    game->enm.strenght = game->enm.level * 4;
    game->enm.speed = get_speed(game->enm.level);
    game->enm.name = name;
    game->enm.play->scale = (sfVector2f){1.25, 1.25};
    game->enm.play->hide = false;
    game->enm.play->pos = (sfVector2f){1150, 180};
    game->enm.play->rect = rect;
    game->enm.play->spr = sfSprite_create();
    game->enm.play->txt = sfTexture_createFromFile(txt, NULL);
    sfSprite_setScale(game->enm.play->spr, game->enm.play->scale);
    sfSprite_setTexture(game->enm.play->spr, game->enm.play->txt, sfTrue);
    sfSprite_setPosition(game->enm.play->spr, game->enm.play->pos);
    sfSprite_setTextureRect(game->enm.play->spr, game->enm.play->rect);
}

void init_fight_player(game_t *game)
{
    game->play.defense = game->player->defense;
    game->play.life = game->player->life;
    game->play.strenght = game->player->strenght;
    game->play.speed = game->player->speed;
    game->play.name = game->player->name;
    game->play.play->hide = false;
    game->play.play->pos = (sfVector2f){300, 700};
    game->play.play->rect = (sfIntRect){0, 0, 564, 580};
    game->play.play->spr = sfSprite_create();
    game->play.play->txt = sfTexture_createFromFile(get_player(game), NULL);
    sfSprite_setTexture(game->play.play->spr, game->play.play->txt, sfTrue);
    sfSprite_setPosition(game->play.play->spr, game->play.play->pos);
    sfSprite_setTextureRect(game->play.play->spr, game->play.play->rect);
}

void init_fight(game_t *game, int mon)
{
    game->enm.level = rand() % 20;
    init_enm(game, (sfIntRect){0, 0, 360, 360}, "assets/fight/enm1.png",
    "The Mad Wizard");
    init_fight_player(game);
    game->scenes[11]->buttons[0] = init_butt(game->scenes[11]->buttons[0],
    (sfVector2f){100, 600}, "assets/fight/fightbutt.png");
    game->scenes[11]->buttons[1] = init_butt(game->scenes[11]->buttons[0],
    (sfVector2f){270, 600}, "assets/fight/defbutt.png");
    game->scenes[11]->buttons[2] = init_butt(game->scenes[11]->buttons[0],
    (sfVector2f){100, 640}, "assets/fight/restbutt.png");
    game->scenes[11]->buttons[3] = init_butt(game->scenes[11]->buttons[0],
    (sfVector2f){270, 640}, "assets/fight/escapebutt.png");
    game->scenes[11]->texts[0] = init_text(game->scenes[11]->texts[0],
    (sfVector2f){110, 720}, game->play.name);
    game->scenes[11]->texts[1] = init_text(game->scenes[11]->texts[1],
    (sfVector2f){1400, 230}, game->enm.name);
    game->scenes[11]->texts[2] = init_text(game->scenes[11]->texts[2],
    (sfVector2f){1000, 100}, "");
    init_all_fight(game);
}

void is_fight(game_t *game)
{
    int is_fight = 0;

    is_fight = rand() % 100;
    if (is_fight <= 4) {
        sfMusic_pause(game->music.dungeon_music);
        sfMusic_play(game->music.fight_music);
        game->player->play->hide = true;
        sfRenderWindow_clear(game->rpg->wdw, sfBlack);
        game->last_scn = game->nb_scene;
        game->nb_scene = 11;
        game->enm.play = malloc(sizeof(gameobj_t) * 1);
        game->play.play = malloc(sizeof(gameobj_t) * 1);
        game->scenes[11]->buttons = malloc(sizeof(button_t *) * 4);
        game->scenes[11]->texts = malloc(sizeof(texte_t *) * 3);
        game->scenes[11]->pic = malloc(sizeof(gameobj_t *) * 7);
        game->scenes[11]->nb_butt = 4;
        game->scenes[11]->nb_text = 3;
        game->scenes[11]->nb_pict = 7;
        init_fight(game, game->last_scn);
        get_in_fight(game);
    }
}
