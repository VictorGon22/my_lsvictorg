/*
** EPITECH PROJECT, 2021
** victor header
** File description:
** Exercise myhunt page 1
*/

#include "./../includes/library.h"
#include "./../includes/structs.h"

void print_background1(t_var *var)
{
    sfRenderWindow_clear(var->window, sfBlack);
    sfSprite_setPosition(var->background, var->pos_background);
    sfSprite_move(var->background, var->velocity_background);
    var->pos_background = sfSprite_getPosition(var->background);
    sfRenderWindow_drawSprite(var->window, var->background, NULL);
    sfSprite_setPosition(var->background, var->pos_background_2);
    sfSprite_move(var->background, var->velocity_background);
    var->pos_background_2 = sfSprite_getPosition(var->background);
    sfRenderWindow_drawSprite(var->window, var->background, NULL);
    if (var->pos_background.x <= -1240) {
    var->pos_background.x = var->pos_background_2.x;
    var->pos_background_2.x = 1200;
    }
}

void print_background2(t_var *var)
{
    sfSprite_setPosition(var->background2, var->pos_background2);
    sfSprite_move(var->background2, var->velocity_background2);
    var->pos_background2 = sfSprite_getPosition(var->background2);
    sfRenderWindow_drawSprite(var->window, var->background2, NULL);
    sfSprite_setPosition(var->background2, var->pos_background2_2);
    sfSprite_move(var->background2, var->velocity_background2);
    var->pos_background2_2 = sfSprite_getPosition(var->background2);
    sfRenderWindow_drawSprite(var->window, var->background2, NULL);
    if (var->pos_background2.x <= -1240) {
        var->pos_background2.x = var->pos_background2_2.x;
        var->pos_background2_2.x = 1280;
    }
}

void print_background3(t_var *var)
{
    sfSprite_setPosition(var->background3, var->pos_background3);
    sfSprite_move(var->background3, var->velocity_background3);
    var->pos_background3 = sfSprite_getPosition(var->background3);
    sfRenderWindow_drawSprite(var->window, var->background3, NULL);
    sfSprite_setPosition(var->background3, var->pos_background3_2);
    sfSprite_move(var->background3, var->velocity_background3);
    var->pos_background3_2 = sfSprite_getPosition(var->background3);
    sfRenderWindow_drawSprite(var->window, var->background3, NULL);
    if (var->pos_background3.x <= -1240) {
        var->pos_background3.x = var->pos_background3_2.x;
        var->pos_background3_2.x = 1280;
    }
}

void print_character2(t_var *var)
{
    sfSprite_setPosition(var->character, var->pos_character);
    if (var->event.key.code == 122) {
        var-> pos_character = (sfVector2f) {300, 630};
        sfSprite_setPosition(var->char_bend, var->pos_character);
        sfRenderWindow_drawSprite(var->window, var->char_bend, NULL);

    }
    else {
        var-> pos_character = (sfVector2f) {300, 600};
        sfSprite_setPosition(var->character, var->pos_character);
        sfSprite_setTextureRect(var->character, var->select_character);
        var->time = sfClock_getElapsedTime(var->clock);
        var-> pos_character = sfSprite_getPosition(var->character);
        if (sfTime_asSeconds(var->time) > 0.2) {
            change_character(&var-> select_character);
            sfClock_restart(var-> clock);
        }
        sfRenderWindow_drawSprite(var->window, var->character, NULL);
    }
}

void print_character(t_var *var)
{
    if (var->event.key.code != 32) {
        if (var->pos_character.y < 600) {
            var->jump = 0;
            sfSprite_setPosition(var->character, var->pos_character);
            sfSprite_move(var->character, var->velocity_character_down);
            var->pos_character = sfSprite_getPosition(var->character);
            sfRenderWindow_drawSprite(var->window, var->character, NULL);
        }
        else
            print_character2(var);
    }
    else if (var->event.key.code == 32)
        print_character3(var);
}
