# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: dyeboa <dyeboa@student.codam.nl>             +#+                      #
#                                                    +#+                       #
#    Created: 2021/10/26 14:06:32 by dyeboa        #+#    #+#                  #
#    Updated: 2022/03/17 17:28:29 by dyeboa        ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a
# CC		= gcc
SRCS	= ft_printf.c ft_printf_utils.c
OBJS	= $(SRCS:.c=.o)
FLAGS	= -Wall -Wextra -Werror
INCS	= .
RM		= rm -f
# LIB	:= /ibft/libft.a
# ifdef DEBUG
# FLAGS	+=	-g
# NAME = libftprintf_debug.a
# LIB = libs/libft/libft_debug.a
# endif
.c.o :
	${CC} -c ${FLAGS} -o $@ $<

$(NAME): ${OBJS}
	ar -rcs $(NAME) $(OBJS)

all: $(NAME)

clean:
	$(RM) $(OBJS)
	$(RM) $(NAME)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

# main:
# 	gcc main.c -L. -lftprintf_debug  -g -o printf_gdb

.PHONY:	all clean fclean
	