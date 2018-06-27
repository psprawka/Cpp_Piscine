# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/25 07:43:47 by psprawka          #+#    #+#              #
#    Updated: 2018/06/27 07:27:11 by psprawka         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= cato9tails
COMPILER		= clang++
FLAGS			= -g -Wall -Wextra -Werror
FLAGS			+=  -fsanitize=address

# HEADERS	= libftcpp.h  		
	
SRCS = main.cpp
				
CLEAN_A		= @echo "\033[38;5;246mExecutable removed!"
DONE		= @echo "\033[38;5;200mCompiled!"

# LIBFTCPP 	= libftcpp/libftcpp.a

all: $(NAME)

$(NAME):
		@$(COMPILER) $(FLAGS) $(SRCS) -o $(NAME)
		$(DONE)

# $(LIBFTCPP):
# 	@make -C libftcpp
# 	@echo ""

fclean:
# 	@$(MAKE) -C libft/ fclean
	@rm -fr $(NAME) $(NAME).dSYM
	$(CLEAN_A)

re: fclean all 
