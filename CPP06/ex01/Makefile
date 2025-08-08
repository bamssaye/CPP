NAME = Serializer
CXX = c++
CXXFLAGS = -Wextra -Wall -Werror -std=c++98
FUN = main.cpp Serializer.cpp

all : $(NAME)

$(NAME) :
	$(CXX) $(CXXFLAGS) $(FUN) -o $(NAME)

clean :
	rm -rf $(NAME) $(OUTFILE)
re : clean all 