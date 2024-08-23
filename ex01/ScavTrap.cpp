#include "ScavTrap.hpp"

// Constructors
ScavTrap::ScavTrap(std::string const &name) : ClapTrap(name) {
    std::cout << "ScavTrap " << name << " constructed." << std::endl;
    setHitPoints(HIT_POINTS_MAX);
    setEnergyPoints(ENERGY_POINTS_MAX);
    setAttackDamage(ATTACK_DAMAGE);
}

ScavTrap::ScavTrap(ScavTrap const &src) : ClapTrap(src.getName()) {
    std::cout << "ScavTrap copy constructed." << std::endl;
    setHitPoints(src.getHitPoints());
    setEnergyPoints(src.getEnergyPoints());
    setAttackDamage(src.getAttackDamage());
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " << getName() << " destructed." << std::endl;
}

// Override attack method
void ScavTrap::attack(const std::string& target) {
    std::cout << "ScavTrap " << getName() << " attacks " << target << ", causing " << getAttackDamage() << " points of damage!" << std::endl;
    setEnergyPoints(getEnergyPoints() - 1);
}

// New method for ScavTrap
void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << getName() << " is now in Gate keeper mode." << std::endl;
}
