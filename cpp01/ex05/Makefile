# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asajid <asajid@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/25 14:09:19 by asajid            #+#    #+#              #
#    Updated: 2023/12/25 14:09:20 by asajid           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = harl

cxx = c++

FLAGS = -Werror -Wall -Wextra -std=cxx98

SRC = harl.cpp main.cpp

OBJ = $(SRC:.cpp=.o)

RM = rm -f

all: $(NAME)

$(NAME):$(OBJ)
	@$(cxx) $(FLAGS) $(OBJ) -o $@

clean:
	@$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all $(NAME)

.PHONY: all clean fclean re
