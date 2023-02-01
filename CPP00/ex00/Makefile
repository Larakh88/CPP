# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/19 14:25:16 by lel-khou          #+#    #+#              #
#    Updated: 2023/01/25 14:39:22 by lel-khou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = g++

FLAG = -Wall -Werror -Wextra -std=c++98

NAME = megaphone

RM = rm -f

SRC = megaphone.cpp

OBJS = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAG) $(OBJS) -o $(NAME)

clean: 
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
