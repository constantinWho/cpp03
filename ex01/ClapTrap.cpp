#include "ClapTrap.hpp"


/* Constructors and Destructor */

ClapTrap::ClapTrap() {
	this->setName("NPC");
	this->setTrap("ClapTrap ");
	this->setDefault();
	std::cout << this->getTrap() << this->getName() << " was created!!!" << std::endl;
}

ClapTrap::ClapTrap( std::string name) {
	this->setName(name);
	this->setTrap("ClapTrap ");
	this->setDefault();
	std::cout << this->getTrap() << this->getName() << " was created!!!" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap& other) {
	*this = other;
}

ClapTrap& ClapTrap::operator=( const ClapTrap& other) {
	if (this != &other)
	{
		this->_name = other.getName();
		this->_hitPoints = other.getHitPoints();
		this->_energyPoints = other.getEnergyPoints();
		this->_attackDamage = other.getAttackDamage();
	}
	return *this;
}

ClapTrap::~ClapTrap() {
	std::cout << this->getTrap() << this->getName() << " was destroyed!!!" << std::endl;
}


/* Actions */

void	ClapTrap::attack(const std::string& target) {
	if (this->getHitPoints() > 0 && this->getEnergyPoints() > 0) {
		this->setEnergyPoints(this->_energyPoints - 1);
		std::cout << this->getTrap() << this->getName() << " attacks " << target
					<< ", causing " << this->getAttackDamage()
					<< " points of damage!" << std::endl;
		this->displayStatus();
	} else {
	std::cout << this->getTrap() << this->getName() << " can't attack. "
				<< "Not enough hit points or energy points." << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (this->getHitPoints() > 0) {
		this->setHitPoints((this->getHitPoints() > amount) ? (this->getHitPoints() - amount) : 0);
		std::cout << this->getTrap() << this->getName()<< " takes " << amount
					<< " points of damage!" << std::endl;
	} else {
		std::cout << this->getTrap() << this->getName()
					<< " can't take damage. No hit points left." << std::endl;
	}
	this->displayStatus();
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->getHitPoints() > 0 && this->getEnergyPoints() > 0) {
		this->setHitPoints(this->getHitPoints() + amount);
		this->setEnergyPoints(this->getEnergyPoints() - 1);
		std::cout << this->getTrap() << this->getName() << " is repaired, gaining "
					<< amount << " hit points!" << std::endl;
		this->displayStatus();
	} else {
		std::cout << this->getTrap() << this->getName()
					<< " can't be repaired. Not enough hit points or energy points." << std::endl;
	}
}


/* Setters */

void	ClapTrap::setDefault() {
	this->setHitPoints(10);
	this->setEnergyPoints(10);
	this->setAttackDamage(0);
}

void	ClapTrap::setName( const std::string name ) { this->_name = name; }
void	ClapTrap::setTrap( const std::string trap ) { this->_trap = trap; }
void	ClapTrap::setHitPoints( const int hitPoints ) { this->_hitPoints = hitPoints; }
void	ClapTrap::setEnergyPoints( const int energyPoints ) { this->_energyPoints = energyPoints; }
void	ClapTrap::setAttackDamage( const int attackDamage ) { this->_attackDamage = attackDamage; }


/* Getters */

unsigned int		ClapTrap::getHitPoints() const { return this->_hitPoints; }
unsigned int		ClapTrap::getEnergyPoints() const { return this->_energyPoints; }
unsigned int		ClapTrap::getAttackDamage() const { return this->_attackDamage; }

std::string		ClapTrap::getName() const { return this->_name; }
std::string		ClapTrap::getTrap() const { return this->_trap; }

void	ClapTrap::displayStatus() {
	std::cout << "		" << this->getName() << ":\n"
			<< "		" << " - energyPoints: " << this->getEnergyPoints() << "\n"
			<< "		" << " - hitPoints: " << this->getHitPoints() << "\n"
			<< "		" << " - attackPoints: " << this->getAttackDamage() << "\n"
			<< std::endl;

}
