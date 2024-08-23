#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {
public:
    // Constructors
    DiamondTrap(std::string const &name);
    DiamondTrap(DiamondTrap const &src);
    ~DiamondTrap();

    // Special capacity
    void whoAmI();

    // Override attack method from ScavTrap
    using ScavTrap::attack;

private:
    std::string _name;
};

#endif // DIAMONDTRAP_HPP
