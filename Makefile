# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: dyeboa <dyeboa@student.codam.nl>             +#+                      #
#                                                    +#+                       #
#    Created: 2021/10/26 14:06:32 by dyeboa        #+#    #+#                  #
#    Updated: 2022/03/16 17:15:24 by dyeboa        ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_printf.c ft_printf_utils.c
			
NAME	= libftprintf
OBJS	= $(SRCS:.c=.o)
RM		= rm -f
FLAGS	= -Wall -Wextra -Werror
INCS	= .

.c.o :
	${CC} ${FLAGS} -c $< -o ${<:.c=.o}

$(NAME): ${OBJS}
	ar -rcs $(NAME) $(OBJS)

all: $(NAME)

clean:
	$(RM) -f $(OBJS)
	$(RM) -f $(NAME)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY:	all clean fclean