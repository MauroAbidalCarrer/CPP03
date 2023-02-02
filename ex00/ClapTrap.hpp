#ifndef CLAP_TRAP_H
# define CLAP_TRAP_H
# include <iostream>
# include <string>

class ClapTrap
{
    private:
    std::string name;
    int hitPoints;
    int energyPoints;
    int attackDamage;
    bool tryPerformAction();

    public:
    //constructors and destructors
    ClapTrap();
    ~ClapTrap();
    ClapTrap(const ClapTrap& other);
    ClapTrap(std::string name);

    //methods
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void debug(std::string title);
};

#endif