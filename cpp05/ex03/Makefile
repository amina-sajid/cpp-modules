# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asajid <asajid@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/04 20:04:48 by asajid            #+#    #+#              #
#    Updated: 2024/05/04 20:18:01 by asajid           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex03
SRCS := Bureaucrat.cpp  AForm.cpp ShrubberyCreationForm.cpp\
		RobotomyRequestForm.cpp \
		PresidentialPardonForm.cpp \
		Intern.cpp \
		main.cpp

OBJS := $(SRCS:.cpp=.o)
CXX := c++
CXXFLAGS := -Wall -Wextra -Werror -std=c++98


all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $@


clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
