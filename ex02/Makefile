# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fleduc <fleduc@student.42quebec.com>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/07 09:51:09 by fleduc            #+#    #+#              #
#    Updated: 2023/02/10 11:39:55 by fleduc           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = STL

CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic
CC = g++
RM = rm -rf

SRCS = main.cpp MutantStack.cpp
OBJS = $(SRCS:.cpp=.o)

all = $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re