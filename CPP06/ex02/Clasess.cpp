#include "Clasess.hpp"

Base::~Base(){}
static void Printer(const std::string& str){
    std::cout << str << std::endl;
}
Base * generate(void){
    std::srand(std::time(NULL));
    int r = std::rand() % 3;

    if (r == 0) {return (Printer("Generated: A"), new A);}
    else if (r == 1) {return (Printer("Generated: B"), new B);} 
    else {return (Printer("Generated: C"), new C);}
}
void identify(Base* p){
    if (dynamic_cast<A*>(p)) Printer("Type is: A");
    else if (dynamic_cast<B*>(p)) Printer("Type is: B"); 
    else if (dynamic_cast<C*>(p)) Printer("Type is: C");
    else Printer("unknown") ;
}
void identify(Base& p){
    try {
        A& a = dynamic_cast<A&>(p);
        (void)a;
        Printer("Type is: A");
    }catch (...) {
        try {
            B& b = dynamic_cast<B&>(p);
            (void)b;
            Printer("Type is: B"); 
        } catch (...) {
            try {
                C& c = dynamic_cast<C&>(p);
                (void)c;
                Printer("Type is: C");
            } catch (...) {
                Printer("unknown");
            }
        }
    }
}