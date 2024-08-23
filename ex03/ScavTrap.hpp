#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
public:
    // Constructors
    ScavTrap(std::string const &name);
    ScavTrap(ScavTrap const &src);
    ~ScavTrap();

    // Override attack method
    void attack(const std::string& target);

    // New method for ScavTrap
    void guardGate();

    unsigned int getHitPointsMax() const { return HIT_POINTS_MAX; }
    unsigned int getEnergyPointsMax() const { return ENERGY_POINTS_MAX; }
    unsigned int getAttackDamageMax() const { return ATTACK_DAMAGE; }
    
private:
    static const unsigned int HIT_POINTS_MAX = 100;
    static const unsigned int ENERGY_POINTS_MAX = 50;
    static const unsigned int ATTACK_DAMAGE = 20;
};

#endif // SCAVTRAP_HPP
