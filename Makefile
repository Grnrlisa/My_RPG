##
## EPITECH PROJECT, 2021
## my_defender
## File description:
## Makefile
##

SRC		=		src/utils/my_strcat.c 	      								\
				src/utils/my_stwa.c 	      								\
				src/utils/my_strlen.c 	      								\
				src/utils/my_itoa.c			  								\
				src/main_rpg.c 												\
				src/gest_music.c 											\
				src/display_general.c 										\
				src/analyse_events.c										\
				src/menu/init_menu.c 										\
				src/menu/init_menu_next.c 									\
				src/menu/init_menu_third.c									\
				src/menu/setting/init_settings.c							\
				src/menu/setting/events_setting.c							\
				src/menu/setting/analyse_sett_menu.c						\
				src/menu/setting/fullscreen_mode.c							\
				src/menu/paralax_back.c 									\
				src/menu/analyse_event_menu.c								\
				src/game/character_selection/init_character_selec.c 		\
				src/game/character_selection/init_character_selec_annex.c 	\
				src/game/character_selection/init_character_selec_texts.c 	\
				src/game/character_selection/events_character_selec.c 		\
				src/game/character_selection/init_character_selec_both.c	\
				src/game/intro/how_to_play/init_how_to_play.c 				\
				src/game/intro/init_introduction_scenes.c 					\
				src/game/intro/init_introduction_scenes_annex.c 			\
				src/game/intro/events_introduction_scenes.c 				\
				src/game/intro/clock_intro.c 								\
				src/game/intro/intro_texts_animations.c 					\
				src/game/spawn/init_spawn.c									\
				src/game/spawn/event_spawn.c								\
				src/game/spawn/event_spawn_2.c								\
				src/game/spawn/my_put_pixel.c								\
				src/game/move_player.c										\
				src/game/spawn/init_spawn_next.c							\
				src/game/spawn/redi_player.c 								\
				src/game/room_mid/init_room_mid.c							\
				src/game/room_mid/event_room_mid.c							\
				src/game/room_l/init_room_l.c								\
				src/game/room_l/event_room_l.c								\
				src/game/room_r/init_room_r.c								\
				src/game/room_r/event_room_r.c								\
				src/game/inventory/init_inventory.c							\
				src/game/inventory/init_slot.c 								\
				src/game/inventory/annex_init_inventory.c					\
				src/game/inventory/new_annex_init_inventory.c				\
				src/game/boss/init_room_boss.c								\
				src/game/boss/event_room_boss.c								\
				src/game/fight/fight.c 										\
				src/game/fight/init_fight.c									\
				src/game/event_move.c 										\
				src/game/inventory/is_click_slot.c 							\
				src/game/end_scenes/init_end_scenes.c						\
				src/game/end_scenes/events_end_scenes.c						\
				src/game/end_scenes/clocks_end_scenes.c 					\
				src/pause/init_pause.c										\
				src/pause/events_pause.c									\
				src/pause/init_pause_next.c									\
				src/utils/my_strcomp.c 										\
				src/game/fight/get_in_fight.c 								\
				src/game/fight/display_fight.c 								\
				src/game/fight/atk_fight.c 									\
				src/game/fight/def_fight.c 									\
				src/game/fight/rst_fight.c 									\
				src/game/fight/esc_fight.c 									\

OBJ	=	$(SRC:.c=.o)

NAME	=	my_rpg

CFLAGS	=	-Wall -Wextra -O2 -I include

LDFLAGS = -lcsfml-graphics -lcsfml-window -lcsfml-system -lcsfml-audio

all:	$(NAME)

$(NAME):	$(OBJ)
		gcc -o $(NAME) $(OBJ) $(CFLAGS) $(LDFLAGS)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

debug:	CFLAGS += -g
debug:	re
