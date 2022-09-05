NAME =							run

SRCS =							main.cpp Bureaucrat.cpp Form.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp Intern.cpp

OBJ_DIR =						obj

HEADERS =						Bureaucrat.hpp Form.cpp PresidentialPardonForm.hpp RobotomyRequestForm.hpp ShrubberyCreationForm.hpp Intern.hpp

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