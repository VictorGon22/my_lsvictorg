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
    sfSoundBuffer *buffer2;
    sfSound *sound_dead;
    sfSound *sound_jump;
    sfSound *sound_touched;
    sfSound *sound_select;
    sfMusic *music_game;
    sfIntRect select_character;
    sfClock *clock;
    sfClock *clock2;
    sfEvent event;
    sfTime time;
    sfSprite *background;
    sfSprite *background2;
    sfSprite *background3;
    sfSprite *textlevels;
    sfSprite *button1;
    sfSprite *button2;
    sfSprite *button3;
    sfSprite *character;
    sfSprite *gameover;
    sfSprite *lives;
    sfSprite *rocket;
    sfSprite *char_jump;
    sfSprite *char_bend;
    sfVector2f pos_errase;
    sfVector2f posbuttons;
    sfVector2f pos_character;
    sfVector2f pos_rocket;
    sfVector2f pos_background;
    sfVector2f pos_background_2;
    sfVector2f pos_background2;
    sfVector2f pos_background2_2;
    sfVector2f pos_background3;
    sfVector2f pos_background3_2;
    sfVector2f velocity_character_down;
    sfVector2f velocity_character_up;
    sfVector2f velocity_background;
    sfVector2f velocity_background2;
    sfVector2f velocity_background3;
    sfVector2f velocity_rocket;
    sfVector2f velocity;
    sfFont *font;
    sfText *text;
    sfText *textmsg;
    sfVector2f pos_textmsg;
    sfVector2f pos_text;
    int counter;
    int hit;
    int level;
    int num_lives;
    int score;
    int dead;
    int jump;
}t_var;

#endif