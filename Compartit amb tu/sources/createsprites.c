/*
** EPITECH PROJECT, 2021
** victor header
** File description:
** Exercise myhunt page 1
*/

#include "./../includes/library.h"
#include "./../includes/structs.h"

sfSprite *create_textlevel(void)
{
    sfTexture *texturelevel = sfTexture_createFromFile
    ("./images/levels.png", NULL);
    sfSprite *Spritelevel = sfSprite_create();
    sfSprite_setTexture (Spritelevel, texturelevel, 0);
    return (Spritelevel);
}

sfSprite *create_buttonlevel1(void)
{
    sfTexture *texturebuttonlevel1 = sfTexture_createFromFile
    ("./images/but1.png", NULL);
    sfSprite *Spritebuttonlevel1 = sfSprite_create();
    sfSprite_setTexture (Spritebuttonlevel1, texturebuttonlevel1, 0);
    return (Spritebuttonlevel1);
}

sfSprite *create_buttonlevel2(void)
{
    sfTexture *texturebuttonlevel2 = sfTexture_createFromFile
    ("./images/but2.png", NULL);
    sfSprite *Spritebuttonlevel2 = sfSprite_create();
    sfSprite_setTexture (Spritebuttonlevel2, texturebuttonlevel2, 0);
    return (Spritebuttonlevel2);
}

sfSprite *create_buttonlevel3(void)
{
    sfTexture *texturebutlevel3 = sfTexture_createFromFile
    ("./images/but3.png", NULL);
    sfSprite *Spritebutlevel3 = sfSprite_create();
    sfSprite_setTexture (Spritebutlevel3, texturebutlevel3, 0);
    return (Spritebutlevel3);
}

sfSprite *create_bend(void)
{
    sfTexture *texture_bend = sfTexture_createFromFile
    ("./images/agachado.png", NULL);
    sfSprite *sprite_bend = sfSprite_create();
    sfSprite_setTexture (sprite_bend, texture_bend, 0);
    return (sprite_bend);
}