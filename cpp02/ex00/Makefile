# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asajid <asajid@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/26 13:45:01 by asajid            #+#    #+#              #
#    Updated: 2023/12/26 13:59:09 by asajid           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS = main.cpp Fixed.cpp

OBJS = $(SRCS:.cpp=.o)


CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = ex00

all : $(NAME)

$(NAME) : $(OBJS)
		$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean :
	rm -rf $(OBJS)

fclean  : clean
	rm -rf $(NAME)

re  : fclean all

.PHONY: all clean fclean re
