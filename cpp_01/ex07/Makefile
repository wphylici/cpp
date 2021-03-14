NAME		=	replace

#HEADER		=	./includes/

CC			=	clang++

FLAGS		=	-Wall -Wextra -Werror

SRCS		=	./main.cpp

OBJS		=	$(SRCS:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(FLAGS) -std=c++98 $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CC) $(FLAGS) -std=c++98 -c $< -o $@

test: all
	./$(NAME) test "hello" "bye"

re	:fclean all

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm test.replace $(NAME)

.PHONY: all clean fclean re
