#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout << "ScavTrap default constructor name called." << std::endl;
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "ScavTrap constructor by name called." << std::endl;
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
}


ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor by name called." << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap \"" << name << "\" is now in Gate keeper mode" << std::endl;
}
void ScavTrap::attack(std::string target)
{
    if (tryPerformAction())
        std::cout << "ScavTrap " << name << " attacks \"" << target << "\", causing " << attackDamage << " points of damage!" << std::endl;
}
void ScavTrap::ScavTrapDebug(std::string title)
{
    std::cout << "-------------------" << title << "-------------------" << std::endl;
    std::cout << "name = \"" << name << "\"" << std::endl;
    std::cout << "energyPoints = " << energyPoints << std::endl;
    std::cout << "attackDamage = " << attackDamage << std::endl;
    std::cout << "hitPoints = " << hitPoints << std::endl;
    attack("something");
    guardGate();
    std::cout << std::endl;
}