# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: x250 <x250@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/20 16:00:42 by amorcill          #+#    #+#              #
#    Updated: 2021/07/22 16:08:50 by x250             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CFLAGS = -Wall -Werror -Wextra

SRCS = 	ft_printf.c    ft_printf_d.c  ft_printf_p.c  ft_vsprintf.c \
		ft_printf_arg.c  ft_printf_c.c  ft_printf_s.c  \


$(NAME):
	gcc $(CFLAGS) -c $(SRCS)
	ar -crs $(NAME) *.o

all: $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)
