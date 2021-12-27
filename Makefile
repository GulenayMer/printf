# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/13 18:53:33 by mgulenay          #+#    #+#              #
#    Updated: 2021/12/26 17:35:30 by mgulenay         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = 	ft_printf.c \
		ft_printf_helper.c \
		ft_printf_itoa.c \
		ft_printf_unsigned.c \

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRC_OBJS	=	$(SRCS:.c=.o)

RM          =	rm -f

all : $(NAME)

	
$(NAME): $(SRC_OBJS)
	ar rcs $(NAME) $(SRC_OBJS)


clean:
		$(RM) $(SRC_OBJS)

fclean:		clean
				$(RM) $(NAME)
	
re: 		fclean all

.PHONY: all clean fclean re