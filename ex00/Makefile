NAME = claptrap
SRC = main.cpp ClapTrap.cpp
OBJ = $(SRC:.cpp=.o)
CPP = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f
HDRS = ClapTrap.hpp

all: $(NAME)

$(NAME): $(OBJ)
	$(CPP) $(CFLAGS) -o $@ $^

%.o: %.cpp $(HDRS)
	$(CPP) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all