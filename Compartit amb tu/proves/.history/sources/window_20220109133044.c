/*
** EPITECH PROJECT, 2021
** victor header
** File description:
** Exercise myhunt page 1
*/

#include "./../includes/library.h"
#include "./../includes/structs.h"

char *my_return_time(int nb);

void manage_rocket(t_var *var)
{
    if (var->pos_rocket.x <= 0
    || var->hit == 1) {
        if (var->pos_rocket.x <= 0) {
            var->score += 1;
        }
        sfSprite_setPosition(var->explosion , var->pos_rocket);
        var->pos_rocket = ini_pos();
        sfSprite_setPosition(var -> character , var->pos_character);
        var->velocity_rocket.x = get_velocity(var->level);
    }
    sfSprite_setPosition(var->rocket, var->pos_rocket);
    sfSprite_move(var->rocket, var->velocity_rocket);
    var->pos_rocket = sfSprite_getPosition(var->rocket);
    sfRenderWindow_drawSprite(var->window, var->rocket, NULL);
    show_lives(var->window, var->lives, var->num_lives, var->video_mode);
    sfRenderWindow_display(var -> window);
}

void my_runner_manage(t_var *var)
{
    if (var->num_lives >= 1) {
        var->hit = hit_the_character(var);
        var->num_lives -= hit_the_character(var);
        print_background1(var);
        print_background2(var);
        print_background3(var);
        if (var->hit == 0)
            print_character(var);
        manage_rocket(var);
    }
    else
        print_page_gameover(&var);
}

sfRenderWindow *my_window(t_var *var)
{
    srand(time(NULL));
    var->score = 0;
    while (sfRenderWindow_isOpen(var -> window))  {
        analayse_events(&var, 0);
        if (var->level == 0 && var->num_lives >= 1) {
            print_page_menu(&var);
        }
        else {
            my_runner_manage(var);
        }
    }
    sfSound_destroy(var -> sonido);
}

int nb_len(int nb)
{
    int len = 0;

    if (nb == 0)
        return (1);
    while (nb > 0) {
        nb /= 10;
        len++;
    }
    return (len);
}

char *my_return_time(int nb)
{
    char *str = malloc(sizeof(char) * nb_len(nb) + 1);
    int i = 0;
    int neg = 0;

    if (nb < 0) {
        neg = 1;
        nb = -nb;
    }
    if (nb == 0)
        return
    while (nb > 0) {
        str[i] = nb % 10 + 48;
        nb /= 10;
        i++;
        printf("valor char: %c\n", str[i]);
    }
    if (neg == 1) {
        str[i] = '-';
        i++;
    }
    str[i] = '\0';
    str = my_revstr(str);
    return (str);
}

void my_runner (void)
{
    t_var var;
    var.video_mode = (sfVideoMode){1280, 769, 64};
    var.window = sfRenderWindow_create(var.video_mode,
    "My-Hunter_GAME", sfDefaultStyle, NULL);
    create_sounds(&var);
    create_clocks(&var);
    create_positions(&var);
    ini_var_struct(&var);
    sfSprite_setPosition(var.textlevels, var.posbuttons);
    sfSprite_setPosition(var.explosion , var.pos_character);
    sfSprite_scale(var.lives, (sfVector2f){0.1, 0.1});
    var.font = sfFont_createFromFile("arial.ttf");
    if (!var.font)
        printf("ERROR FONT");
    var.text = sfText_create();
    char *str = my_return_time(var.score);
    printf("score:%d\n", var.score);
    
    printf("text:%s\n", str);
    sfText_setString(var.text, str);
    //sfText_setString(var.text, "String prova");
    sfText_setFont(var.text, var.font);
    sfText_setCharacterSize(var.text, 50);
    sfText_setColor(var.text, sfColor_fromRGB(100, 255, 51));
    sfText_setPosition(var.text, var.pos_text);
    my_window(&var);
    sfRenderWindow_destroy(var.window);
}


int main (int argc, char **argv)
{
    char *buffer = malloc(sizeof(char) * 250);
    if (argc == 2 && argv[1][0] == '-' && argv[1][1] == 'h') {
        read(open("README.txt", O_RDONLY), buffer, 250);
        my_putchar(buffer);
    }
    else if (argc == 1 )
        my_runner();
    else
        exit (84);
    free(buffer);
    return 0;
}
