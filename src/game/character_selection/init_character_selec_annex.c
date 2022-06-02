/*
** EPITECH PROJECT, 2021
** my_defender
** File description:
** my_defender.c
*/

#include "my_rpg.h"

void init_character_selection_background(game_t *game)
{
    game->scenes[1]->pic[0] = malloc(sizeof(gameobj_t));
    game->scenes[1]->pic[0]->pos = (sfVector2f){0, 0};
    game->scenes[1]->pic[0]->rect = (sfIntRect){0, 0, 1920, 1080};
    game->scenes[1]->pic[0]->scale = (sfVector2f){1, 1};
    game->scenes[1]->pic[0]->spr = sfSprite_create();
    game->scenes[1]->pic[0]->txt = sfTexture_createFromFile
    ("assets/character/bckg.png", NULL);
    game->scenes[1]->pic[0]->hide = false;
    game->scenes[1]->pic[1] = malloc(sizeof(gameobj_t));
    game->scenes[1]->pic[1]->pos = (sfVector2f){0, 30};
    game->scenes[1]->pic[1]->rect = (sfIntRect){0, 0, 1920, 1080};
    game->scenes[1]->pic[1]->scale = (sfVector2f){1, 1};
    game->scenes[1]->pic[1]->spr = sfSprite_create();
    game->scenes[1]->pic[1]->txt = sfTexture_createFromFile
    ("assets/character/sheet.png", NULL);
    game->scenes[1]->pic[1]->hide = false;
}


 void init_character_points_annex(game_t *game)
{
    //game->player[1].level = 0;
    game->player[2].strenght = 12;
    game->player[2].speed = 4;
    game->player[2].defense = 8;
    game->player[2].life = 10;
    game->player[2].name = "Antonin";
    //game->player[2].level = 0;
    //game->player[2].xp = 0;
    game->player[3].strenght = 15;
    game->player[3].speed = 9;
    game->player[3].defense = 7;
    game->player[3].life = 8;
    game->player[3].name = "Charles";
    //game->player[3].level = 0;
    //game->player[3].xp = 0;
}

 void init_character_points(game_t *game)
{
    game->player[0].strenght = 10;
    game->player[0].speed = 5;
    game->player[0].defense = 10;
    game->player[0].life = 10;
    game->player[0].name = "Lisa";
    //game->player[0].xp = 0;
    //game->player[0].level = 0;
    game->player[1].strenght = 5;
    game->player[1].speed = 3;
    game->player[1].defense = 11;
    game->player[1].life = 14;
    game->player[1].name = "Leonard";
    //game->player[1].xp = 0;
    init_character_points_annex(game);
}

void init_character_selection_choice_button(game_t *game)
{
    game->scenes[1]->buttons[4] = malloc(sizeof(button_t));
    game->scenes[1]->buttons[4]->aspect = malloc(sizeof(gameobj_t));
    game->scenes[1]->buttons[4]->aspect->pos = (sfVector2f){1020, 820};
    game->scenes[1]->buttons[4]->aspect->rect = (sfIntRect){0, 0, 358, 47};
    game->scenes[1]->buttons[4]->aspect->scale = (sfVector2f){1, 1};
    game->scenes[1]->buttons[4]->aspect->spr = sfSprite_create();
    game->scenes[1]->buttons[4]->aspect->size = (sfVector2f){110, 125};
    game->scenes[1]->buttons[4]->aspect->txt = sfTexture_createFromFile
    ("assets/character/character_select.png", NULL);
    game->scenes[1]->buttons[4]->aspect->hide = true;
    game->nb_char = 0;
}

void init_character_selection_sound(game_t *game)
{
    game->music.sound_buffer = sfSoundBuffer_createFromFile(
    "assets/music/sound/bip.ogg");
    game->music.bip_sound = sfSound_create();
    sfSound_setVolume(game->music.bip_sound, 100);
    sfSound_setBuffer(game->music.bip_sound, game->music.sound_buffer);
}
