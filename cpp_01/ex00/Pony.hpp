/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 02:53:23 by wphylici          #+#    #+#             */
/*   Updated: 2021/03/12 23:32:13 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>
# include <iomanip>

/* Обыкновенный шрифт */

# define STD_BLACK		"\e[0;30m"
# define STD_RED		"\e[0;31m"
# define STD_GREEN		"\e[0;32m"
# define STD_YELLOW		"\e[0;33m"
# define STD_BLUE		"\e[0;34m"
# define STD_PURPLE		"\e[0;35m"
# define STD_CYAN		"\e[0;36m"
# define STD_WHITE		"\e[0;37m"

/* Жирный шрифт (Bold) */

# define B_BLACK		"\e[1;30m"
# define B_RED			"\e[1;31m"
# define B_GREEN		"\e[1;32m"
# define B_YELLOW		"\e[1;33m"
# define B_BLUE			"\e[1;34m"
# define B_PURPLE		"\e[1;35m"
# define B_CYAN			"\e[1;36m"
# define B_WHITE		"\e[1;37m"

/* Подчеркивание (Underline) */

# define U_BLACK		"\e[4;30m"
# define U_RED			"\e[4;31m"
# define U_GREEN		"\e[4;32m"
# define U_YELLOW		"\e[4;33m"
# define U_BLUE			"\e[4;34m"
# define U_PURPLE		"\e[4;35m"
# define U_CYAN			"\e[4;36m"
# define U_WHITE		"\e[4;37m"

/* Цвет фона (Background) */

# define BG_BLACK		"\e[40m"
# define BG_RED			"\e[41m"
# define BG_GREEN		"\e[42m"
# define BG_YELLOW		"\e[43m"
# define BG_BLUE		"\e[44m"
# define BG_PURPLE		"\e[45m"
# define BG_CYAN		"\e[46m"
# define BG_WHITE		"\e[47m"

/* Повышенной интенсивности (High Intensty) */

# define HI_BLACK		"\e[0;90m"
# define HI_RED			"\e[0;91m"
# define HI_GREEN		"\e[0;92m"
# define HI_YELLOW		"\e[0;93m"
# define HI_BLUE		"\e[0;94m"
# define HI_PURPLE		"\e[0;95m"
# define HI_CYAN		"\e[0;96m"
# define HI_WHITE		"\e[0;97m"

/* Жирный шрифт с повышенной интенсивностью (Bold High Intensty) */

# define BHI_BLACK		"\e[1;90m"
# define BHI_RED		"\e[1;91m"
# define BHI_GREEN		"\e[1;92m"
# define BHI_YELLOW 	"\e[1;93m"
# define BHI_BLUE		"\e[1;94m"
# define BHI_PURPLE		"\e[1;95m"
# define BHI_CYAN		"\e[1;96m"
# define BHI_WHITE		"\e[1;97m"

/* Фон с повышенной интенсивностью (High Intensty backgrounds) */

# define HIBG_BLACK	 	"\e[0;100m"
# define HIBG_RED	 	"\e[0;101m"
# define HIBG_GREEN	 	"\e[0;102m"
# define HIBG_YELLOW 	"\e[0;103m"
# define HIBG_BLUE		"\e[0;104m"
# define HIBG_PURPLE	"\e[0;105m"
# define HIBG_CYAN		"\e[0;106m"
# define HIBG_WHITE		"\e[0;107m"

/* Сброс */

# define RESET			"\e[0m"


class Pony
{
	public:
		Pony(std::string const Name, std::string const Species, std::string const Color,
		std::string const PlaceOfResidence);
		~Pony();
		void PonyInformation(void);

	private:
		std::string _name;
		std::string _species;
		std::string _color;
		std::string _placeOfResidence;
};

#endif