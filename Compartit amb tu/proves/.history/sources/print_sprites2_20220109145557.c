/*
** EPITECH PROJECT, 2021
** victor header
** File description:
** Exercise myhunt page 1
*/

#include "./../includes/library.h"
#include "./../includes/structs.h"

void print_page_gameover(t_var **var)
{

    sfRenderWindow_drawText((*var)->window, (*var)->text, NULL);
    sfText_setColor((*var)->text, sfColor_fromRGB(0, 0, 0));
    sfText_setPosition((*var)->text, (*var)->pos_text);
    sfText_setColor((*var)->textmsg, sfColor_fromRGB(255, 255, 255));
    sfText_setPosition((*var)->textmsg, (*var)->pos_textmsg);
    sfRenderWindow_display((*var) -> window);
    sfRenderWindow_drawSprite((*var) -> window, (*var) -> gameover, NULL);
    if ((*var) -> hit == 1) {
        (*var) -> counter = 1;
        (*var) -> level = 0;
    }
}

void show_lives(sfRenderWindow *window, sfSprite *heart,
int lives, sfVideoMode video_mode)
{
    sfVector2f pos_lives = {10, 10};

    while (lives > 0) {
        sfSprite_setPosition(heart, pos_lives);
        sfRenderWindow_drawSprite(window, heart, NULL);
        pos_lives.x += 70;
        lives--;
    }
}

void print_page_menu(t_var **var)
{
    sfRenderWindow_drawSprite((*var) -> window, (*var) -> background, NULL);
    sfRenderWindow_drawSprite((*var) -> window, (*var) -> textlevels, NULL);
    (*var) -> posbuttons.x = ((*var) -> video_mode.width / 2) - 120;
    (*var) -> posbuttons.y += 210;
    sfSprite_setPosition((*var) -> button1, (*var) -> posbuttons);
    sfRenderWindow_drawSprite((*var) -> window, (*var) -> button1, NULL);
    (*var) -> posbuttons.y += 150;
    sfSprite_setPosition((*var) -> button2, (*var) -> posbuttons);
    sfRenderWindow_drawSprite((*var) -> window, (*var) -> button2, NULL);
    (*var) -> posbuttons.y += 150;
    sfSprite_setPosition((*var) -> button3, (*var) -> posbuttons);
    sfRenderWindow_drawSprite((*var) -> window, (*var) -> button3, NULL);
    sfRenderWindow_display((*var) -> window);
    (*var) -> posbuttons.y = 0;
    (*var) -> level = analayse_events(&(*var), 1);
}