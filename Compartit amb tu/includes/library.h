/*
** EPITECH PROJECT, 2021
** victor header
** File description:
** lib my_hunterexercise
*/

#ifndef LIBRAY_H_
#define LIBRAY_H_
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stddef.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <ctype.h>
#include "./structs.h"

//Create Sprites 1
sfSprite *create_textlevel(void);
sfSprite *create_buttonlevel1(void);
sfSprite *create_buttonlevel2(void);
sfSprite *create_buttonlevel3(void);
sfSprite *create_bend(void);

//Create Sprites 2
sfSprite *create_background(void);
sfSprite *create_background2(void);
sfSprite *create_background3(void);
sfSprite *create_gameover(void);
sfSprite *create_character(void);

//Create Sprites 3
sfSprite *create_lives(void);
sfSprite *create_explosion(void);
sfSprite *create_rocket(void);
sfSprite *create_errase(void);
sfSprite *create_charjump(void);

//Print Sprites
void print_background1(t_var *var);
void print_background2(t_var *var);
void print_background3(t_var *var);
void print_character2(t_var *var);
void print_character(t_var *var);

//Print Sprites 2
void print_page_gameover(t_var **var);
void show_lives(sfRenderWindow *window, sfSprite *heart,
int counter, sfVideoMode video_mode);
void print_page_menu(t_var **var);
void print_character3(t_var *var);

//Functions Modify Sptites
sfVector2f ini_pos(void);
int get_velocity(int level);
int hit_the_character (t_var *var);
int levels (sfRenderWindow * window);
void change_character (sfIntRect *select_duck);

// Create Sounds Positions Clocks
void create_sounds(t_var *var);
void create_clocks(t_var *var);
void create_msg(t_var *var);
void create_positions(t_var *var);

//Basic FUnctions
void my_putchar(char *str);
int fs_open_file(char const *filepath);
char *my_revstr(char *str);
char *my_return_time(int nb);
int nb_len(int nb);

//My Runners Functions
void ini_var_struct(t_var *var);
void ini_var_struct2(t_var *var);
int analayse_events(t_var **var, int page);
void destroy_all(t_var *var);
void make_jump_sound (t_var *var);

//My_Window Functions
void manage_rocket(t_var *var);
void my_runner_manage(t_var *var);
sfRenderWindow *my_window(t_var *var);
void my_runner (void);

#endif

