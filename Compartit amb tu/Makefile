##
## EPITECH PROJECT, 2021
## d10
## File description:
## description
##

OBJ = $(SRCS_C:.c=.o)

LIB = -L./lib/my -lmy

SFLAGS = -lcsfml-graphics -lcsfml-window -lcsfml-audio -lcsfml-system

SRC		=	sources/

SRC_C	=	basicfunctions.c 		\
			createsprites.c 		\
			createsprites2.c 		\
			createsprites3.c 		\
			functions_mod_sprites.c \
			my_runner.c 			\
			print_sprites.c 		\
			print_sprites2.c 		\
			sound_clock_pos.c 		\
			window.c				\
			my_revstr.c				\
			my_strcat.c

SRCS_C	= 	$(addprefix $(SRC), $(SRC_C))

CFLAGS = -I./include

NAME = my_runner

all: $(NAME)

$(NAME): $(OBJ)
	gcc -o $(NAME) $(OBJ) $(SFLAGS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all
	make clean