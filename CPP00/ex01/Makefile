NAME = phonebook
FUN = main.cpp Contact.cpp PhoneBook.cpp
OBJ = $(FUN:%.o=%.c)
all :$(NAME)
$(NAME) : $(OBJ)
	c++ -Wall -Wextra -Werror -std=c++98 $(OBJ) -o $(NAME)
clean :
	$(RM) $(NAME)
re : clean all