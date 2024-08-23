#include "FragTrap.hpp"

// Constructors
FragTrap::FragTrap(std::string const &name) : ClapTrap(name) {
    std::cout << "FragTrap " << name << " constructed." << std::endl;
    setHitPoints(HIT_POINTS_MAX);
    setEnergyPoints(ENERGY_POINTS_MAX);
    setAttackDamage(ATTACK_DAMAGE);
}

FragTrap::FragTrap(FragTrap const &src) : ClapTrap(src.getName()) {
    std::cout << "FragTrap copy constructed." << std::endl;
    setHitPoints(src.getHitPoints());
    setEnergyPoints(src.getEnergyPoints());
    setAttackDamage(src.getAttackDamage());
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap " << getName() << " destructed." << std::endl;
}

// Special capacity
void FragTrap::highFivesGuys(void) {
    std::cout << "FragTrap " << getName() << " requests high fives!" << std::endl;
}
