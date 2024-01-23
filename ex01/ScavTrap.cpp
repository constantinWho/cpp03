#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name) {
	this->setName(name);
	this->setTrap("	< ScavTrap > ");
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
	std::cout << this->getTrap() << this->getName() << " was created!!!"  << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << this->getTrap() << this->getName() << " was destroyed!!!"  << std::endl;
	this->setTrap("ClapTrap ");
}

void ScavTrap::guardGate() {
	std::cout << this->getTrap() << this->getName() << " is now in Gatekeeper mode." << std::endl;
}
