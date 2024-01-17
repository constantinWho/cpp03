#include "ClapTrap.hpp"

int main() {
    // Create ClapTrap instances
    ClapTrap claptrap1("BORIS the Torch");
    ClapTrap claptrap2("HARRY the Rainbow");

    // Initial status
    claptrap1.attack("Dildo the SMALL");
    claptrap2.beRepaired(2);

    // Perform actions
    claptrap1.attack("KING of the WIND");
    claptrap2.takeDamage(3);
    claptrap1.beRepaired(1);
    claptrap2.attack("Dildo the SMALL");
    claptrap1.takeDamage(8);

    return 0;
}
