#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string& name) : ClapTrap(name) {
	this->setTrap("		FragTrap ");
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
	std::cout << this->getTrap() << this->getName() << " was created!!!"  << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << this->getTrap() << this->getName() << " was destroyed!!!"  << std::endl;
	this->setTrap("ClapTrap ");
}

void	FragTrap::highFive() {
	if ( this->getEnergyPoints() <= 0 ) {
		std::cout << this->getTrap() << this->getName() << " is out of energy." << std::endl;
		return ;
	}
	std::cout << this->getTrap() << this->getName() << " high fives everybody." << std::endl;
	this->setEnergyPoints(this->getEnergyPoints() - 1);
	this->displayStatus();
}
