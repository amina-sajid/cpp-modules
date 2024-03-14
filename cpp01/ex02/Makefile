# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asajid <asajid@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/25 14:09:25 by asajid            #+#    #+#              #
#    Updated: 2023/12/25 14:09:26 by asajid           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = hi_this_is_brain

CXX = c++

CXXFLAGS = -Wall -Wextra  -Werror -std=c++98

SRC = main.cpp

OBJ = $(SRC:.cpp=.o)

RM = rm -f

all: $(NAME)

$(NAME):$(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all $(NAME)

.PHONY: all clean fclean re
