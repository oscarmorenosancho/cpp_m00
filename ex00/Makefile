NAME:= megaphone

SRC:= megaphone.cpp

CC	:= 	c++
CFLAGS := -Wall -Werror -Wextra -std=c++98

all : $(NAME)

$(NAME) : ${SRC}
	${CC} ${CFLAGS} ${SRC} -o $@
clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re: fclean all

.PHONY : clean fclean re all