/*
** EPITECH PROJECT, 2021
** analyse event
** File description:
** my_rpg.c
*/

#include "my_rpg.h"

sfMusic *menu_music_create(void)
{
    sfMusic *loop_sound;

    loop_sound = sfMusic_createFromFile("assets/music/menu_mus.ogg");
    sfMusic_setLoop(loop_sound, sfTrue);
    return (loop_sound);
}

sfMusic *intro_music_create(void)
{
    sfMusic *loop_sound;

    loop_sound = sfMusic_createFromFile("assets/music/intro_mus.ogg");
    sfMusic_setLoop(loop_sound, sfTrue);
    return (loop_sound);
}

sfMusic *game_over_music_create(void)
{
    sfMusic *loop_sound;

    loop_sound = sfMusic_createFromFile("assets/music/end_song.ogg");
    sfMusic_setLoop(loop_sound, sfTrue);
    return (loop_sound);
}

sfMusic *boss_music_create(void)
{
    sfMusic *loop_sound;

    loop_sound = sfMusic_createFromFile("assets/music/boss_music.ogg");
    sfMusic_setLoop(loop_sound, sfTrue);
    return (loop_sound);
}

sfMusic *dungeon_music_create(void)
{
    sfMusic *loop_sound;

    loop_sound = sfMusic_createFromFile("assets/music/dungeon_music.ogg");
    sfMusic_setLoop(loop_sound, sfTrue);
    return (loop_sound);
}

sfMusic *fight_music_create(void)
{
    sfMusic *loop_sound;

    loop_sound = sfMusic_createFromFile("assets/music/fight_music.ogg");
    sfMusic_setLoop(loop_sound, sfTrue);
    return (loop_sound);
}

void init_sound(game_t *game, s_mus_t *music)
{
    music->intro_music = intro_music_create();
    game->music.intro_music = music->intro_music;
    music->menu_music = menu_music_create();
    game->music.menu_music = music->menu_music;
    music->game_over_music = game_over_music_create();
    game->music.game_over_music = music->game_over_music;
    music->boss_music = boss_music_create();
    game->music.boss_music = music->boss_music;
    music->dungeon_music = dungeon_music_create();
    game->music.dungeon_music = music->dungeon_music;
    music->fight_music = fight_music_create();
    game->music.fight_music = music->fight_music;
}
