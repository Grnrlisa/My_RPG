/*
** EPITECH PROJECT, 2021
** B-MUL-200-REN-2-1-myrpg-lisa.garnier
** File description:
** init_fight.c
*/

#include "my_rpg.h"

button_t *init_butt(button_t *butt, sfVector2f pos, char *txtr)
{
    butt = malloc(sizeof(button_t));
    butt->aspect = malloc(sizeof(gameobj_t));
    butt->aspect->hide = false;
    butt->aspect->scale = (sfVector2f){1, 1};
    butt->aspect->pos = pos;
    butt->aspect->rect = (sfIntRect){0, 0, 170, 50};
    butt->aspect->spr = sfSprite_create();
    butt->aspect->txt = sfTexture_createFromFile(txtr, NULL);
    butt->aspect->size = (sfVector2f){170, 150};
    return butt;
}

texte_t *init_text(texte_t *txt, sfVector2f pos, char *str)
{
    txt = malloc(sizeof(texte_t));
    txt->hide = false;
    txt->content = str;
    txt->font = sfFont_createFromFile("assets/font/takhisis.otf");
    txt->pos = pos;
    txt->text = sfText_create();
    txt->color = sfColor_fromRGB(217, 130, 30);
    txt->size = 40;
    return txt;
}

gameobj_t *init_pic_f(gameobj_t *pic, sfVector2f ps, sfIntRect rct, char *spr)
{
    pic = malloc(sizeof(gameobj_t));
    pic->hide = false;
    pic->pos = ps;
    pic->spr = sfSprite_create();
    pic->txt = sfTexture_createFromFile(spr, NULL);
    pic->rect = rct;
    pic->scale = (sfVector2f){1, 1};
    return pic;
}

char *get_player(game_t *game)
{
    if (my_strcomp(game->player->name, "Charles"))
        return "assets/fight/charl_fight.png";
    if (my_strcomp(game->player->name, "Leo"))
        return "assets/fight/leo_fight.png";
    if (my_strcomp(game->player->name, "Lisa"))
        return "assets/fight/lisa_fight.png";
    if (my_strcomp(game->player->name, "Antonin"))
        return "assets/fight/ant_fight.png";
    return 0;
}

void init_all_fight(game_t *gme)
{
    gme->scenes[11]->pic[0] = init_pic_f(gme->scenes[11]->pic[0], (sfVector2f)
    {0, 0}, (sfIntRect){0, 0, 1920, 1080}, "assets/fight/scene.png");
    gme->scenes[11]->pic[1] = init_pic_f(gme->scenes[11]->pic[1], (sfVector2f)
    {90, 680}, (sfIntRect){0, 0, 367, 48}, "assets/fight/lifebar_empty.png");
    gme->scenes[11]->pic[2] = init_pic_f(gme->scenes[11]->pic[2], (sfVector2f)
    {90, 680}, (sfIntRect){0, 0, 367, 48}, "assets/fight/lifebar_full.png");
    gme->scenes[11]->pic[3] = init_pic_f(gme->scenes[11]->pic[3], (sfVector2f)
    {1400, 300}, (sfIntRect){0, 0, 367, 48}, "assets/fight/lifebar_empty.png");
    gme->scenes[11]->pic[4] = init_pic_f(gme->scenes[11]->pic[4], (sfVector2f)
    {1400, 300}, (sfIntRect){0, 0, 367, 48}, "assets/fight/lifebar_full.png");
    gme->scenes[11]->pic[5] = init_pic_f(gme->scenes[11]->pic[5], (sfVector2f)
    {975, 575}, (sfIntRect){0, 0, 948, 221}, "assets/fight/first_plan.png");
    gme->scenes[11]->pic[6] = init_pic_f(gme->scenes[11]->pic[6], (sfVector2f)
    {900, 850}, (sfIntRect){0, 0, 1009, 219}, "assets/fight/fight_txtbox.png");
}