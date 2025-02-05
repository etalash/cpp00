# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: stalash <stalash@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/04 19:08:10 by stalash           #+#    #+#              #
#    Updated: 2025/02/05 19:41:28 by stalash          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME        =   my_awesome_phoneBook
CC          =   c++
CFLAGS      =   -Wall -Werror -Wextra -std=c++98

# directories
SRC_DIR      =  src/
OBJ_DIR      =  obj/
INC_DIR      =  include/

# color codes
RESET       =   \033[0m
GREEN       =   \033[92m  # Bright green
YELLOW      =   \033[93m  # Bright yellow
BLUE        =   \033[94m  # Bright blue
RED         =   \033[91m  # Bright red


# source files
SRC_FILES    =   Contact.cpp main.cpp PhoneBook.cpp

OBJ_FILES    =   $(SRC_FILES:.cpp=.o)

# paths
SRC         =   $(addprefix $(SRC_DIR), $(SRC_FILES))
OBJ         =   $(addprefix $(OBJ_DIR), $(OBJ_FILES))

# all rule
# all: $(NAME)
# 	@echo "$(GREEN) _______           _______  _______ $(RESET)"
# 	@echo "$(YELLOW)(  ____ \|\     /|(  __   )(  __   )$(RESET)"
# 	@echo "$(BLUE)| (    \/( \   / )| (  )  || (  )  |$(RESET)"
# 	@echo "$(RED)| (__     \ (_) / | | /   || | /   |$(RESET)"
# 	@echo "$(CYAN)  |  __)     ) _ (  | (/ /) || (/ /) |$(RESET)"
# 	@echo "$(MAGENTA)  | (       / ( ) \ |   / | ||   / | |$(RESET)"
# 	@echo "$(GREEN)| (____/\( /   \ )|  (__) ||  (__) |$(RESET)"
# 	@echo "$(YELLOW)(_______/|/     \|(_______)(_______)$(RESET)"
# 	@echo "$(BLUE)                                    $(RESET)"
# 	@echo "$(RED)                                    $(RESET)"
# 	@echo "$(CYAN)                                    $(RESET)"
# 	@echo "$(MAGENTA)                                    $(RESET)"
# 	@echo "$(GREEN)                                    $(RESET)"
# 	@echo "$(YELLOW)                                    $(RESET)"

# all rule
all: $(NAME)
	@echo "$(GREEN) _______           _______  __   $(RESET)"
	@echo "$(YELLOW)(  ____ \|\     /|(  __   )/  \  $(RESET)"
	@echo "$(BLUE)| (    \/( \   / )| (  )  |\/) ) $(RESET)"
	@echo "$(RED)| (__     \ (_) / | | /   |  | | $(RESET)"
	@echo "$(CYAN)  |  __)     ) _ (  | (/ /) |  | | $(RESET)"
	@echo "$(MAGENTA)  | (       / ( ) \ |   / | |  | | $(RESET)"
	@echo "$(GREEN)| (____/\( /   \ )|  (__) |__) (_$(RESET)"
	@echo "$(YELLOW)(_______/|/     \|(_______)\____/ $(RESET)"
	@echo "$(BLUE)                                 $(RESET)"
	@echo "$(RED)                                 $(RESET)"
	@echo "$(CYAN)                                 $(RESET)"
	@echo "$(MAGENTA)                                 $(RESET)"
	@echo "$(GREEN)                                 $(RESET)"
	@echo "$(YELLOW)                                 $(RESET)"



# compile the executable
$(NAME): $(OBJ)
	@echo "$(YELLOW)Compiling [$(NAME)]...$(RESET)"
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	@echo "$(GREEN)Finished [$(NAME)]$(RESET)"

# compile objects
$(OBJ_DIR)%.o: $(SRC_DIR)%.cpp
	@mkdir -p $(OBJ_DIR)
	@echo "$(YELLOW)Compiling [$@]...$(RESET)"
	@$(CC) $(CFLAGS) -I $(INC_DIR) -o $@ -c $<
	@echo "$(GREEN)Finished [$@]$(RESET)"

# clean rule
clean:
	@if [ -d "$(OBJ_DIR)" ]; then \
		rm -rf $(OBJ_DIR); \
		echo "$(BLUE)Deleted all object files from $(OBJ_DIR)...$(RESET)"; \
	else \
		echo "$(RED)No objects to remove from $(OBJ_DIR).$(RESET)"; \
	fi

# fclean rule
fclean: clean
	@if [ -f "$(NAME)" ]; then \
		rm -f $(NAME); \
		echo "$(BLUE)Deleted executable $(NAME)...$(RESET)"; \
	else \
		echo "$(RED)No executable to remove from the project directory.$(RESET)"; \
	fi

# re rule
re: fclean all

# phony rules
.PHONY: all clean fclean re
