#include <stdio.h>
#include "satellite.h" 

int main() {
    printf("Satellite simulator online\n");

    Telecommand systemCheck;
    
    systemCheck.commandID = 101;

    printf("System Check Command: %d\n", systemCheck.commandID);

    return 0;
}
