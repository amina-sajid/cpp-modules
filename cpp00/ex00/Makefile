
NAME			= megaphone

SOURCE			= megaphone.cpp

OBJECT			=	$(SOURCE:.cpp=.o)

CXX := c++

CXXFLAGS			= 	-Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJECT)
	@$(CXX) $(CXXFLAGS) $(OBJECT) -o $(NAME)

clean:
	@/bin/rm -f $(OBJECT)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re






# # Compiler
# # CXX := c++

# # Compiler flags
# # CXXFLAGS := -std=c++98 -Wall -Wextra

# # Source files
# # SRCS := $(wildcard *.cpp)

# # Object files
# # OBJS := $(SRCS:.cpp=.o)

# # Executable name
# NAME = phonebook

# # Default target
# # all: $(NAME)

# # Rule to compile source files into object files
# %.o: %.cpp
# 	$(CXX) $(CXXFLAGS) -c $< -o $@

# # Rule to link object files into the executable
# $(TARGET): $(OBJS)
# 	$(CXX) $(CXXFLAGS) $^ -o $@

# # Clean up object files and the executable
# clean:
# 	rm -f $(OBJS) $(NAME)

