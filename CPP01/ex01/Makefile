# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/08 05:10:42 by bamssaye          #+#    #+#              #
#    Updated: 2025/03/05 21:22:25 by bamssaye         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombieHorde
FUN = *.cpp
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3

all : $(NAME)

$(NAME): 
		$(CXX) $(CXXFLAGS) $(FUN) -o $(NAME)
clean :
	rm -rf $(NAME)

re : clean all
