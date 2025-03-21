/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 06:36:43 by bamssaye          #+#    #+#             */
/*   Updated: 2025/03/21 06:47:22 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __AMATERIAL_CPP
#define __AMATERIAL_CPP

#include <iostream>
class ICharacter
{
public:
    virtual ~ICharacter() {}
    virtual std::string const & getName() const = 0;
    virtual void equip(AMateria* m) = 0;
    virtual void unequip(int idx) = 0;
    virtual void use(int idx, ICharacter& target) = 0;
};

class AMateria{

protected:

public:
    AMateria(std::string const & type);
    std::string const & getType() const;
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
};

class Ice : public AMateria{
    
public:
    virtual AMateria* clone() const;
    virtual void use(ICharacter& target);
};

class Cure : public AMateria{

public:
    virtual AMateria* clone() const;
    virtual void use(ICharacter& target);
};


#endif