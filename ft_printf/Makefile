# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amorcill <amorcill@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/23 10:09:55 by amorcill          #+#    #+#              #
#    Updated: 2021/07/23 18:33:11 by amorcill         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CFLAGS = -Wall -Werror -Wextra

SRCS = 	ft_printf.c    ft_printf_d.c  ft_printf_p.c  \
		ft_printf_arg.c  ft_printf_s.c  ft_printf_hex.c\
		ft_printf_u.c \


$(NAME):
	gcc $(CFLAGS) -c $(SRCS)
	ar -crs $(NAME) *.o

all: $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)
