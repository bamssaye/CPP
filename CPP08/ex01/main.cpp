#include "Span.hpp"

int main() {
    try {
        Span sp(3);
        sp.addNumber(13);
        sp.addNumber(39);
        sp.addNumber(84);
        std::cout   << "Shortest : " << sp.shortestSpan() 
                    << "\nLongest  : " << sp.longestSpan() << std::endl;
        //Span with 10k numbers
        Span bs(10000);
        for (int i = 0; i < 10000; i++)
            bs.addNumber(i + 48);
        std::cout   << "Shortest : " << bs.shortestSpan() 
                    << "\nLongest  : " << bs.longestSpan() << std::endl;
    } catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}