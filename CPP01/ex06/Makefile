# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/13 10:17:33 by lel-khou          #+#    #+#              #
#    Updated: 2023/04/13 19:04:46 by lel-khou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++

FLAG = -Wall -Werror -Wextra -std=c++98

NAME = harlFilter

HEADER = Harl.hpp

RM = rm -f

SRC = main.cpp Harl.cpp

OBJS = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS) $(HEADER)
	$(CXX) $(FLAG) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
