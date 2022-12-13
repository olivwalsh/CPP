# Colors
RED			= "\033[1;31m"
GREEN		= "\033[1;32m"
RESET		= "\033[m"

# Variables
NAME 		= zombiehorde
CC 			= c++ -std=c++98
CXXFLAGS	= -Wall -Wextra -Werror

# Compilation flags
ifeq ($(DMEM),1)
CC 			+= -fsanitize=leak -fno-omit-frame-pointer
endif

OBJDIR 		= objs/

SRC			=	main.cpp \
				Zombie.cpp \
				zombieHorde.cpp

OBJ 		= $(addprefix ${OBJDIR}, ${SRC:.cpp=.o})

all: $(NAME) 

$(OBJDIR)%.o : $(SRCDIR)%.cpp
	mkdir -p ${@D}
	$(CC) $(CXXFLAGS) -c $< -o $@

$(NAME) : $(OBJ)
	@echo -n "Compiling " $(NAME)
	@$(CC) $(CXXFLAGS) $(OBJ)  $(MLXLIBX) -o $@
	@echo ${GREEN}"\t\tOK"${RESET}

clean :
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(NAME)

re: fclean all
	make all

.PHONY: all clean fclean re