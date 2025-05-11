/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 03:17:20 by bamssaye          #+#    #+#             */
/*   Updated: 2025/05/10 23:23:21 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <exception>

class Bureaucrat {
    const std::string _name;
    int _grade;
public:
    Bureaucrat();
    Bureaucrat(const Bureaucrat & obj);
    Bureaucrat& operator=(const Bureaucrat& obj);
    ~Bureaucrat();
    //
    Bureaucrat(std::string name, int grade);
    //
    const std::string& getName();
    int getGrade() const;
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
    //
    void incGrade();
    void decGrade();
};

std::ostream &operator<<(std::ostream & os, Bureaucrat & ob);