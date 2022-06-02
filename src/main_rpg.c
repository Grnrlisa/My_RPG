/*
** EPITECH PROJECT, 2021
** my_defender
** File description:
** my_defender.c
*/

#include "my_rpg.h"

void init_wdw(game_t *game)
{
    game->rpg->mode.width = 1920;
    game->rpg->mode.height = 1080;
    game->rpg->mode.bitsPerPixel = 32;
    game->rpg->text_check = 0;
    game->rpg->wdw = sfRenderWindow_create(game->rpg->mode, "my rpg",
        PARAM, NULL);
    sfRenderWindow_setFramerateLimit(game->rpg->wdw, 30);
}

void launch_all_animations(game_t *game)
{
    paralax_back(game);
    if (game->nb_scene == 2)
        texts_animation(game);
    if (game->nb_scene == 3) {
        bkg_intro_animation(game);
        texts_animation_2(game);
    }
    if (game->nb_scene == 5)
        events_pause(game);
    if (game->nb_scene == 13) {
        end_animation(game);
    } if (game->nb_scene == 4) {
        player_wake_up(game);
        if (player_on_area(game->player->play,
        game->scenes[4]->buttons[0]->aspect, 1) == 1)
            scroll_text(game);
    }
}

void launch_game(game_t *game)
{
    sfMusic_play(game->music.menu_music);
    while (sfRenderWindow_isOpen(game->rpg->wdw)) {
        launch_all_animations(game);
        sfRenderWindow_clear(game->rpg->wdw, sfBlack);
        display_scnes(game->scenes[game->nb_scene], game->rpg);
        display_player(game, game->rpg);
        display_inventory(game);
        event_move(game);
        while (sfRenderWindow_pollEvent(game->rpg->wdw, &game->rpg->event)) {
            analyze_events(game);
        }
        sfRenderWindow_display(game->rpg->wdw);
    }
    sfSound_destroy(game->music.bip_sound);
    sfMusic_destroy(game->music.intro_music);
    sfMusic_destroy(game->music.menu_music);
    sfMusic_destroy(game->music.dungeon_music);
    sfMusic_destroy(game->music.game_over_music);
    sfMusic_destroy(game->music.fight_music);
    sfMusic_destroy(game->music.boss_music);
    sfSoundBuffer_destroy(game->music.sound_buffer);
}

int main(void)
{
    game_t *game = malloc_game();
    s_mus_t music;
    game->rpg = malloc(sizeof(rpg_t));
    game->rpg->inv = malloc(sizeof(inv_t));
    game->rpg->inv_check = 0;
    game->nb_scene = 0;
    game->victory = false;
    game->player->play = NULL;

    init_wdw(game);
    init_all(game, &music);
    launch_game(game);
}
