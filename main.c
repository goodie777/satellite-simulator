#include <stdio.h>
#include "satellite.h" 

int main() {

    Telecommand systemCheck;
    Telecommand adjustOrbitalPath;
    
    systemCheck.commandID = 101;
    
    adjustOrbitalPath.commandID = 102;
    adjustOrbitalPath.parameters[0] = 1.5;
    adjustOrbitalPath.parameters[1] = 2.5;
    adjustOrbitalPath.parameters[2] = 7.5;


    printf("System Check Command: %d\n", systemCheck.commandID);
    printf("Adjust Orbital Path: %.2f, %.2f, %.2f\n", adjustOrbitalPath.parameters[0],adjustOrbitalPath.parameters[1],adjustOrbitalPath.parameters[2]);


    return 0;
}
