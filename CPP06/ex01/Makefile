# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/25 09:27:44 by lel-khou          #+#    #+#              #
#    Updated: 2023/05/01 12:10:08 by lel-khou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -f

HEADER = Serializer.hpp

SRC =  main.cpp Serializer.cpp

NAME = serializer

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)
	
clean: 
	$(RM) $(OBJ)
	
fclean: clean
	$(RM) $(NAME)

re: fclean all
