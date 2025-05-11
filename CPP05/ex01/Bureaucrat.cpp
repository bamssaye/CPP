/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 03:17:24 by bamssaye          #+#    #+#             */
/*   Updated: 2025/05/11 21:54:02 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat():_name("DF_Bu"), _grade(150){}
Bureaucrat::Bureaucrat(const std::string name, int grade):_name(name){
    if (grade > 150)
        throw GradeTooLowException();
    else if (grade < 1)
        throw GradeTooHighException();
    this->_grade = grade;
}
Bureaucrat::Bureaucrat(const Bureaucrat & obj):_name(obj._name){
    this->_grade = obj._grade;
}
Bureaucrat& Bureaucrat::operator=(const Bureaucrat& obj){
    if (this == &obj)
        return (*this);
    *this = obj;
    return *this;
}
Bureaucrat::~Bureaucrat(){}

void Bureaucrat::incGrade(){
    if ((_grade - 1) < 1)
        throw GradeTooHighException();
    this->_grade--;
}
void Bureaucrat::decGrade(){
    if ((_grade + 1) > 150)
        throw GradeTooLowException();
    this->_grade++;
}
void Bureaucrat::signForm(Form& fo){
    try
    {
        fo.beSigned(*this);
        std::cout   << this->getName()
                    << " signed " << fo.getName() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr   << this->getName() 
                    << " couldn't sign " << fo.getName()
                    << " because " << e.what() 
                    << std::endl;
    }    
}

const std::string& Bureaucrat::getName(){ return _name;}
int Bureaucrat::getGrade()const {return _grade;}


std::ostream &operator<<(std::ostream & os, Bureaucrat & ob){
    os << ob.getName() + ", Bureaucrat grade " << ob.getGrade();
    return os;
}