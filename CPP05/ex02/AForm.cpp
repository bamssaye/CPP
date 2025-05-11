/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 20:13:24 by bamssaye          #+#    #+#             */
/*   Updated: 2025/05/11 21:49:26 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm():_name("DF_AForm"), _signed(false), _gradeSign(1), _gradeExecute(1){}
AForm::AForm(std::string name, int _gradeSign, int _gradeExecute):_name(name), _signed(false), _gradeSign(_gradeSign), _gradeExecute(_gradeExecute){
    if (_gradeSign > 150 || _gradeExecute > 150)
        throw GradeTooLowException();
    else if (_gradeSign < 1 || _gradeExecute < 1)
        throw GradeTooHighException();
}
AForm::AForm(const AForm& ob): _name(ob._name), _signed(ob._signed), _gradeSign(ob._gradeSign), _gradeExecute(ob._gradeExecute){}
AForm& AForm::operator=(const AForm&ob){
    if (this == &ob)
        return *this;
    *this = ob;
    return *this;
}
AForm::~AForm(){}
////

const std::string& AForm::getName(){ return _name;}
bool AForm::getSigned(){ return _signed;}
int AForm::getgradeSign() const{ return _gradeSign;}
int AForm::getgradeExecute() const{ return _gradeExecute;}

////

std::ostream& operator<<(std::ostream& os, AForm& ob){
    os << ob.getName() << ob.getSigned();
    return os;
}

////

void AForm::beSigned(Bureaucrat& Bur){
    if (Bur.getGrade() > this->_gradeSign)
        throw AForm::GradeTooLowException();
    this->_signed = true ;
}
