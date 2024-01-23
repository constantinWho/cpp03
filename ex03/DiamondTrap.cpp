#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(const std::string& name) : FragTrap::ClapTrap(name + "_clap_name"),  FragTrap(name), ScavTrap(name), _name(name) {
std::cout << "		DiamondTrap " << this->_name << " was created!!!" << std::endl;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "		DiamondTrap " << _name << " was destroyed!!!" << std::endl;
}

void DiamondTrap::whoAmI() {
	std::cout << "			DiamondTrap name: " << _name;
	std::cout << "		ClapTrap name: " << getName() << std::endl;
}


