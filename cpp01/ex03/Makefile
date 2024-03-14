# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asajid <asajid@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/25 14:09:31 by asajid            #+#    #+#              #
#    Updated: 2023/12/25 14:09:32 by asajid           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = unnecessary_violence

CXX = c++

CXXFLAGSFLAGS = -Werror -Wall -Wextra -std=c++98

SRC = main.cpp  HumanA.cpp HumanB.cpp Weapon.cpp

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
