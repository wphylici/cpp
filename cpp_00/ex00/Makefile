NAME		=	megaphone

HEADER		=	./includes/

CC			=	clang++

FLAGS		=	-Wall -Wextra -Werror

SRCS		=	./megaphone.cpp

OBJS		=	$(SRCS:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(FLAGS) -std=c++98 $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CC) $(FLAGS) -std=c++98 -c $< -o $@

re	:fclean all

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm $(NAME)

.PHONY: all clean fclean re