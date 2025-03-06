# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/04 02:53:28 by bamssaye          #+#    #+#              #
#    Updated: 2025/03/04 02:53:29 by bamssaye         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone
CFLAGS = -Wall -Wextra -Werror -std=c++98
CXX = c++
FUN = megaphone.cpp
OBJ = $(FUN:%.o=%.c)

all :$(NAME)
$(NAME) : $(OBJ)
	$(CXX) $(CFLAGS) $(OBJ) -o $(NAME)
clean :
	rm -rf $(NAME)
re : clean all
