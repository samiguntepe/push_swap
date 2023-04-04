# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sguntepe <@student.42kocaeli.com.tr>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/21 23:25:18 by sguntepe          #+#    #+#              #
#    Updated: 2023/03/21 23:25:19 by sguntepe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= push_swap
FILES	= $(shell find . -name "*.c")
FLAGS	= -Wall -Wextra -Werror
OBJS	= $(FILES:.c=.o)
LIBFT	= include/libft/libft.a
CC		= gcc

all : $(NAME)

$(NAME): c $(OBJS) m
	@$(CC) $(FLAGS) $(OBJS) -o $(NAME) $(LIBFT)
	
%.o: %.c
	@$(CC) $(FLAGS) -c $< -o $@
c:
	@echo "\n\033[0;35m⏳ COMPILING...\033[0m\n"
m:
	@make -s -C include/libft
	@echo "✅"

clean:
	@rm -f $(OBJS)
	@rm -f src/*.o
	@rm -f include/libft/*.o

fclean:
	@rm -f $(NAME)
	@rm -f $(OBJS)
	@rm -f include/libft/*.a
	@rm -f src/*.o
	@rm -f include/libft/*.o
	@echo "🗑️"

re: fclean all

.PHONY: all clean fclean re