/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 21:57:34 by bamssaye          #+#    #+#             */
/*   Updated: 2025/05/11 22:13:52 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "AForm.hpp"

class PresidentialPardonForm : public AForm{

public:
    // PresidentialPardonForm();
    PresidentialPardonForm(std::string target);
    PresidentialPardonForm(const PresidentialPardonForm & obj);
    PresidentialPardonForm& operator=(const PresidentialPardonForm& obj);
    ~PresidentialPardonForm();
    
    ///
    void beSigned(Bureaucrat& ob);
    
};

class RobotomyRequestForm : public AForm{

public:
    // RobotomyRequestForm();
    RobotomyRequestForm(std::string target);
    RobotomyRequestForm(const RobotomyRequestForm & obj);
    RobotomyRequestForm& operator=(const RobotomyRequestForm& obj);
    ~RobotomyRequestForm(); 
    
    //
    void beSigned(Bureaucrat& ob);
};

class ShrubberyCreationForm : public AForm{

public:
    // ShrubberyCreationForm();
    ShrubberyCreationForm(std::string target);
    ShrubberyCreationForm(const ShrubberyCreationForm& obj);
    ShrubberyCreationForm& operator=(const ShrubberyCreationForm& obj);
    ~ShrubberyCreationForm();  
    
    //
    void beSigned(Bureaucrat& ob);
};