/*
** EPITECH PROJECT, 2021
** victor header
** File description:
** fgfghgf
*/

#ifndef STRUCTS_H_
#define STRUCTS_H_

    #include <SFML/Window.h>
    #include <SFML/Graphics.h>
    #include <SFML/Audio.h>
    #include <SFML/System.h>
    #include <time.h>
    #include <stdlib.h>
    #include <stdio.h>

typedef struct s_var {
    sfVideoMode video_mode;
    sfRenderWindow *window;
    sfSoundBuffer *buffer;
    sfSound *sonido;
    sfIntRect select_character;
    sfClock *clock;
    sfClock *clock2;
    sfEvent event;
    sfTime time;
    sfTime time_explosion;
    sfSprite *background;
    sfSprite *background2;
    sfSprite *background3;
    sfSprite *textlevels;
    sfSprite *button1;
    sfSprite *button2;
    sfSprite *button3;
    sfSprite *character;
    sfSprite *explosion;
    sfSprite *gameover;
    sfSprite *lives;
    sfSprite *rocket;
    sfSprite *errase;
    sfSprite *char_jump;
    sfSprite *char_bend;
    sfVector2f pos_errase;
    sfVector2f posbuttons;
    sfVector2f pos_character;
    sfVector2f pos_explosion;
    sfVector2f pos_background;
    sfVector2f pos_background_2;
    sfVector2f velocity_background;
    sfVector2f pos_background2;
    sfVector2f pos_background2_2;
    sfVector2f velocity_background2;
    sfVector2f pos_background3;
    sfVector2f pos_background3_2;
    sfVector2f velocity_background3;
    sfVector2f pos_rocket;
    sfVector2f velocity_rocket;
    sfVector2f velocity;
    int counter;
    int hit;
    int level;
    int num_lives;

}t_var;

#endif