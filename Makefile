# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/13 18:53:33 by mgulenay          #+#    #+#              #
#    Updated: 2021/12/20 19:20:51 by mgulenay         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = ft_printf.c \
		ft_helper1.c \
		ft_helper2.c \
		ft_itoa.c \
		ft_itoaunsigned.c \

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