/*
** EPITECH PROJECT, 2022
** annex_init_inventory.c
** File description:
** init the inventory annex
*/

#include "my_rpg.h"

void init_inventory_I_texts(game_t *game)
{
    game->rpg->inv->nb_texts = 11;
    game->rpg->inv->texts[0] = malloc(sizeof(texte_t));
    game->rpg->inv->texts[0]->hide = true;
    game->rpg->inv->texts[0]->text = sfText_create();
    game->rpg->inv->texts[0]->font = sfFont_createFromFile
    ("assets/font/takhisis.otf");
    game->rpg->inv->texts[0]->size = 17;
    game->rpg->inv->texts[0]->content = "object name";
    game->rpg->inv->texts[0]->color = sfColor_fromRGB(217, 130, 30);
    game->rpg->inv->texts[0]->pos = (sfVector2f){420, 380};
    game->rpg->inv->texts[1] = malloc(sizeof(texte_t));
    game->rpg->inv->texts[1]->hide = true;
    game->rpg->inv->texts[1]->text = sfText_create();
    game->rpg->inv->texts[1]->font = sfFont_createFromFile
    ("assets/font/takhisis.otf");
    game->rpg->inv->texts[1]->size = 17;
    game->rpg->inv->texts[1]->color = sfColor_fromRGB(217, 130, 30);
    game->rpg->inv->texts[2] = malloc(sizeof(texte_t));
    game->rpg->inv->texts[2]->hide = true;
    game->rpg->inv->texts[2]->text = sfText_create();
}

void init_inventory_II_texts(game_t *game)
{
    game->rpg->inv->texts[2]->font = sfFont_createFromFile
    ("assets/font/takhisis.otf");
    game->rpg->inv->texts[2]->size = 17;
    game->rpg->inv->texts[2]->content = " - level 1";
    game->rpg->inv->texts[2]->color = sfColor_fromRGB(217, 130, 30);
    game->rpg->inv->texts[2]->pos = (sfVector2f){1260, 580};
    game->rpg->inv->texts[2]->pos = (sfVector2f){1260, 600};
    game->rpg->inv->texts[3] = malloc(sizeof(texte_t));
    game->rpg->inv->texts[3]->hide = true;
    game->rpg->inv->texts[3]->text = sfText_create();
    game->rpg->inv->texts[3]->font = sfFont_createFromFile
    ("assets/font/takhisis.otf");
    game->rpg->inv->texts[3]->size = 15;
    game->rpg->inv->texts[3]->content = "life points :";
    game->rpg->inv->texts[3]->color = sfColor_fromRGB(217, 130, 30);
    game->rpg->inv->texts[3]->pos = (sfVector2f){1170, 655};
    game->rpg->inv->texts[4] = malloc(sizeof(texte_t));
    game->rpg->inv->texts[4]->text = sfText_create();
    game->rpg->inv->texts[4]->font = sfFont_createFromFile
    ("assets/font/takhisis.otf");
}

void init_inventory_III_texts(game_t *game)
{
    game->rpg->inv->texts[4]->size = 15;
    game->rpg->inv->texts[4]->content = "speed :";
    game->rpg->inv->texts[4]->color = sfColor_fromRGB(217, 130, 30);
    game->rpg->inv->texts[4]->pos = (sfVector2f){1170, 675};
    game->rpg->inv->texts[4]->hide = true;
    game->rpg->inv->texts[5] = malloc(sizeof(texte_t));
    game->rpg->inv->texts[5]->text = sfText_create();
    game->rpg->inv->texts[5]->font = sfFont_createFromFile
    ("assets/font/takhisis.otf");
    game->rpg->inv->texts[5]->size = 15;
    game->rpg->inv->texts[5]->content = "strenght :";
    game->rpg->inv->texts[5]->color = sfColor_fromRGB(217, 130, 30);
    game->rpg->inv->texts[5]->pos = (sfVector2f){1170, 695};
    game->rpg->inv->texts[5]->hide = true;
    game->rpg->inv->texts[6] = malloc(sizeof(texte_t));
    game->rpg->inv->texts[6]->text = sfText_create();
    game->rpg->inv->texts[6]->font = sfFont_createFromFile
    ("assets/font/takhisis.otf");
    game->rpg->inv->texts[6]->size = 15;
    game->rpg->inv->texts[6]->content = "defense :";
}

void init_inventory_IV_texts(game_t *game)
{
    game->rpg->inv->texts[6]->color = sfColor_fromRGB(217, 130, 30);
    game->rpg->inv->texts[6]->pos = (sfVector2f){1170, 715};
    game->rpg->inv->texts[6]->hide = true;
    game->rpg->inv->texts[7] = malloc(sizeof(texte_t));
    game->rpg->inv->texts[7]->text = sfText_create();
    game->rpg->inv->texts[7]->font = sfFont_createFromFile
    ("assets/font/takhisis.otf");
    game->rpg->inv->texts[7]->size = 17;
    game->rpg->inv->texts[7]->content =
    my_itoa(game->player[game->nb_char].life);
    game->rpg->inv->texts[7]->color = sfColor_fromRGB(217, 130, 30);
    game->rpg->inv->texts[7]->pos = (sfVector2f){1350, 655};
    game->rpg->inv->texts[7]->hide = false;
    game->rpg->inv->texts[8] = malloc(sizeof(texte_t));
    game->rpg->inv->texts[8]->text = sfText_create();
    game->rpg->inv->texts[8]->font = sfFont_createFromFile
    ("assets/font/takhisis.otf");
    game->rpg->inv->texts[8]->size = 17;
    game->rpg->inv->texts[8]->content =
    my_itoa(game->player[game->nb_char].speed);
}

void init_inventory_V_texts(game_t *game)
{
    game->rpg->inv->texts[8]->color = sfColor_fromRGB(217, 130, 30);
    game->rpg->inv->texts[8]->pos = (sfVector2f){1350, 675};
    game->rpg->inv->texts[8]->hide = false;
    game->rpg->inv->texts[9] = malloc(sizeof(texte_t));
    game->rpg->inv->texts[9]->text = sfText_create();
    game->rpg->inv->texts[9]->font = sfFont_createFromFile
    ("assets/font/takhisis.otf");
    game->rpg->inv->texts[9]->size = 17;
    game->rpg->inv->texts[9]->content =
    my_itoa(game->player[game->nb_char].strenght);
    game->rpg->inv->texts[9]->color = sfColor_fromRGB(217, 130, 30);
    game->rpg->inv->texts[9]->pos = (sfVector2f){1350, 695};
    game->rpg->inv->texts[9]->hide = false;
    game->rpg->inv->texts[10] = malloc(sizeof(texte_t));
    game->rpg->inv->texts[10]->text = sfText_create();
    game->rpg->inv->texts[10]->font = sfFont_createFromFile
    ("assets/font/takhisis.otf");
    game->rpg->inv->texts[10]->size = 17;
    game->rpg->inv->texts[10]->content =
    my_itoa(game->player[game->nb_char].defense);
}
