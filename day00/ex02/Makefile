# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/25 07:43:47 by psprawka          #+#    #+#              #
#    Updated: 2018/06/26 07:36:54 by psprawka         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= accounts
COMPILER		= clang++
FLAGS			= -g -Wall -Wextra -Werror
FLAGS			+=  -fsanitize=address

HEADERS	= Account.class.hpp 		
	
SRCS = tests.cpp \
		Account.class.cpp
				
CLEAN_A		= @echo "\033[38;5;246mExecutable removed!"
DONE		= @echo "\033[38;5;200mCompiled!"

all: $(NAME)

$(NAME):
		@$(COMPILER) $(FLAGS) $(SRCS) -o $(NAME)
		$(DONE)

fclean:
	@rm -f $(NAME)
	$(CLEAN_A)

re: fclean all 


# NAME			= phonebook
# COMPILER		= clang++
# FLAGS			= -g -Wall -Wextra -Werror
# FLAGS			+=  -fsanitize=address

# HEADERS	= header.hpp \
# 			ClassContact.hpp \
# 			ClassPhonebook.hpp			
	
# SRCS = main.cpp \
# 		ClassContact.cpp \
# 		ClassPhonebook.cpp

# OBJS_SERVER = $(SRCS:.cpp=.o)
				
# CLEAN_A		= @echo "\033[38;5;246mExecutable removed!"
# DONE		= @echo "\033[38;5;200mCompiled!"

# all: $(NAME)

# %.o: %.cpp
# 	@$(COMPILER) -g $(CFLAGS) -I $(HEADERS) -cpp $< -o $@

# $(NAME): $(OBJS)
# 		@$(COMPILER) $(FLAGS) -I $(HEADERS) $(SRCS) -o $(NAME)
# 		$(DONE)

# fclean:
# 	@rm -f $(NAME)
# 	$(CLEAN_A)

# re: fclean all 