#include <iostream>
#include <fstream>
#include <string>

int main(){
    std::string filename, s1, s2, n;
    filename = "test.txt";
    s1 = "class";
    s2 = "allowed";
    char h;
    std::ifstream infile (filename);
    std::ofstream outfile ("test.replace");

    while (infile.get(h)){
        if (isspace(h))
            std::cout << h;
        else
        {
            std::string s(1, h);
            if (isspace(h))
            infile >> filename;
            s += filename;
            (!s1.compare(s)) ? std::cout << s2 : std::cout << s;
        }
    }
    
}