/*
** EPITECH PROJECT, 2021
** victor header
** File description:
** fgfghgf
*/

#ifndef STRUCTS_H_
    #define STRUCTS_H_

    struct node {
        int data;
        struct node *nextPtr;
    };

    typedef struct s_info_files {
        char *name;
        char *permisions;
        char *date;
        char *owner;
        char *group;
        int filesize;
        int linkcount;
        int total;
        long int raw_date;
        struct s_info_files *next;

    } t_info_files;

    typedef struct s_var {
        char *name;
        char *permisions;
        char *date;
        char *owner;
        char *group;
        int filesize;
        int linkcount;
        char array_flags[5];
        char *array_directory[5];
        char **args;
        int argc;
        int flags;
        int directories;
        char *fullpath;
        int i;
        int j;
        int x;
        int reverse; // 1 si es reversed, 0 
        struct s_info_files *ptr_link;
        
    } t_var;

    typedef struct s_info_1_file {
        char *name;
        char *permisions;
        char *date;
        char *owner;
        char *group;
        int filesize;
        int linkcount;
        int total;

    } t_info_1_file;

    typedef struct do_op {
        char op;
        void (*ptr)(t_var *var2, char *filepath);
    } calculator;

#endif

