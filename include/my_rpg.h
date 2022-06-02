/*
** EPITECH PROJECT, 2021
** my_rpg
** File description:
** my_rpg.h
*/

#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <SFML/Audio.h>
#include <SFML/Audio/SoundStatus.h>
#include <SFML/Audio/Types.h>
#include <SFML/System/InputStream.h>
#include <SFML/System/Time.h>
#include <SFML/System/Vector3.h>
#include <stddef.h>
#include <sys/stat.h>
#include "assets.h"
#include <stdbool.h>
#pragma once

#define PARAM (sfResize | sfFullscreen)
#define PARAM_2 (sfResize | sfDefaultStyle)

// DANS CE .H, UNIQUEMENT LES PROTO DE FONCTIONS

// LIB FCT ///
int my_strlen(char const *str);
char *my_itoa(int nb);

void display_scnes(scene_t *scene, rpg_t *rpg);
void display_player(game_t *game, rpg_t *rpg);
void analyze_events(game_t *game);
void init_all(game_t *game, s_mus_t *music);
void init_sound(game_t *game, s_mus_t *music);

game_t *malloc_game(void);

void paralax_back(game_t *game);
void init_menu_settbutton(game_t *game);
void init_menu_quitbutton(game_t *game);
void init_menu_background(game_t *game);
void init_sett_background(game_t *game);
void init_sett_menu(game_t *game);
void init_sett_butts(game_t *game);
int butt_clicked(sfVector2f pos , sfVector2f size, rpg_t *rpg);
int mouse_on_butt(sfVector2f pos , sfVector2f size, rpg_t *rpg);
int player_on_area(gameobj_t *player, gameobj_t *area, int scale);
void analyse_event_menu(game_t *game);
void analyse_setting(game_t *game);
void disable_butt(game_t *game, button_t *b);
void enable_butt(game_t *game, button_t *b);
void go_to_menu(game_t *game, button_t *b);

void init_pause(game_t *game);
void init_how_to_play(game_t *game);
void init_pause_htp(game_t *game);
void event_how_to_play(game_t *game);

void init_spawn(game_t *game);
void event_spawn(game_t *game);
void init_shop_png(scene_t *scenes);
void init_pnj_icon(scene_t *scenes);
void init_pnj_dialogs(scene_t *scenes);
void pnj_dialogs(game_t *game);
void player_wake_up(game_t *game);

void event_inventory(game_t *game);
void init_inventory(game_t *game);
void display_inventory(game_t *game);
void init_inventory_objects(game_t *game);

void init_room_mid(game_t *game);
void event_room_mid(game_t *game);

void init_room_l(game_t *game);
void event_room_l(game_t *game);

void init_room_r(game_t *game);
void event_room_r(game_t *game);

void init_room_boss(game_t *game);
void event_room_boss(game_t *game);

void move_player(game_t *game);
void init_player(game_t *game, char *sprt, char *name);

void init_character_selection(game_t *game);
void init_character_selection_background(game_t *game);
void init_character_points(game_t *game);
void init_character_selection_texts(game_t *game);
void init_character_selection_choice_button(game_t *game);
void init_character_selection_sound(game_t *game);
void events_character_selection(game_t *game);
void events_character_selection_annex(game_t *game);

void init_introduction_scenes(game_t *game);
void events_intro_1(game_t *game);
void events_intro_2(game_t *game);
void clock_texts(game_t *game);
void texts_animation(game_t *game);
void texts_animation_2(game_t *game);
void clock_texts(game_t *game);
void init_intro_2_bckg(game_t *game);
void init_intro_2_texts(game_t *game);
void bkg_intro_animation(game_t *game);
void init_intro_2_bckg_annex(game_t *game);

void clock_texts_2(game_t *game);
void clock_walk(game_t *game);
void clock_pause(game_t *game);
void redi_player(game_t *game);
void clock_wake_up(game_t *game);

void put_pixel(sfUint8 *pixel_screen, int x, int y, int opa, int color);
void clear_pixel(sfUint8 *pixel_screen);
void show_move(game_t *game, int add_x, int add_y);

void init_slot(game_t *game);
int disp_inv(game_t *game, int y);
void disp_slot(game_t *game);
void display_inventory_texts(game_t *game, int y);
void scroll_text_annex(game_t *game);

void is_fight(game_t *game);
void event_move(game_t *game);
void is_click_slot(game_t *game, int x, int y);

void events_pause(game_t *game);
void get_in_fight(game_t *game);
void init_pause_gomenu(game_t *game);
void init_character_selection_buttons_annex_suit(game_t *game);

int my_strcomp(char *str, char *comp);

void init_inventory_I_texts(game_t *game);
void init_inventory_II_texts(game_t *game);
void init_inventory_III_texts(game_t *game);
void init_inventory_IV_texts(game_t *game);
void init_inventory_V_texts(game_t *game);
gameobj_t *init_pic_f(gameobj_t *pic, sfVector2f ps, sfIntRect rct, char *spr);

texte_t *init_text(texte_t *txt, sfVector2f pos, char *str);
void annex_init_inventory(game_t *game);
char *get_player(game_t *game);
button_t *init_butt(button_t *butt, sfVector2f pos, char *txtr);
void init_end_scenes(game_t *game);
void events_end_scenes(game_t *game);
void end_animation(game_t *game);
void clock_end(game_t *game);
void clock_end_2(game_t *game);
void clock_end_3(game_t *game);
void init_all_fight(game_t *game);
void disp_fight_player(game_t *game);

void action_def(game_t *game);
void action_rest(game_t *game);
void action_atk(game_t *game);
void action_escape(game_t *game);
