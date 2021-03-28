/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <wphylici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 16:27:49 by wphylici          #+#    #+#             */
/*   Updated: 2021/03/28 20:09:19 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>

# include "Form.hpp"

class RobotomyRequestForm : public Form
{
	public:
		RobotomyRequestForm(std::string const Target);
		RobotomyRequestForm(RobotomyRequestForm const &RRform);
		virtual ~RobotomyRequestForm();
		RobotomyRequestForm &operator = (RobotomyRequestForm const &RRform);
		std::string getName() const;
		void execute(Bureaucrat const &executor) const;

	private:
		RobotomyRequestForm();
};

#endif
