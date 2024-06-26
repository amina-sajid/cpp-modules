NAME = iter
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
CXX = c++
SRC = main.cpp

OBJ = ${SRC:%.cpp=%.o}

all: ${NAME}

${NAME}:${OBJ}
		${CXX} ${CXXFLAGS} ${OBJ} -o $(NAME)

fclean: clean
		@rm -rf ${NAME}

clean:
		@rm -rf ${OBJ}

re: fclean all