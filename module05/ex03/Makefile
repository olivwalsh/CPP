# Colors
RED			= "\033[1;31m"
GREEN		= "\033[1;32m"
RESET		= "\033[m"

# Variables
NAME 		= intern
CC 			= c++ -std=c++98 -g3
CXXFLAGS	= -Wall -Wextra -Werror

# Compilation flags
ifeq ($(DMEM),1)
CC 			+= -fsanitize=address -fno-omit-frame-pointer
endif

OBJDIR 		= objs/
INCDIR		= inc/
SRCDIR		= src/

SRC			=	main.cpp \
				Bureaucrat.cpp \
				Form.cpp \
				ShrubberyCreationForm.cpp \
				RobotomyRequestForm.cpp \
				PresidentialPardonForm.cpp \
				Intern.cpp

OBJ 		= $(addprefix ${OBJDIR}, ${SRC:.cpp=.o})
INC 		= -I./${INCDIR}

all: $(NAME) 

$(OBJDIR)%.o : $(SRCDIR)%.cpp
	mkdir -p ${@D}
	$(CC) $(CXXFLAGS) $(INC) -c $< -o $@

$(NAME) : $(OBJ)
	@echo -n "Compiling " $(NAME)
	@$(CC) $(CXXFLAGS) $(INC) $(OBJ)  $(MLXLIBX) -o $@
	@echo ${GREEN}"\t\tOK"${RESET}

clean :
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(NAME)

re: fclean all
	make all

.PHONY: all clean fclean re