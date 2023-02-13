# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/25 14:33:23 by lel-khou          #+#    #+#              #
#    Updated: 2023/02/12 21:58:24 by lel-khou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = g++

FLAGS = -Wall -Werror -Wextra -std=c++98

NAME = phonebook

RM = rm -f

SRC = Contact.cpp main.cpp PhoneBook.cpp

OBJS = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAG) $(OBJS) -o $(NAME)
	
clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
