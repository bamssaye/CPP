# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/08 02:51:13 by bamssaye          #+#    #+#              #
#    Updated: 2025/03/08 02:51:14 by bamssaye         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = program
FUN = *.cpp
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98  #-fsanitize=address -g3

all : $(NAME)

$(NAME): 
		$(CXX) $(CXXFLAGS) $(FUN) -o $(NAME)
clean :
	rm -rf $(NAME)

re : clean all