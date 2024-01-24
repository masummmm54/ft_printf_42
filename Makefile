# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: muhakose <muhakose@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/17 09:36:24 by muhakose          #+#    #+#              #
#    Updated: 2023/10/23 12:56:08 by muhakose         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a

SOURCES	= 	ft_printf.c \
			ft_putchar_fd_print.c \
			ft_putnbr_fd_print.c \
			ft_putstr_fd_print.c \
			ft_unsignednbr_fd.c \
			hexatransformlower.c \
			hexatransformupper.c \
			ft_strlen_print.c \
			ft_pointerprint.c \
			
OBJECTS	= ${SOURCES:.c=.o}

INCLUDES	= ft_printf.h

CFLAGS	= -Wall -Wextra -Werror

.c.o:
	cc ${CFLAGS} -c $< -o ${<:.c=.o} -I ${INCLUDES}

${NAME}: ${OBJECTS}
	ar rc ${NAME} ${OBJECTS}

$(LIBFT):
	cp $(LIBFT) $(NAME)

all: ${NAME}

clean:
	rm -f ${OBJECTS}

fclean: clean
	rm -f ${NAME}

re: fclean all