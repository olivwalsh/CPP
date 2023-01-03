# Colors
RED			= "\033[1;31m"
GREEN		= "\033[1;32m"
RESET		= "\033[m"

# Variables
NAME 		= easyfind
CXX 		= c++ 
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98 -g3

# Compilation flags
ifeq ($(DMEM),1)
CXX 			+= -fsanitize=address -fno-omit-frame-pointer
endif

OBJDIR 		= objs/
INCDIR		= inc/
SRCDIR		= src/

SRC			=	main.cpp

OBJ 		= $(addprefix ${OBJDIR}, ${SRC:.cpp=.o})
INC 		= -I./${INCDIR}

all: $(NAME) 

$(OBJDIR)%.o : $(SRCDIR)%.cpp
	mkdir -p ${@D}
	$(CXX) $(CXXFLAGS) $(INC) -c $< -o $@

$(NAME) : $(OBJ)
	@echo -n "Compiling " $(NAME)
	@$(CXX) $(CXXFLAGS) $(INC) $(OBJ) -o $@
	@echo ${GREEN}"\t\tOK"${RESET}

clean :
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(NAME)

re: fclean all
	make all

.PHONY: all clean fclean re