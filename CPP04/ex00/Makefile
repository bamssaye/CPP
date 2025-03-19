NAME = Animal
CXX = c++
CXXFLAGS = 	-Wall -Wextra -Werror -std=c++98  -fsanitize=address 
FUN = *.cpp

all : $(NAME)
$(NAME) : 
	$(CXX) $(CXXFLAGS) $(FUN) -o $(NAME)
clean :
	rm -rf $(NAME)
re : clean all
