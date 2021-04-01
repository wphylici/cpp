/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <wphylici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 16:25:38 by wphylici          #+#    #+#             */
/*   Updated: 2021/03/28 20:09:23 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include "Form.hpp"


class ShrubberyCreationForm : public Form
{
	public:
		ShrubberyCreationForm(std::string const Target);
		ShrubberyCreationForm(ShrubberyCreationForm const &SCform);
		virtual ~ShrubberyCreationForm();
		ShrubberyCreationForm &operator = (ShrubberyCreationForm const &SCform);
		std::string getName() const;
		void execute(Bureaucrat const &executor) const;

	private:
		ShrubberyCreationForm();
};

#endif
