#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap {

	private:
		std::string				_name;
		unsigned int			_hitPoints;
		unsigned int			_energyPoints;
		unsigned int			_attackDamage;

	public:
		/* Constructors and Destructor */
		ClapTrap();
		ClapTrap( std::string name );
		ClapTrap( const ClapTrap& other );
		ClapTrap& operator=( const ClapTrap& other );
		~ClapTrap();

		/* Actions */
		void		attack( const std::string& target );
		void		takeDamage( unsigned int amount );
		void		beRepaired( unsigned int amount );

		/* Setters */
		void		setDefault();

		void		setName( const std::string name);
		void		setHitPoints( const int hitPoints );
		void		setEnergyPoints( const int energyPoints );
		void		setAttackDamage( const int attackDamage);

		/* Getters */
		unsigned int			getHitPoints() const;
		unsigned int			getEnergyPoints() const;
		unsigned int			getAttackDamage() const;

		std::string	getName() const;

};

#endif
