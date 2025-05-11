/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 03:17:20 by bamssaye          #+#    #+#             */
/*   Updated: 2025/05/11 22:12:28 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>

class Form;


class Bureaucrat {
    const std::string _name;
    int _grade;
public:
    Bureaucrat();
    Bureaucrat(std::string name, int grade);
    Bureaucrat(const Bureaucrat & obj);
    Bureaucrat& operator=(const Bureaucrat& obj);
    ~Bureaucrat();
    
    const std::string& getName();
    int getGrade() const;
    

    void incGrade();
    void decGrade();
    void signForm(Form& fo);
    void executeForm(Form const & form);
    
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

std::ostream &operator<<(std::ostream & os, Bureaucrat & ob);



#endif