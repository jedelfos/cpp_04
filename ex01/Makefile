# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jedelfos <jedelfos@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/06 16:43:19 by jedelfos          #+#    #+#              #
#    Updated: 2021/12/13 14:10:02 by jedelfos         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

CC=clang++
CFLAGS=-Wall -Wextra -Werror -Wshadow -std=c++98

NAME=Tester

SRCS =	main.cpp \
		Animal.cpp \
		Cat.cpp \
		Dog.cpp \
		Brain.cpp

OBJS=$(SRCS:.cpp=.o)

RM=rm -f

INC=	Animal.hpp \
		Cat.hpp \
		Dog.hpp \
		Brain.hpp


%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

all:		$(NAME)
$(OBJS):	$(INC)

$(NAME): 	$(INC) $(OBJS)
	$(CC) $(OBJS) -o $(NAME) 

clean:
	$(RM) $(OBJS)

fclean: 	clean
	$(RM) $(NAME)

re:		fclean all

.PHONY: all clean fclean re