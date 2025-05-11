/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 11:55:58 by bamssaye          #+#    #+#             */
/*   Updated: 2025/05/11 21:11:10 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Form {
    const std::string _name;
    bool _signed;
    const int _gradeSign;
    const int _gradeExecute;
public:
    Form();
    Form(std::string name, int _gradeSign, int _gradeExecute);
    Form(const Form& ob);
    Form& operator=(const Form&ob);
    ~Form();

    const std::string& getName();
    bool getSigned();
    int getgradeSign()const;
    int getgradeExecute()const;

    void beSigned(Bureaucrat& ob);
    //
    class GradeTooHighException : public std::exception{
        public:
            virtual const char* what() const throw(){
                return ("Grade Too High.");
            }
    };
    class GradeTooLowException : public std::exception{
        public:
            virtual const char* what() const throw(){
                return ("Grade Too Low.");
            }
    };
    
};

std::ostream& operator<<(std::ostream& os, Form& ob);


#endif