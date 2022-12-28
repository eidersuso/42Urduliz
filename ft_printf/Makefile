# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: esuso-es <esuso-es@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/18 12:08:37 by esuso-es          #+#    #+#              #
#    Updated: 2022/12/02 15:47:52 by esuso-es         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_printf.c ft_format.c ft_printhexa.c ft_printchar.c ft_printstr.c ft_printnmbr.c ft_printunsign.c

OBJS = $(SRC:%.c=%.o)

CC = gcc
FLAGS = -Wall -Werror -Wextra

.c.o: $(SRC)
	$(CC) $(FLAGS) -c -o $@ $<

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)
	@echo "Program/Library compiled"
	
clean:
	rm -f $(OBJS)
	@echo ".o files removed"

fclean: clean
	rm -f $(NAME)
	@echo "Promgram/Library removed"

re: fclean $(NAME)

.PHONY: all clean fclean re