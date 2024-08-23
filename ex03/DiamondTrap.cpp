#include "DiamondTrap.hpp"

// Constructors
DiamondTrap::DiamondTrap(std::string const &name) : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name), _name(name) {
    std::cout << "DiamondTrap " << name << " constructed." << std::endl;
    ClapTrap::_hitPoints = FragTrap::getHitPointsMax();
    ClapTrap::_energyPoints = ScavTrap::getEnergyPointsMax();
    ClapTrap::_attackDamage = FragTrap::getAttackDamageMax();
}

DiamondTrap::DiamondTrap(DiamondTrap const &src) : ClapTrap(src.ClapTrap::_name), FragTrap(src), ScavTrap(src), _name(src._name) {
    std::cout << "DiamondTrap copy constructed." << std::endl;
    ClapTrap::_hitPoints = src.ClapTrap::_hitPoints;
    ClapTrap::_energyPoints = src.ClapTrap::_energyPoints;
    ClapTrap::_attackDamage = src.ClapTrap::_attackDamage;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap " << _name << " destructed." << std::endl;
}

// Special capacity
void DiamondTrap::whoAmI() {
    std::cout << "DiamondTrap name: " << _name << ", ClapTrap name: " << ClapTrap::_name << std::endl;
}
