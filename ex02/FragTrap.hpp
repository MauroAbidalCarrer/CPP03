#ifndef FRAG_TRAP_H
# define FRAG_TRAP_H

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
    FragTrap();
    FragTrap(std::string name);
    FragTrap(const ClapTrap& other);
    ~FragTrap();

    void FragTrapDebug(std::string title);
    void attack(std::string name);
    void highFivesGuys();
};

#endif