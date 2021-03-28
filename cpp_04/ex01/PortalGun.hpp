/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PortalGun.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <wphylici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 16:41:25 by wphylici          #+#    #+#             */
/*   Updated: 2021/03/27 16:45:49 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PORTALGUN_HPP
# define PORTALGUN_HPP

#include "AWeapon.hpp"

class PortalGun : public AWeapon
{
	public:
		PortalGun();
		PortalGun(PortalGun const &portalgun);
		virtual ~PortalGun();
		PortalGun &operator = (PortalGun const &portalgun);
		virtual void attack() const;
};

#endif
