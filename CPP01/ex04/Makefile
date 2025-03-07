NAME = Replace_world
OUTFILE = filename.replace
CXX = c++
CXXFLAGS = -Wextra -Wall -Werror
FUN = *.cpp

all : $(NAME)

$(NAME) :
	$(CXX) $(CXXFLAGS) $(FUN) -o $(NAME)

clean :
	rm -rf $(NAME) $(OUTFILE)
re : clean all