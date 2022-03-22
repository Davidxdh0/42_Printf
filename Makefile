# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: dyeboa <dyeboa@student.codam.nl>             +#+                      #
#                                                    +#+                       #
#    Created: 2021/10/26 14:06:32 by dyeboa        #+#    #+#                  #
#    Updated: 2022/03/22 17:32:59 by dyeboa        ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a
CC		= gcc
SRCS	= ft_printf.c ft_printf_utils.c
OBJS	= $(SRCS:.c=.o)
FLAGS	= -Wall -Wextra -Werror

.c.o :
	${CC} -c ${FLAGS} -o $@ $<

run:
	rm -f run
	${CC} ${FLAGS} $(SRCS) main.c -o run
	./run

$(NAME): ${OBJS}
	ar -rcs $(NAME) $(OBJS)

all: $(NAME)

clean:
	rm -f $(OBJS)
	rm -f $(NAME)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY:	all clean fclean
	