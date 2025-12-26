CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98

NAME = ex01
SRCS_DIR = ./srcs
SRCS = $(wildcard $(SRCS_DIR)/*.cpp)
OBJS_DIR = ./objs
OBJS = $(SRCS:.cpp=.o)
RM = rm -rf

all: $(NAME)

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all


.PHONY: all clean fclean re