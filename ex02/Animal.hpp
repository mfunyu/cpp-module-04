/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfunyu <mfunyu@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 14:54:57 by mfunyu            #+#    #+#             */
/*   Updated: 2021/10/31 13:53:19 by mfunyu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	protected:
		std::string		_type;

	public:
		Animal();
		virtual ~Animal();
		Animal(Animal const &other);
		Animal	&operator=(Animal const &other);

		Animal(std::string type);

		std::string		getType() const;

		virtual void	makeSound() const = 0;
};

#endif /* ANIMAL_HPP */