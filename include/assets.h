/*
** EPITECH PROJECT, 2021
** rpg
** File description:
** assets.h
*/

#include "ui.h"
#include <stdbool.h>
#pragma once

// STRUCTURES D'ASSETS

typedef struct gameobj_t {
    sfTexture *txt;
    sfSprite *spr;
    sfVector2f pos;
    sfIntRect rect;
    sfVector2f scale;
    sfVector2f size;
    bool hide;
} gameobj_t;

typedef struct button_t {
    struct gameobj_t *aspect;
    void (*fct)(void *);
} button_t;

typedef struct texte_t {
    sfText *text;
    int size;
    sfFont *font;
    sfVector2f pos;
    sfColor color;
    char *content;
    bool hide;
} texte_t;

typedef struct scene_t {
    struct gameobj_t **pic;
    struct button_t **buttons;
    struct texte_t **texts;
    int nb_pict;
    int nb_butt;
    int nb_text;
} scene_t;

enum scenes{
    MENU,
    CHAR_SELEC,
    INTRO_1,
    INTRO_2,
    GAME,
    PAUSE,
    SETT_MENU,
    ROOM_MID,
    ROOM_L,
    ROOM_R,
    BOSS,
    FIGHT,
    HOW_TO_PLAY,
    END,
    SIZE
};

enum players{
    LISA,
    LEO,
    ANTONIN,
    CHARLES
};

typedef struct player_t {
    int strenght;
    int speed;
    int life;
    int level;
    //int xp;
    int defense;
    char *name;
    gameobj_t *play;
} player_t;

typedef struct clock_struct {
    sfClock *clock;
    sfTime time;
    float sec;
} s_clock;

    // jsp si je fous des stat genre si ca heal et tous on vera ca
typedef struct item_struct {
    sfSprite *spr;
    sfTexture *txtr;
    sfVector2f pos;
} item;

typedef struct inv_slot {
    sfSprite *spr;
    sfTexture *txtr;
    sfVector2f pos;
    sfIntRect rect;
    int is_empty;
    item item;
} s_slot;

typedef struct iventory_struct {
    sfTexture *txt_bk;
    sfSprite *spr_bk;
    sfTexture *txt_ic;
    sfSprite *spr_ic;
    sfVector2f pos_ic;
    sfVector2f scale_ic;
    bool hide;
    int visible;
    char *icon_path;
    struct button_t *butt;
    struct texte_t **texts;
    int nb_texts;
    s_slot **slot;
    gameobj_t *itm;
} inv_t;

typedef struct rpg_t {
    sfRenderWindow *wdw;
    sfVideoMode mode;
    sfEvent event;
    int text_check;
    inv_t *inv;
    int inv_check;
} rpg_t;

typedef struct sound_music {
    sfMusic *intro_music;
    sfMusic *menu_music;
    sfSound *bip_sound;
    sfMusic *game_over_music;
    sfMusic *fight_music;
    sfMusic *boss_music;
    sfMusic *dungeon_music;
    sfSoundBuffer *sound_buffer;
} s_mus_t;

typedef struct game_t {
    s_clock *timer;
    struct scene_t **scenes;
    struct player_t *player;
    int nb_scene;
    int last_scn;
    int nb_char;
    int check;
    int is_game;
    s_mus_t music;
    rpg_t *rpg;
    struct player_t play;
    struct player_t enm;
    bool victory;
} game_t;