#pragma once

#include <iostream>

class Form;

class Intern{
    Form* makeRobotomy(const std::string& target);
    Form* makePresidential(const std::string& target);
    Form* makeShrubbery(const std::string& target);
public:
    Intern();
    ~Intern();
    Intern(const Intern& obj);
    Intern& operator=(const Intern& obj);

    Form* makeForm(std::string name, std::string target);
};