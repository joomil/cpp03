#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
public:
    // Constructors
    FragTrap(std::string const &name);
    FragTrap(FragTrap const &src);
    ~FragTrap();

    // Special capacity
    void highFivesGuys(void);

private:
    static const unsigned int HIT_POINTS_MAX = 100;
    static const unsigned int ENERGY_POINTS_MAX = 100;
    static const unsigned int ATTACK_DAMAGE = 30;
};

#endif // FRAGTRAP_HPP
