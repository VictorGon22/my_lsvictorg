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
    //var -> errase = create_errase();
    var -> char_jump = create_charjump();
    var -> char_bend = create_bend();
    var -> counter = 1;
    var -> hit = 0;
    var -> level = 0;
    var -> posbuttons.x += 40;
    var -> num_lives = 5;
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