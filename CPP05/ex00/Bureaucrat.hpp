#pragma once

#include <iostream>
#include <exception>

class Bureaucrat {
    std::string const _name;
    int _grade;
    Bureaucrat();
public:
    Bureaucrat(std::string name, int grade);
    Bureaucrat(const Bureaucrat & obj);
    Bureaucrat& operator=(const Bureaucrat& obj);
    ~Bureaucrat();
    //
    class GradeTooHighException : public std::exception{
    public:
        virtual const char* what() const throw();
    };
    class GradeTooLowException : public std::exception{
    public:
        virtual const char* what() const throw();
    };
    //
    const std::string& getName() const;
    int getGrade() const;
    //
    void incGrade();
    void decGrade();
};

std::ostream &operator<<(std::ostream & os, Bureaucrat & ob);
