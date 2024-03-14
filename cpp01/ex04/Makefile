# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asajid <asajid@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/25 14:09:35 by asajid            #+#    #+#              #
#    Updated: 2023/12/25 14:09:36 by asajid           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = sed_is_for_losers

CXX = c++

CXXFLAGSFLAGS = -Werror -Wall -Wextra -std=c++98

SRC = main.cpp

OBJ = $(SRC:.cpp=.o)

RM = rm -f

all: $(NAME)

$(NAME):$(OBJ)
	@$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all $(NAME)

.PHONY: all clean fclean re
