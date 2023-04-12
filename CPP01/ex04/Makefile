# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/11 23:27:19 by lel-khou          #+#    #+#              #
#    Updated: 2023/04/12 15:44:24 by lel-khou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++

FLAG = -Wall -Werror -Wextra -std=c++98

NAME = replace

HEADER = replace.hpp

RM = rm -f

SRC = main.cpp

OBJS = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS) $(HEADER)
	$(CXX) $(FLAG) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

