/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <wphylici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 01:39:37 by wphylici          #+#    #+#             */
/*   Updated: 2021/03/27 15:05:21 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>

class ICharacter;
# include "ICharacter.hpp"

class AMateria
{
	public:
		AMateria();
		AMateria(AMateria const &amateria);
		AMateria &operator = (AMateria const &amateria);
		AMateria(std::string const &type);
		virtual ~AMateria();

		std::string const &getType() const; //Returns the materia type
		unsigned int getXP() const; //Returns the Materia's XP
		virtual AMateria *clone() const = 0;
		virtual void use(ICharacter &target);

	private:
		int _XP;
		std::string _type;
};

#endif
