# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/25 07:43:47 by psprawka          #+#    #+#              #
#    Updated: 2018/06/26 22:58:29 by psprawka         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= zombies
COMPILER		= clang++
FLAGS			= -g -Wall -Wextra -Werror
FLAGS			+=  -fsanitize=address

HEADERS	= Zombie.hpp \
		ZombieHorde.hpp	
	
SRCS = main.cpp \
		Zombie.cpp \
		ZombieHorde.cpp	
				
CLEAN_A		= @echo "\033[38;5;246mExecutable removed!"
DONE		= @echo "\033[38;5;200mCompiled!"

all: $(NAME)

$(NAME):
		@$(COMPILER) $(FLAGS) $(SRCS) -o $(NAME)
		$(DONE)

fclean:
	@rm -fr $(NAME) $(NAME).dSYM
	$(CLEAN_A)

re: fclean all 