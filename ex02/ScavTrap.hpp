#ifndef SCAV_TRAP_H
# define SCAV_TRAP_H

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
    ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(const ClapTrap& other);
    ~ScavTrap();

    void ScavTrapDebug(std::string title);
    void attack(std::string name);
    void guardGate();
};

#endif