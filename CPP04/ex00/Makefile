NAME = DiamondTrap
CXX = c++
CXXFLAGS = 	-Wall -Wextra -Werror -std=c++98 #-fsanitize=address 
SRC =  Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp  WrongCat.cpp  main.cpp 
OBGDIR = obj
OBJ =  $(addprefix $(OBGDIR)/,  $(SRC:.cpp=.o))

all : $(NAME)
$(OBGDIR)/%.o: %.cpp
	@mkdir -p $(OBGDIR) 
	$(CXX) $(CXXFLAGS) -c $< -o $@ 

$(NAME) : $(OBJ) 
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean :
	rm -rf $(NAME) $(OBGDIR)
re : clean all