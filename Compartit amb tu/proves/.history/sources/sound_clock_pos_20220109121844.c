/*
** EPITECH PROJECT, 2021
** victor header
** File description:
** Exercise myhunt page 1
*/

#include "./../includes/library.h"
#include "./../includes/structs.h"

void create_sounds(t_var *var)
{
    var -> buffer = sfSoundBuffer_createFromFile("./shoot.wav");
    var -> sonido = sfSound_create();
    sfSound_setBuffer(var -> sonido, var -> buffer);
}

void create_clocks(t_var *var)
{
    var -> clock = sfClock_create();
    var -> clock2 = sfClock_create();
}

void create_positions(t_var *var)
{
    var -> pos_errase = (sfVector2f) {0, 0};
    var -> select_character = (sfIntRect) {0, 0, 70, 115};
    var -> pos_character = (sfVector2f) {300, 566};
     var -> velocity_ = (sfVector2f) {5, 0};
    var -> pos_background = (sfVector2f) {0, 0};
    var -> pos_background_2 = (sfVector2f) {1290, 0};
    var -> velocity_background = (sfVector2f) {-0.5, 0};
    var -> pos_background2 = (sfVector2f) {0, 190};
    var -> pos_background2_2 = (sfVector2f) {1280, 190};
    var -> velocity_background2 = (sfVector2f) {-1, 0};
    var -> pos_background3 = (sfVector2f) {0, 450};
    var -> pos_background3_2 = (sfVector2f) {1290, 450};
    var -> velocity_background3 = (sfVector2f) {-2, 0};
    var -> pos_rocket = (sfVector2f) {1300, 500};
    var -> velocity_rocket = (sfVector2f) {-6, 0};
    var -> pos_explosion = (sfVector2f){-120, 0};
    var -> velocity = (sfVector2f) {5, 0};
    var -> posbuttons = (sfVector2f) {(var -> video_mode.width / 2) - 190, 50};
}
