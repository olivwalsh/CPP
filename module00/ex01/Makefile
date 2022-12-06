# Colors
RED			= "\033[1;31m"
GREEN		= "\033[1;32m"
RESET		= "\033[m"

# Variables
NAME		= phonebook
CFLAGS		= -Wall -Wextra -Werror
CPPFLAGS	= -std=c++98
CC			= c++

SRC			= main.cpp PhoneBook.class.cpp Contact.class.cpp 

OBJ		= $(addprefix ${OBJ_DIR}, ${SRC:.cpp=.o})

# Rules
all : $(NAME)

$(OBJ)%.o : $(SRC)
	@mkdir -p ${@D}
	$(CC) $(CFLAGS) $(CPPFLAGS) -c $< -o $@

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(CPPFLAGS) $(OBJ) -o  $@
	@echo -n "Compiling " $(NAME)
	@echo $(GREEN)"\tOK"$(RESET)

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all
	make all

.PHONY : all clean fclean re