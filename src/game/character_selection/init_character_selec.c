/*
** EPITECH PROJECT, 2021
** my_defender
** File description:
** my_defender.c
*/

#include "my_rpg.h"

void init_character_selection_icon_annex(game_t *game)
{
    game->scenes[1]->pic[3]->hide = true;
    game->scenes[1]->pic[4] = malloc(sizeof(gameobj_t));
    game->scenes[1]->pic[4]->pos = (sfVector2f){530, 450};
    game->scenes[1]->pic[4]->rect = (sfIntRect){0, 0, 370, 370};
    game->scenes[1]->pic[4]->scale = (sfVector2f){1, 1};
    game->scenes[1]->pic[4]->spr = sfSprite_create();
    game->scenes[1]->pic[4]->txt = sfTexture_createFromFile
    ("assets/character/leo_ic.png", NULL);
    game->scenes[1]->pic[4]->hide = true;
    game->scenes[1]->pic[5] = malloc(sizeof(gameobj_t));
    game->scenes[1]->pic[5]->pos = (sfVector2f){530, 450};
    game->scenes[1]->pic[5]->rect = (sfIntRect){0, 0, 370, 370};
    game->scenes[1]->pic[5]->scale = (sfVector2f){1, 1};
    game->scenes[1]->pic[5]->spr = sfSprite_create();
    game->scenes[1]->pic[5]->txt = sfTexture_createFromFile
    ("assets/character/charl_ic.png", NULL);
    game->scenes[1]->pic[5]->hide = true;
}

void init_character_selection_icon(game_t *game)
{
    game->scenes[1]->pic[2] = malloc(sizeof(gameobj_t));
    game->scenes[1]->pic[2]->pos = (sfVector2f){530, 450};
    game->scenes[1]->pic[2]->rect = (sfIntRect){0, 0, 370, 370};
    game->scenes[1]->pic[2]->scale = (sfVector2f){1, 1};
    game->scenes[1]->pic[2]->spr = sfSprite_create();
    game->scenes[1]->pic[2]->txt = sfTexture_createFromFile
    ("assets/character/lisa_ic.png", NULL);
    game->scenes[1]->pic[2]->hide = true;
    game->scenes[1]->pic[3] = malloc(sizeof(gameobj_t));
    game->scenes[1]->pic[3]->pos = (sfVector2f){530, 450};
    game->scenes[1]->pic[3]->rect = (sfIntRect){0, 0, 370, 370};
    game->scenes[1]->pic[3]->scale = (sfVector2f){1, 1};
    game->scenes[1]->pic[3]->spr = sfSprite_create();
    game->scenes[1]->pic[3]->txt = sfTexture_createFromFile
    ("assets/character/ant_ic.png", NULL);
    init_character_selection_icon_annex(game);
}

void init_character_selection_buttons_annex(game_t *game)
{
    game->scenes[1]->buttons[1]->aspect->hide = false;
    game->scenes[1]->buttons[2] = malloc(sizeof(button_t));
    game->scenes[1]->buttons[2]->aspect = malloc(sizeof(gameobj_t));
    game->scenes[1]->buttons[2]->aspect->pos = (sfVector2f){1000, 150};
    game->scenes[1]->buttons[2]->aspect->rect = (sfIntRect){0, 0, 110, 125};
    game->scenes[1]->buttons[2]->aspect->scale = (sfVector2f){1, 1};
    game->scenes[1]->buttons[2]->aspect->spr = sfSprite_create();
    game->scenes[1]->buttons[2]->aspect->size = (sfVector2f){110, 125};
    game->scenes[1]->buttons[2]->aspect->txt = sfTexture_createFromFile
    ("assets/character/ant_selec.png", NULL);
}

void init_character_selection_buttons(game_t *game)
{
    game->scenes[1]->buttons[0] = malloc(sizeof(button_t));
    game->scenes[1]->buttons[0]->aspect = malloc(sizeof(gameobj_t));
    game->scenes[1]->buttons[0]->aspect->pos = (sfVector2f){600, 150};
    game->scenes[1]->buttons[0]->aspect->rect = (sfIntRect){0, 0, 110, 125};
    game->scenes[1]->buttons[0]->aspect->scale = (sfVector2f){1, 1};
    game->scenes[1]->buttons[0]->aspect->spr = sfSprite_create();
    game->scenes[1]->buttons[0]->aspect->size = (sfVector2f){110, 125};
    game->scenes[1]->buttons[0]->aspect->txt = sfTexture_createFromFile
    ("assets/character/lisa_selec.png", NULL);
    game->scenes[1]->buttons[0]->aspect->hide = false;
    game->scenes[1]->buttons[1] = malloc(sizeof(button_t));
    game->scenes[1]->buttons[1]->aspect = malloc(sizeof(gameobj_t));
    game->scenes[1]->buttons[1]->aspect->pos = (sfVector2f){800, 150};
    game->scenes[1]->buttons[1]->aspect->rect = (sfIntRect){0, 0, 110, 125};
    game->scenes[1]->buttons[1]->aspect->scale = (sfVector2f){1, 1};
    game->scenes[1]->buttons[1]->aspect->spr = sfSprite_create();
    game->scenes[1]->buttons[1]->aspect->size = (sfVector2f){110, 125};
    game->scenes[1]->buttons[1]->aspect->txt = sfTexture_createFromFile
    ("assets/character/leo_selec.png", NULL);
    init_character_selection_buttons_annex(game);
}

void init_character_selection(game_t *game)
{
    game->scenes[1]->pic = malloc(sizeof(gameobj_t *) * 6);
    game->scenes[1]->buttons = malloc(sizeof(button_t *) * 5);
    game->scenes[1]->texts = malloc(sizeof(texte_t *) * 10);
    init_character_selection_background(game);
    init_character_selection_icon(game);
    init_character_selection_buttons(game);
    init_character_selection_choice_button(game);
    init_character_selection_buttons_annex_suit(game);
    init_character_points(game);
    init_character_selection_texts(game);
    init_character_selection_sound(game);
    game->scenes[1]->nb_pict = 6;
    game->scenes[1]->nb_butt = 5;
    game->scenes[1]->nb_text = 10;
}
