#pragma once

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Form {
    
    std::string const   _name;
    bool                _signed;
    int const           _gradeSign;
    int const           _gradeExecute;
    Form();
public:

    Form(std::string name, int _gradeSign, int _gradeExecute);
    Form(const Form& ob);
    Form& operator=(const Form&ob);
    ~Form();
    //
    const   std::string& getName() const;
    bool    getSigned() const;
    int     getgradeSign() const;
    int     getgradeExecute() const;
    
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
    void    beSigned(Bureaucrat& ob);
    
};
std::ostream&   operator<<(std::ostream& os, Form& ob);
