#include <iostream>
#include <algorithm>
#include <vector>
class A{
    int a ;
    int b;
public:
    A(){
        a = 20;
        b = 25;
    }
    ~A(){}
    int geta(){return a;}
    int getb(){return b;}
};
int main(){

    std::vector<A> hi;
    A s1;
    hi.push_back(s1);
    hi.push_back(s1);
    std::vector<A>::iterator o = hi.begin();
    std::cout << o->geta() << std::endl;
    o++;
    std::cout << hi.size() << std::endl;
    hi.erase(hi.begin());
    std::cout << hi.size() << std::endl;
}