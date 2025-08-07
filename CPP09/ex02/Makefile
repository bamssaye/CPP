
NAME = pmergeme
CXX = c++
OBGDIR = obj
CXXFLAGS = 	-Wall -Wextra -Werror -std=c++98 
FUN = main.cpp  PmergeMe.cpp
OBJ =  $(addprefix $(OBGDIR)/,  $(notdir $(FUN:.cpp=.o)))

$(OBGDIR)/%.o:%.cpp
	@mkdir -p $(OBGDIR)
	$(CXX) $(CXXFLAGS)  -c $< -o $@

all : $(NAME)
$(NAME) : $(OBJ)
	$(CXX) $(CXXFLAGS) $(FUN) -o $(NAME)
clean :
	rm -rf $(OBGDIR)
fclean : clean
	rm -rf $(NAME)
re : clean all