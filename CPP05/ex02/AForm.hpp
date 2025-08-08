#pragma once

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class AForm {
    
    std::string const   _name;
    bool                _signed;
    int const           _gradeSign;
    int const           _gradeExecute;
    AForm();
protected:
    void _SignedGradeCheck(Bureaucrat const & Bur)const;
public:

    AForm(std::string name, int _gradeSign, int _gradeExecute);
    AForm(const AForm& ob);
    AForm& operator=(const AForm&ob);
    virtual ~AForm();

    const   std::string& getName() const;
    bool    getSigned() const;
    int     getgradeSign() const;
    int     getgradeExecute() const;
    

    class GradeTooHighException : public std::exception{
        public:
            virtual const char* what() const throw();
    };
    class GradeTooLowException : public std::exception{
        public:
            virtual const char* what() const throw();
    };
    class FormNotSignedException : public std::exception{
        public:
            virtual const char* what() const throw();
    };

    void    beSigned(Bureaucrat& ob);
    virtual void execute(Bureaucrat const & executor) const = 0;
    
};
std::ostream&   operator<<(std::ostream& os, AForm& ob);
