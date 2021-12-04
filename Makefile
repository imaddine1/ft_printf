# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iharile <iharile@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/02 17:04:13 by iharile           #+#    #+#              #
#    Updated: 2021/12/03 17:47:01 by iharile          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CFLAGS = -Wall -Wextra -Werror
RM = rm -f

SRC = ft_printf.c ft_printf_utils.c ft_hex.c
OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)


%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@
	ar rc $(NAME) $@


clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all
