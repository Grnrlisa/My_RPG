/*
** EPITECH PROJECT, 2021
** analyse event
** File description:
** my_rpg.c
*/

#include "my_rpg.h"

int player_on_area(gameobj_t *player, gameobj_t *area, int scale)
{
    int p_x = player->pos.x;
    int p_y = player->pos.y;
    int p_recx = player->rect.width * scale;
    int p_recy = player->rect.height * scale;
    int a_x = area->pos.x;
    int a_y = area->pos.y;

    if ((a_x > (p_x - p_recx) && a_x < (p_x + p_recx)) &&
    (a_y > (p_y - p_recy) && a_y < (p_y + p_recy)))
        return 1;
    return 0;
}

int mouse_on_butt(sfVector2f pos , sfVector2f size, rpg_t *rpg)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(rpg->wdw);
    int x = pos.x;
    int y = pos.y;
    int size_x = size.x;
    int size_y = size.y;

    if (mouse.x > x && mouse.x < x + size_x) {
        if (mouse.y > y && mouse.y < y + size_y)
            return 1;
    }
    return 0;
}

int butt_clicked(sfVector2f pos , sfVector2f size, rpg_t *r)
{
    int x = pos.x;
    int y = pos.y;
    int size_x = size.x;
    int size_y = size.y;

    if (r->event.type == sfEvtMouseButtonPressed &&
    (r->event.mouseButton.x > x && r->event.mouseButton.x < x + size_x)) {
        if (r->event.mouseButton.y > y && r->event.mouseButton.y < y + size_y)
            return 1;
    }
    return 0;
}

static void analyze_events_next(game_t *game)
{
    if (game->nb_scene == 1) {
        events_character_selection(game);
        events_character_selection_annex(game);
    }
    if (game->nb_scene == 2)
        events_intro_1(game);
    if (game->nb_scene == 3)
        events_intro_2(game);
    if (game->nb_scene >= 4 && game->nb_scene != 6
    && game->nb_scene != 12)
        event_inventory(game);
    if (game->nb_scene == 12)
        event_how_to_play(game);
    if(game->nb_scene == 13)
        events_end_scenes(game);
}

void analyze_events(game_t *game)
{
    if (game->nb_scene == 0 || game->nb_scene == 6)
        analyse_event_menu(game);
    if (game->rpg->event.type == sfEvtClosed) {
        sfRenderWindow_close(game->rpg->wdw);
    }
    if ((game->nb_scene >= 4 && game->nb_scene != 6 && game->nb_scene != 12) &&
    sfKeyboard_isKeyPressed(sfKeyEscape) && game->nb_scene != 5) {
        game->last_scn = game->nb_scene;
        game->nb_scene = 5;
    }
    analyze_events_next(game);
}
