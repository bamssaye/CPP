# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/06 06:52:57 by bamssaye          #+#    #+#              #
#    Updated: 2024/10/06 07:17:44 by bamssaye         ###   ########.fr        #
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
	rm -rf $(NAME)
fclean : clean
	rm -rf $(OB)
re : clean all
