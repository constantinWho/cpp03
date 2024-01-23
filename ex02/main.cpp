#include "ClapTrap.hpp"
#include "FragTrap.hpp"


int main()
{
	FragTrap a("George");

	a.attack("LORD OF P");
	a.beRepaired(30);
	a.takeDamage(100);
	a.highFive();
	return (0);
}
