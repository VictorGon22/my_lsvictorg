/*
** EPITECH PROJECT, 2021
** victor header
** File description:
** Exercise myhunt page 1
*/

#include "./../includes/library.h"
#include "./../includes/structs.h"

sfSprite *create_lives(void)
{
    sfTexture *texture_lives = sfTexture_createFromFile
    ("./images/heart.png", NULL);
    sfSprite *sprite_lives = sfSprite_create();
    sfSprite_setTexture (sprite_lives, texture_lives, 0);
    return (sprite_lives);
}

sfSprite *create_rocket(void)
{
    sfTexture *texture_rocket = sfTexture_createFromFile
    ("./images/rocket.png", NULL);
    sfSprite *sprite_rocket = sfSprite_create();
    sfSprite_setTexture (sprite_rocket, texture_rocket, 0);
    return (sprite_rocket);
}

sfSprite *create_errase(void)
{
    sfTexture *texture_errase = sfTexture_createFromFile
    ("./images/black.png", NULL);
    sfSprite *sprite_errase = sfSprite_create();
    sfSprite_setTexture (sprite_errase, texture_errase, 0);
    return (sprite_errase);
}

sfSprite *create_charjump(void)
{
    sfTexture *texture_charjump = sfTexture_createFromFile
    ("./images/jump.png", NULL);
    sfSprite *sprite_charjump = sfSprite_create();
    sfSprite_setTexture (sprite_charjump, texture_charjump, 0);
    return (sprite_charjump);
}
