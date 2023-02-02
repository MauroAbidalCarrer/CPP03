#include "ClapTrap.hpp"

//constructors and destructors
ClapTrap::ClapTrap()
{
    std::cout << "Empty constructor ClapTrap called." << std::endl;
    name = "";
    hitPoints = 10;
    energyPoints = 10;
    attackDamage = 0;
}
ClapTrap::~ClapTrap() 
{
    std::cout << "Destructor of ClapTrap \"" << name << "\" called." << std::endl;
}
ClapTrap::ClapTrap(const ClapTrap& other)
{
    std::cout << "ClapTrap copy constructor called." << std::endl;
    name = other.name;
    hitPoints = other.hitPoints;
    energyPoints = other.energyPoints;
    attackDamage = other.attackDamage;
}
ClapTrap::ClapTrap(std::string name) : name(name)
{
    std::cout << "ClapTrap constructor by name called." << std::endl;
    hitPoints = 10;
    energyPoints = 10;
    attackDamage = 0;
}

//methods
bool ClapTrap::tryPerformAction()
{
    if (energyPoints <= 0)
        return false;
    energyPoints--;
    return true;
}
void ClapTrap::attack(const std::string& target)
{
    if (tryPerformAction())
        std::cout << "ClapTrap " << name << " attacks \"" << target << "\", causing " << attackDamage << " points of damage!" << std::endl;
}
void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << name << " recieved " << amount << " points of damage!" << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount)
{
    if (tryPerformAction())
    {
        hitPoints += amount;
        std::cout << "ClapTrap " << name << " repaired itself hithPoints = " << hitPoints << std::endl;
    }
}

void ClapTrap::debug(std::string title)
{
    std::cout << "-------------------" << title << "-------------------" << std::endl;
    std::cout << "name = \"" << name << "\"" << std::endl;
    std::cout << "energyPoints = " << energyPoints << std::endl;
    std::cout << "attackDamage = " << attackDamage << std::endl;
    std::cout << "hitPoints = " << hitPoints << std::endl;
    attack("something");
    std::cout << std::endl;
}

//overrides
ClapTrap &ClapTrap::operator=(ClapTrap const &rhs)
{
	name = rhs.name;
	hitPoints = rhs.hitPoints;
	energyPoints = rhs.energyPoints;
	attackDamage = rhs.attackDamage;
	return (*this);
}
