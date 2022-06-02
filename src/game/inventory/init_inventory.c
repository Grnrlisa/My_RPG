/*
** EPITECH PROJECT, 2022
** init_spawn.c
** File description:
** rpg
*/

#include "my_rpg.h"

void init_inventory_texts(game_t *game)
{
    init_inventory_I_texts(game);
    init_inventory_II_texts(game);
    init_inventory_III_texts(game);
    init_inventory_IV_texts(game);
    init_inventory_V_texts(game);
    game->rpg->inv->texts[10]->color = sfColor_fromRGB(217, 130, 30);
    game->rpg->inv->texts[10]->pos = (sfVector2f){1350, 715};
    game->rpg->inv->texts[10]->hide = false;
    game->rpg->inv->texts[2]->pos = (sfVector2f){1260, 580};
}

void init_inventory(game_t *game)
{
    game->rpg->inv->itm = malloc(sizeof(gameobj_t) * 3);
    annex_init_inventory(game);
    game->rpg->inv->butt->aspect->txt = sfTexture_createFromFile
    ("assets/env/inventory/close_butt.png", NULL);
    game->rpg->inv->butt->aspect->hide = false;
    sfSprite_setTexture(game->rpg->inv->butt->aspect->spr,
    game->rpg->inv->butt->aspect->txt, sfTrue);
    sfSprite_setPosition(game->rpg->inv->butt->aspect->spr,
    game->rpg->inv->butt->aspect->pos);
    sfSprite_setTextureRect(game->rpg->inv->butt->aspect->spr,
    game->rpg->inv->butt->aspect->rect);
    init_inventory_texts(game);
    init_inventory_objects(game);
}

void event_inventory(game_t *game)
{
    if (game->rpg->event.key.code == sfKeyI)
        game->rpg->inv->visible = 1;
    if (game->rpg->event.key.code == sfKeyEscape &&
        game->rpg->inv->visible == 1)
        game->rpg->inv->visible = 0;
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->rpg->wdw);
    sfVector2f pos = sfSprite_getPosition(game->rpg->inv->butt->aspect->spr);
    if (game->rpg->event.type == sfEvtMouseButtonPressed && mouse.x >= pos.x &&
         mouse.x <= pos.x + 110 && mouse.y >= pos.y && mouse.y <= pos.y + 35) {
             game->rpg->inv->visible = 0;
         } else if (mouse.x >= pos.x && mouse.x <= pos.x + 110 &&
         mouse.y >= pos.y && mouse.y <= pos.y + 35) {
             game->rpg->inv->butt->aspect->rect.top = 30;
             sfSprite_setTextureRect(game->rpg->inv->butt->aspect->spr,
             game->rpg->inv->butt->aspect->rect);
         } else {
             game->rpg->inv->butt->aspect->rect.top = 0;
             sfSprite_setTextureRect(game->rpg->inv->butt->aspect->spr,
             game->rpg->inv->butt->aspect->rect);
         }
}

void display_inventory_texts(game_t *game, int y)
{
   if (game->rpg->inv->texts[y]->hide == false) {
      if (game->rpg->inv->texts[y] != NULL) {
         sfText_setFont(game->rpg->inv->texts[y]->text,
         game->rpg->inv->texts[y]->font);
         sfText_setColor(game->rpg->inv->texts[y]->text,
         game->rpg->inv->texts[y]->color);
         sfText_setCharacterSize(game->rpg->inv->texts[y]->text,
         game->rpg->inv->texts[y]->size);
         sfText_setPosition(game->rpg->inv->texts[y]->text,
         game->rpg->inv->texts[y]->pos);
         sfText_setString(game->rpg->inv->texts[y]->text,
         game->rpg->inv->texts[y]->content);
         sfRenderWindow_drawText(game->rpg->wdw,
         game->rpg->inv->texts[y]->text, NULL);
      }
   }
}

void display_inventory(game_t *game)
{
   int y = 0;
   if (game->rpg->inv->icon_path != NULL) {
      game->rpg->inv->txt_ic = sfTexture_createFromFile
      (game->rpg->inv->icon_path, NULL);
   } if (game->rpg->inv->visible == 1) {
      game->rpg->inv->hide = false;
      for (int i = 0; i != game->rpg->inv->nb_texts; i++)
         game->rpg->inv->texts[i]->hide = false;
   } else
      game->rpg->inv->hide = true;
   if (game->nb_scene >= 4)
      sfSprite_setTexture(game->rpg->inv->spr_ic, game->rpg->inv->txt_ic,
      sfTrue);
   game->rpg->inv->texts[1]->content = game->player[game->nb_char].name;
   if (game->nb_char == 0) {
      game->rpg->inv->texts[1]->pos = (sfVector2f){1205, 580};
   } else
      game->rpg->inv->texts[1]->pos = (sfVector2f){1170, 580};
   if (game->rpg->inv->hide == false) {
      y = disp_inv(game, y);
      disp_slot(game);
   }
}
