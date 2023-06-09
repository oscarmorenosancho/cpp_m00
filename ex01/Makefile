NAME:= phonebook

SRC:= 	Contact.cpp \
		PhoneBook.cpp \
		PhoneBookMenu.cpp

MAINSRC :=	main.cpp

OBJ := $(SRC:.cpp=.o)
HEADER := $(SRC:.cpp=.hpp)
MAINOBJ := $(MAINSRC:.cpp=.o)

CC	:= 	@c++
RM	= 	@rm -f
CFLAGS := -Wall -Werror -Wextra -std=c++98

all : $(NAME)

%.o : %.cpp ${HEADER} Makefile
	@echo "Compiling" $@
	${CC} ${CFLAGS} -c $< -o $@

$(NAME) : ${OBJ} ${MAINOBJ} ${HEADER} Makefile
	@echo "Linking" $@
	${CC} ${CFLAGS} ${MAINOBJ} ${OBJ} -o $@

clean :
	$(RM) $(OBJ)
	$(RM) $(MAINOBJ)
	@echo "Cleaned objects"

fclean : clean
	$(RM) $(NAME)
	@echo "Cleaned executable"

re: fclean all

.PHONY : clean fclean re all