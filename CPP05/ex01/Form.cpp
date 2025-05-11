/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 20:13:24 by bamssaye          #+#    #+#             */
/*   Updated: 2025/05/11 22:11:10 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form():_name("DF_Form"), _signed(false), _gradeSign(1), _gradeExecute(1){}
Form::Form(std::string name, int _gradeSign, int _gradeExecute):_name(name), _signed(false), _gradeSign(_gradeSign), _gradeExecute(_gradeExecute){
    if (_gradeSign > 150 || _gradeExecute > 150)
        throw GradeTooLowException();
    else if (_gradeSign < 1 || _gradeExecute < 1)
        throw GradeTooHighException();
}
Form::Form(const Form& ob): _name(ob._name), _signed(ob._signed), _gradeSign(ob._gradeSign), _gradeExecute(ob._gradeExecute){}
Form& Form::operator=(const Form&ob){
    if (this == &ob)
        return *this;
    *this = ob;
    return *this;
}
Form::~Form(){}
////

const std::string& Form::getName(){ return _name;}
bool Form::getSigned(){ return _signed;}
int Form::getgradeSign() const{ return _gradeSign;}
int Form::getgradeExecute() const{ return _gradeExecute;}

////

std::ostream& operator<<(std::ostream& os, Form& ob){
    os << ob.getName() << ob.getSigned();
    return os;
}

////

void Form::beSigned(Bureaucrat& Bur){
    if (Bur.getGrade() > this->_gradeSign)
        throw Form::GradeTooLowException();
    this->_signed = true ;
}
