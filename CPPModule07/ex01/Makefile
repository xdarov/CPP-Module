NAME =							run

SRCS =							main.cpp

OBJ_DIR =						obj

HEADERS =						iter.hpp

OBJ =							$(addprefix $(OBJ_DIR)/, $(patsubst %.cpp, %.o, $(SRCS)))

CC =							c++

FLAGS =							-Wall -Wextra -Werror -std=c++98

.PHONY:							all clean makelibft fclean re

all:							$(NAME)

$(NAME):						$(HEADERS) $(OBJ)
								$(CC) $(FLAGS) $(OBJ) -o $(NAME)

$(OBJ_DIR)/%.o:					%.cpp $(HEADER)
								@mkdir -p $(OBJ_DIR)
								$(CC) $(FLAGS) -c $< -o $@

clean:
								@rm -rf $(OBJ_DIR)

fclean:							clean
								@$(RM) $(NAME)

re:								fclean all