# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: omoreno- <omoreno-@student.42barcelona.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/12 11:18:25 by omoreno-          #+#    #+#              #
#    Updated: 2023/06/12 11:18:26 by omoreno-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME:= megaphone

SRC:= megaphone.cpp

OBJ := $(SRC:.cpp=.o)

CC	:= 	@c++
RM	= 	@rm -f
CFLAGS := -Wall -Werror -Wextra -std=c++98

all : $(NAME)

%.o : %.cpp Makefile
	@echo "Compiling" $@
	${CC} ${CFLAGS} -c $< -o $@

$(NAME) : ${OBJ} Makefile
	@echo "Linking" $@
	${CC} ${CFLAGS} ${SRC} -o $@

clean :
	$(RM) $(OBJ)
	@echo "Cleaned objects"

fclean : clean
	$(RM) $(NAME)
	@echo "Cleaned executable"

re: fclean all

.PHONY : clean fclean re all