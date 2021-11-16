/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfunyu <mfunyu@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 22:45:44 by mfunyu            #+#    #+#             */
/*   Updated: 2021/11/01 17:51:02 by mfunyu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include <iostream>

Ice::Ice() : AMateria("ice")
{
}

Ice::~Ice()
{
}

Ice::Ice(const Ice &other)
{
	*this = other;
}

Ice	&Ice::operator=(const Ice &other)
{
	if (this != &other)
	{
		_type = other._type;
	}
	return *this;
}

AMateria*	Ice::clone() const
{
	return new Ice(*this);
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << \
				 " *" << std::endl;
}