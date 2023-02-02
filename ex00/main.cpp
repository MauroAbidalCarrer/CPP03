#include "ClapTrap.hpp"
#include <string>

int main()
{

    ClapTrap clapTrap;
    clapTrap.debug("default clap trap");
    ClapTrap* namedClapTrap = new ClapTrap("awesome clap trap");
    namedClapTrap->debug("named clap trap");
    ClapTrap copiedClapTrap = ClapTrap(*namedClapTrap);
    copiedClapTrap.debug("copied clap trap");
    ClapTrap assignedClapTrap;
    assignedClapTrap = copiedClapTrap;
    assignedClapTrap.debug("assigned clap trap");

    delete namedClapTrap;
}
