#include "ClapTrap.hpp"

// Constructors
ClapTrap::ClapTrap(std::string const &name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
    std::cout << "ClapTrap " << _name << " constructed." << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src) : _name(src._name), _hitPoints(src._hitPoints), _energyPoints(src._energyPoints), _attackDamage(src._attackDamage) {
    std::cout << "ClapTrap copy constructed." << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap " << _name << " destructed." << std::endl;
}

// Member functions
void ClapTrap::attack(const std::string& target) {
    if (_energyPoints > 0 && _hitPoints > 0) {
        std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
        --_energyPoints;
    } else {
        std::cout << "ClapTrap " << _name << " cannot attack due to lack of energy or hit points." << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (_hitPoints > 0) {
        std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage." << std::endl;
        _hitPoints -= amount;
        if (_hitPoints <= 0) {
            std::cout << "ClapTrap " << _name << " was destroyed." << std::endl;
        }
    } else {
        std::cout << "ClapTrap " << _name << " has no hit points left." << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (_energyPoints > 0 && _hitPoints < 10) {
        std::cout << "ClapTrap " << _name << " repairs itself for " << amount << " hit points." << std::endl;
        _hitPoints += amount;
        if (_hitPoints > 10) {
            _hitPoints = 10;
        }
        --_energyPoints;
    } else {
        std::cout << "ClapTrap " << _name << " cannot repair itself due to lack of energy or maximum hit points." << std::endl;
    }
}
