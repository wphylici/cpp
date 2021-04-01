/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <wphylici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 16:28:58 by wphylici          #+#    #+#             */
/*   Updated: 2021/03/29 21:17:52 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>

# include "Form.hpp"

class PresidentialPardonForm : public Form
{
	public:
		PresidentialPardonForm(std::string const Target);
		PresidentialPardonForm(PresidentialPardonForm const &PPform);
		virtual ~PresidentialPardonForm();
		PresidentialPardonForm &operator = (PresidentialPardonForm const &PPform);
		std::string getName() const;
		void execute(Bureaucrat const &executor) const;

	private:
		PresidentialPardonForm();
};

#endif
