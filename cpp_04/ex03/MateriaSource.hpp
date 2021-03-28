/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <wphylici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 13:45:33 by wphylici          #+#    #+#             */
/*   Updated: 2021/03/27 16:12:14 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource();
		MateriaSource(MateriaSource const &materiasource);
		MateriaSource &operator = (MateriaSource const &materiasource);
		virtual ~MateriaSource();

		virtual void learnMateria(AMateria *);
		virtual AMateria* createMateria(std::string const &type);

	private:
		AMateria *_forClone[4];


};


#endif
