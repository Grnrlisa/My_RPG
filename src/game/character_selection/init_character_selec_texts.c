/*
** EPITECH PROJECT, 2021
** my_defender
** File description:
** my_defender.c
*/

#include "my_rpg.h"

void init_character_selection_texts_score_annex(game_t *game)
{
    game->scenes[1]->texts[8] = malloc(sizeof(texte_t));
    game->scenes[1]->texts[8]->text = sfText_create();
    game->scenes[1]->texts[8]->font = sfFont_createFromFile
    ("assets/font/takhisis.otf");
    game->scenes[1]->texts[8]->size = 17;
    game->scenes[1]->texts[8]->content = " ";
    game->scenes[1]->texts[8]->color = sfColor_fromRGB(217, 130, 30);
    game->scenes[1]->texts[8]->pos = (sfVector2f){1170, 669};
    game->scenes[1]->texts[8]->hide = false;
    game->scenes[1]->texts[9] = malloc(sizeof(texte_t));
    game->scenes[1]->texts[9]->text = sfText_create();
    game->scenes[1]->texts[9]->font = sfFont_createFromFile
    ("assets/font/takhisis.otf");
    game->scenes[1]->texts[9]->size = 17;
    game->scenes[1]->texts[9]->content = " ";
    game->scenes[1]->texts[9]->color = sfColor_fromRGB(217, 130, 30);
    game->scenes[1]->texts[9]->pos = (sfVector2f){1170, 699};
    game->scenes[1]->texts[9]->hide = false;
}

void init_character_selection_texts_score(game_t *game)
{
    game->scenes[1]->texts[6] = malloc(sizeof(texte_t));
    game->scenes[1]->texts[6]->text = sfText_create();
    game->scenes[1]->texts[6]->font = sfFont_createFromFile
    ("assets/font/takhisis.otf");
    game->scenes[1]->texts[6]->size = 17;
    game->scenes[1]->texts[6]->content = " ";
    game->scenes[1]->texts[6]->color = sfColor_fromRGB(217, 130, 30);
    game->scenes[1]->texts[6]->pos = (sfVector2f){1170, 609};
    game->scenes[1]->texts[6]->hide = false;
    game->scenes[1]->texts[7] = malloc(sizeof(texte_t));
    game->scenes[1]->texts[7]->text = sfText_create();
    game->scenes[1]->texts[7]->font = sfFont_createFromFile
    ("assets/font/takhisis.otf");
    game->scenes[1]->texts[7]->size = 17;
    game->scenes[1]->texts[7]->content = " ";
    game->scenes[1]->texts[7]->color = sfColor_fromRGB(217, 130, 30);
    game->scenes[1]->texts[7]->pos = (sfVector2f){1170, 639};
    game->scenes[1]->texts[7]->hide = false;
    init_character_selection_texts_score_annex(game);
}

void init_character_selection_texts_points_annex(game_t *game)
{
    game->scenes[1]->texts[4] = malloc(sizeof(texte_t));
    game->scenes[1]->texts[4]->text = sfText_create();
    game->scenes[1]->texts[4]->font = sfFont_createFromFile
    ("assets/font/takhisis.otf");
    game->scenes[1]->texts[4]->size = 17;
    game->scenes[1]->texts[4]->content = "strenght :";
    game->scenes[1]->texts[4]->color = sfColor_fromRGB(217, 130, 30);
    game->scenes[1]->texts[4]->pos = (sfVector2f){970, 670};
    game->scenes[1]->texts[4]->hide = true;
    game->scenes[1]->texts[5] = malloc(sizeof(texte_t));
    game->scenes[1]->texts[5]->text = sfText_create();
    game->scenes[1]->texts[5]->font = sfFont_createFromFile
    ("assets/font/takhisis.otf");
    game->scenes[1]->texts[5]->size = 17;
    game->scenes[1]->texts[5]->content = "defense :";
    game->scenes[1]->texts[5]->color = sfColor_fromRGB(217, 130, 30);
    game->scenes[1]->texts[5]->pos = (sfVector2f){970, 700};
    game->scenes[1]->texts[5]->hide = true;
    init_character_selection_texts_score(game);
}

void init_character_selection_texts_points(game_t *game)
{
    game->scenes[1]->texts[2] = malloc(sizeof(texte_t));
    game->scenes[1]->texts[2]->hide = true;
    game->scenes[1]->texts[2]->text = sfText_create();
    game->scenes[1]->texts[2]->font = sfFont_createFromFile
    ("assets/font/takhisis.otf");
    game->scenes[1]->texts[2]->size = 17;
    game->scenes[1]->texts[2]->content = "life points :";
    game->scenes[1]->texts[2]->color = sfColor_fromRGB(217, 130, 30);
    game->scenes[1]->texts[2]->pos = (sfVector2f){970, 610};
    game->scenes[1]->texts[3] = malloc(sizeof(texte_t));
    game->scenes[1]->texts[3]->text = sfText_create();
    game->scenes[1]->texts[3]->font = sfFont_createFromFile
    ("assets/font/takhisis.otf");
    game->scenes[1]->texts[3]->size = 17;
    game->scenes[1]->texts[3]->content = "speed :";
    game->scenes[1]->texts[3]->color = sfColor_fromRGB(217, 130, 30);
    game->scenes[1]->texts[3]->pos = (sfVector2f){970, 640};
    game->scenes[1]->texts[3]->hide = true;
    init_character_selection_texts_points_annex(game);
}

void init_character_selection_texts(game_t *game)
{
    game->scenes[1]->texts[0] = malloc(sizeof(texte_t));
    game->scenes[1]->texts[0]->text = sfText_create();
    game->scenes[1]->texts[0]->font = sfFont_createFromFile
    ("assets/font/takhisis.otf");
    game->scenes[1]->texts[0]->size = 40;
    game->scenes[1]->texts[0]->color = sfColor_fromRGB(217, 130, 30);
    game->scenes[1]->texts[0]->pos = (sfVector2f){950, 474};
    game->scenes[1]->texts[0]->content = " ";
    game->scenes[1]->texts[0]->hide = true;
    game->scenes[1]->texts[1] = malloc(sizeof(texte_t));
    game->scenes[1]->texts[1]->text = sfText_create();
    game->scenes[1]->texts[1]->font = sfFont_createFromFile
    ("assets/font/takhisis.otf");
    game->scenes[1]->texts[1]->size = 15;
    game->scenes[1]->texts[1]->content = " ";
    game->scenes[1]->texts[1]->color = sfColor_fromRGB(217, 130, 30);
    game->scenes[1]->texts[1]->pos = (sfVector2f){950, 530};
    game->scenes[1]->texts[1]->hide = false;
    init_character_selection_texts_points(game);
}
