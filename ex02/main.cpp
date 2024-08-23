#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
    ClapTrap clap("Test");
    ScavTrap scav("Guard");
    FragTrap frag("Fraggy");

    // Test ClapTrap
    clap.attack("Enemy");
    clap.beRepaired(5);
    clap.takeDamage(7);

    // Test ScavTrap
    scav.attack("Invader");
    scav.guardGate();

    // Test FragTrap
    frag.attack("Target");
    frag.highFivesGuys();

    return 0;
}
