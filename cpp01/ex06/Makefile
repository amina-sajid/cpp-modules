# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asajid <asajid@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/25 14:09:59 by asajid            #+#    #+#              #
#    Updated: 2023/12/25 14:10:00 by asajid           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = harlFilter

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
