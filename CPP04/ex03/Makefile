# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/21 06:31:51 by bamssaye          #+#    #+#              #
#    Updated: 2025/03/21 06:32:12 by bamssaye         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Interface
CXX = c++
CXXFLAGS = 	-Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3
FUN = *.cpp

all : $(NAME)
$(NAME) : 
	$(CXX) $(CXXFLAGS) $(FUN) -o $(NAME)
clean :
	rm -rf $(NAME)
re : clean all
