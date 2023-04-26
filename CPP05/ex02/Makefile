# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/25 09:27:44 by lel-khou          #+#    #+#              #
#    Updated: 2023/04/26 18:40:34 by lel-khou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -f

HEADER = Bureaucrat.hpp Form.hpp

SRC = Bureaucrat.cpp main.cpp Form.cpp

NAME = form

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)
	
clean: 
	$(RM) $(OBJ)
	
fclean: clean
	$(RM) $(NAME)

re: fclean all
