NAME = megaphone
CFLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++
RM = rm -rf
FUN = megaphone.cpp
OBJ = $(FUN:%.o=%.c)

all :$(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
clean :
	$(RM) $(NAME)
re : clean all
