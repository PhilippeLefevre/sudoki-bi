##
## Makefile for sudoku in /home/lefevr_h/Repository/Epitech/First_Year/CPE/sudoki-bi
## 
## Made by Lefevre Philippe
## Login   <lefevr_h@epitech.net>
## 
## Started on  Sat Feb 27 11:40:22 2016 Lefevre Philippe
## Last update Sat Feb 27 19:13:17 2016 Lefevre Philippe
##

NAMEDIR		=	bin
NAME		=	$(NAMEDIR)/sudoki-bi

INCDIR		=	inc
SRCDIR		=	src

ECHO		=	/bin/echo -e
DEFAULT		=	"\033[00m"
GREEN		=	"\033[0;32m"
TEAL		=	"\033[1;36m"
RED		=	"\033[0;31m"

CC		=	gcc
CFLAGS		+=	-W -Werror -Wall -Wextra
CFLAGS		+=	-ansi -pedantic
CFLAGS		+=	-I$(INCDIR)

DEPS		=	$(wildcard $(SRCDIR)/*/*.c)
MAIN		=	$(wildcard $(SRCDIR)/*.c)
SRC		=	$(DEPS) $(MAIN)

OBJ		=	$(SRC:.c=.o)

all		:	title $(NAME)

title		:
			@$(ECHO) $(GREEN)Sudoki$(TEAL)-BI$(DEFAULT)


$(NAME)		:	$(OBJ)
			@mkdir -p bin
			@$(CC) -o $(NAME) $(OBJ) $(CFLAGS) $(LDFLAGS)	&&\
			$(ECHO) $(GREEN) "[CC]" $(TEAL) $(NAME) $(DEFAULT) || \
			$(ECHO) $(RED) "[XX]" $(TEAL) $(NAME)

.c.o		:
			@$(CC) $(CFLAGS) -c $< -o $@ &&					\
			$(ECHO) $(GREEN) "[OK]" $(TEAL) $< $(DEFAULT) ||		\
			$(ECHO) $(RED) "[XX]" $(TEAL) $< $(DEFAULT)

clean		:
			@rm -f $(OBJ)

fclean		:	clean
			@rm -f $(NAME)

re		:	fclean all

.PHONY		:	all clean fclean re
