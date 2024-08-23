#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap {
public:
    // Constructors
    ClapTrap(std::string const &name);
    ClapTrap(ClapTrap const &src);
    ~ClapTrap();

    // Member functions
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    // Getter methods
    unsigned int getHitPoints() const { return _hitPoints; }
    unsigned int getEnergyPoints() const { return _energyPoints; }
    unsigned int getAttackDamage() const { return _attackDamage; }
    std::string getName() const { return _name; }

    // Setter methods
    void setHitPoints(unsigned int hitPoints) { _hitPoints = hitPoints; }
    void setEnergyPoints(unsigned int energyPoints) { _energyPoints = energyPoints; }
    void setAttackDamage(unsigned int attackDamage) { _attackDamage = attackDamage; }

protected:
    std::string _name;
    unsigned int _hitPoints;
    unsigned int _energyPoints;
    unsigned int _attackDamage;
};

#endif //CLAPTRAP_HPP
