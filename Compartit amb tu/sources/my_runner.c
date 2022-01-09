/*
** EPITECH PROJECT, 2021
** victor header
** File description:
** Exercise myhunt page 1
*/

#include "./../includes/library.h"
#include "./../includes/structs.h"

void ini_var_struct(t_var *var)
{
    var -> background = create_background();
    var -> background2 = create_background2();
    var -> background3 = create_background3();
    var -> textlevels = create_textlevel();
    var -> button1 = create_buttonlevel1();
    var -> button2 = create_buttonlevel2();
    var -> button3 = create_buttonlevel3();
    var -> character =  create_character();
    var -> gameover = create_gameover();
    var -> lives = create_lives();
    var -> rocket = create_rocket();
    var -> char_jump = create_charjump();
    var -> char_bend = create_bend();
    ini_var_struct2(var);
}

void ini_var_struct2(t_var *var)
{
    var -> counter = 1;
    var -> hit = 0;
    var -> level = 0;
    var -> posbuttons.x += 40;
    var -> num_lives = 5;
    var -> score = 0;
    var -> dead = 0;
    var -> jump = 0;
}

int analayse_events(t_var **var, int page)
{
    int hit = 0;
    while (sfRenderWindow_pollEvent((*var) -> window, &(*var) -> event))
    {
        if ((*var) -> event.type == sfEvtClosed)
            sfRenderWindow_close((*var) -> window);
        else if ((*var) -> event.type == sfEvtMouseButtonPressed) {
            if (page == 1)
                hit = levels((*var) -> window);
        }
    }
    return (hit);
}

void make_jump_sound (t_var *var)
{
    if (!var->jump) {
        sfSound_play(var->sound_jump);
        var->jump = 1;
    }

}

void destroy_all(t_var *var)
{
    sfMusic_destroy(var->music_game);
    sfSound_destroy(var->sound_dead);
    sfSound_destroy(var->sound_jump);
    sfSound_destroy(var->sound_select);
    sfSound_destroy(var->sound_touched);
    sfSprite_destroy(var->background);
    sfSprite_destroy(var->background2);
    sfSprite_destroy(var->background3);
    sfSprite_destroy(var->textlevels);
    sfSprite_destroy(var->button1);
    sfSprite_destroy(var->button2);
    sfSprite_destroy(var->button3);
    sfSprite_destroy(var->character);
    sfSprite_destroy(var->gameover);
    sfSprite_destroy(var->lives);
    sfSprite_destroy(var->rocket);
    sfSprite_destroy(var->char_bend);

}
