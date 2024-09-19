# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rrault <rrault@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/13 14:54:32 by rrault            #+#    #+#              #
#    Updated: 2024/04/02 15:47:51 by rrault           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	ex01

SRC			=	main.cpp \
				zombieHorde.cpp\
				Zombie.cpp

OBJS		=	$(SRC:.cpp=.o)

COMPILE		=	c++

# -std=c++98 displays an error if an unauthorized function is left in the code
FLAGS		=	-Wall -Wextra -Werror -std=c++98

EXE_NAME	=	-o $(NAME)

EXEC		=	$(NAME)

# ------------------------------------- RULES ---------------------------------
all: $(NAME)

$(NAME): $(OBJS)
	$(COMPILE) $(FLAGS) $(OBJS) $(EXE_NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(EXEC)
	
re:	fclean all

.cpp.o:
	${COMPILE} ${FLAGS} -c $< -o ${<:.cpp=.o}

.PHONY:	all clean fclean re