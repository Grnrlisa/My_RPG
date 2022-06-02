/*
** EPITECH PROJECT, 2022
** my_put_pixel.c
** File description:
** put the pixel
*/

#include "my_rpg.h"

void put_pixel(sfUint8 *pixel_screen, int x, int y, int opa, int color)
{
    int p_len = 10;

    x *= p_len;
    y *= p_len;
    for (int p_hei = 0; p_hei < p_len; p_hei++)
        for (int p_wi = 0; p_wi < p_len; p_wi++) {
            pixel_screen[(p_wi + x + (p_hei + y) * 1920) * 4] = color;
            pixel_screen[(p_wi + x + (p_hei + y) * 1920) * 4 + 1] = color;
            pixel_screen[(p_wi + x + (p_hei + y) * 1920) * 4 + 2] = color;
            pixel_screen[(p_wi + x + (p_hei + y) * 1920) * 4 + 3] = 255;
        }
}

void clear_pixel(sfUint8 *pixel_screen)
{
    for (int x = 0; x < 1920; x++) {
        for (int y = 0; y < 2040; y++) {
            put_pixel(pixel_screen, x, y, 0, 0);
        }
    }
}
