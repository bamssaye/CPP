NAME = Bureaucrat
CPP = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98  #-fsanitize=address -g3
FUN = Bureaucrat.cpp  main.cpp

all :
	$(CPP) $(CXXFLAGS)  $(FUN) -o $(NAME)
re : clean all
clean : 
	rm -rf $(NAME)