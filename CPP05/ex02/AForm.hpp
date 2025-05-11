/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 11:55:58 by bamssaye          #+#    #+#             */
/*   Updated: 2025/05/11 21:11:10 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef AForm_HPP
#define AForm_HPP

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class AForm {
    const std::string _name;
    bool _signed;
    const int _gradeSign;
    const int _gradeExecute;
public:
    AForm();
    AForm(std::string name, int _gradeSign, int _gradeExecute);
    AForm(const AForm& ob);
    AForm& operator=(const AForm&ob);
    virtual ~AForm();

    const std::string& getName();
    bool getSigned();
    int getgradeSign()const;
    int getgradeExecute()const;

    virtual void beSigned(Bureaucrat& ob) = 0;
    void execute(Bureaucrat const & executor) const;
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

std::ostream& operator<<(std::ostream& os, AForm& ob);


#endif