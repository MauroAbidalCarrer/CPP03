#include "ClapTrap.hpp"
#include <string>

int main()
{

    ClapTrap clapTrap;
    clapTrap.debug("default clap trap");
    ClapTrap* namedClapTrap = new ClapTrap("awesome clap trap");
    namedClapTrap->debug("named clap trap");
    ClapTrap* copiedClapTrap = new ClapTrap(*namedClapTrap);
    copiedClapTrap->debug("copied clap trap");

    delete namedClapTrap;
}