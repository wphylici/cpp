/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <wphylici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 20:21:06 by wphylici          #+#    #+#             */
/*   Updated: 2021/03/26 04:14:24 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

#include <iostream>

class Enemy
{
	public:
		Enemy();
		Enemy(int hp, std::string const &type);
		Enemy(Enemy const &enemy);
		virtual ~Enemy();
		Enemy &operator = (Enemy const &enemy);

		std::string const getType() const;
		int getHP() const;
		virtual void takeDamage(int);

	protected:
		int _HP;
		std::string _type;
};

#endif
