# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/06 06:52:57 by bamssaye          #+#    #+#              #
#    Updated: 2025/02/05 04:23:32 by bamssaye         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook
FUN = main.cpp Contact.cpp PhoneBook.cpp
OB = obj
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
OBJ = $(addprefix $(OB)/, $(notdir  $(FUN:.cpp=.o)))

$(OB)/%.o:	%.cpp
	@mkdir -p $(OB)
	$(CXX) $(CXXFLAGS) -c $< -o $@

all : $(NAME)

$(NAME): $(OBJ)
		$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)
clean :
	rm -rf $(OB)
fclean : clean
	rm -rf $(NAME)
re : clean all
