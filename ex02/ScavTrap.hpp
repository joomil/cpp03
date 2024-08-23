#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
public:
    // Constructors
    ScavTrap(std::string const &name);
    ScavTrap(ScavTrap const &src);
    ~ScavTrap();

    // Override attack method
    void attack(const std::string& target);

    // New method for ScavTrap
    void guardGate();

private:
    static const unsigned int HIT_POINTS_MAX = 100;
    static const unsigned int ENERGY_POINTS_MAX = 50;
    static const unsigned int ATTACK_DAMAGE = 20;
};

#endif // SCAVTRAP_HPP
