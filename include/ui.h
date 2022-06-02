/*
** EPITECH PROJECT, 2021
** my_rpg
** File description:
** ui.h
*/

#pragma once

// DECLARATION DES STRUCTURES LIEES A L'UI

typedef struct param_opt {
    sfTexture *tx;
    sfSprite *spr;
    sfVector2f pos;
    sfIntRect rect;
} param_opt;

typedef struct opt {
    param_opt bar_1;
    param_opt bar_2;
    param_opt curs;
    param_opt vol;
    param_opt back;
    param_opt plus;
    param_opt less;
    param_opt change;
    param_opt opt_1;
    param_opt opt_2;
} opt_t;
