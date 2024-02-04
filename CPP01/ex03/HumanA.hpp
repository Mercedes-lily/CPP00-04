#ifndef HUMANA_HPP
# define HUMANA_HPP
# include <string>
# include "Weapon.hpp"

class HumanA
{
	public :
		HumanA(std::string name, Weapon &weapon);
		~HumanA(void);
		std::string	getName(void) const;
		std::string	getType(void) const;
		void	attack() const;

	private :
		std::string _name;
		Weapon		&_weapon;
};

#endif