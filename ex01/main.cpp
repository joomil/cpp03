#include "ScavTrap.hpp"

int main() {
    ClapTrap clap("Test");
    ScavTrap scav("Guard");

    // Test ClapTrap
    clap.attack("Enemy");
    clap.beRepaired(5);
    clap.takeDamage(7);

    // Test ScavTrap
    scav.attack("Invader");
    scav.guardGate(); // Should call the overridden method

    return 0;
}
