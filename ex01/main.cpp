#include "ScavTrap.hpp"
#include <string>

int main()
{
    //clapTrap tests
    ClapTrap clapTrap;
    clapTrap.debug("default clap trap");
    ClapTrap* namedClapTrap = new ClapTrap("awesome clap trap");
    namedClapTrap->debug("named clap trap");
    ClapTrap* copiedClapTrap = new ClapTrap(*namedClapTrap);
    copiedClapTrap->debug("copied clap trap");
    ClapTrap* assignedClapTrap;
    assignedClapTrap = copiedClapTrap;
    assignedClapTrap->debug("assigned clap trap");
    delete namedClapTrap;
    delete copiedClapTrap;
    std::cout << std::endl;
    std::cout << std::endl;

    //ScavTrap tests
    ScavTrap defaultScavTrap;
    defaultScavTrap.guardGate();
    defaultScavTrap.ScavTrapDebug("defaultScavTrap");
    ScavTrap namedScavTrap = ScavTrap("awesome clap trap");
    namedScavTrap.ScavTrapDebug("namedScavTrap");
    ScavTrap copiedcScavTrap = ScavTrap(namedScavTrap);
    copiedcScavTrap.ScavTrapDebug("copiedcScavTrap");
    ScavTrap assignedScavTrap;
    assignedScavTrap = copiedcScavTrap;
    assignedScavTrap.ScavTrapDebug("assignedScavTrap");
}