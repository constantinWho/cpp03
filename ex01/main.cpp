#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ScavTrap a("George");

	for (int i = 0; i < 4; i++)
		a.attack("Linus");
	for (int i = 0; i < 2; i++)
		a.takeDamage(56);
	for (int i = 0; i < 2; i++)
		a.beRepaired(56);
	a.guardGate();
	return 0;
}
