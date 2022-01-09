/*
** EPITECH PROJECT, 2021
** victor header
** File description:
** Exercise myhunt page 1
*/

#include "./../includes/library.h"
#include "./../includes/structs.h"

sfSprite *create_background(void)
{
    sfTexture *textureBack = sfTexture_createFromFile
    ("./images/background11.png", NULL);
    sfSprite *SpriteBack = sfSprite_create();
    sfSprite_setTexture (SpriteBack, textureBack, 0);
    return (SpriteBack);
}

sfSprite *create_background2(void)
{
    sfTexture *texture_background2 = sfTexture_createFromFile
    ("./images/background2.png", NULL);
    sfSprite *sprite_background2 = sfSprite_create();
    sfSprite_setTexture (sprite_background2, texture_background2, 0);
    return (sprite_background2);
}

sfSprite *create_background3(void)
{
    sfTexture *texture_background3 = sfTexture_createFromFile
    ("./images/background3.png", NULL);
    sfSprite *sprite_background3 = sfSprite_create();
    sfSprite_setTexture (sprite_background3, texture_background3, 0);
    return (sprite_background3);
}

sfSprite *create_gameover(void)
{
    sfTexture *texture_gover = sfTexture_createFromFile
    ("./images/gameover.jpg", NULL);
    sfSprite *sprite_gover = sfSprite_create();
    sfSprite_setTexture (sprite_gover, texture_gover, 0);
    return (sprite_gover);
}

sfSprite *create_character(void)
{
    sfTexture *texture_character = sfTexture_createFromFile
    ("./images/character.png", NULL);
    sfSprite *Sprite_character = sfSprite_create();
    sfSprite_setTexture (Sprite_character, texture_character, 0);
    return (Sprite_character);
}
