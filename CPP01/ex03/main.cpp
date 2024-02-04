#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

//verifier si on peur changer le main pour 		jim.setWeapon(&club); et changer la fonction fr setWeapon

int main()
{
	{	
		//HumanA
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}


	{
		//HumanB
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}

	return 0;
}