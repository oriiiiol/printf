# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ocollado <ocollado@student.42barcelona.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/02 21:11:41 by ocollado          #+#    #+#              #
#    Updated: 2023/11/02 21:11:41 by ocollado         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIB = ar rcs
RM = rm -f

CC = gcc
CCFLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a
SRC = ft_putchar.c ft_putstr.c ft_putint.c ft_putdecim.c ft_putdecimunsigned.c ft_strlen.c ft_printhex.c ft_putporcent.c ft_printf.c ft_itoabase.c ft_calloc.c ft_bzero.c ft_void.c 
OBJ = $(SRC:.c=.o)
INCLUDE = libftprintf.h Makefile

all: $(NAME)

$(NAME): $(OBJ) $(INCLUDE)
	$(LIB) $(NAME) $(OBJ)

%.o: %.c $(INCLUDE)
	$(CC) $(CCFLAGS) -c -o $@ $<

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all