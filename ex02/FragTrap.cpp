#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    std::cout << "FragTrap default constructor name called." << std::endl;
    hitPoints = 100;
    energyPoints = 100;
    attackDamage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "FragTrap constructor by name called." << std::endl;
    hitPoints = 100;
    energyPoints = 100;
    attackDamage = 30;
}


FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor by name called." << std::endl;
}

void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap \"" << name << "\" is requesting for a high five :)" << std::cout;
}
void FragTrap::attack(std::string target)
{
    if (tryPerformAction())
        std::cout << "FragTrap " << name << " attacks \"" << target << "\", causing " << attackDamage << " points of damage!" << std::endl;
}
void FragTrap::FragTrapDebug(std::string title)
{
    std::cout << "-------------------" << title << "-------------------" << std::endl;
    std::cout << "name = \"" << name << "\"" << std::endl;
    std::cout << "energyPoints = " << energyPoints << std::endl;
    std::cout << "attackDamage = " << attackDamage << std::endl;
    std::cout << "hitPoints = " << hitPoints << std::endl;
    attack("something");
    void highFivesGuys();
    std::cout << std::endl;
}