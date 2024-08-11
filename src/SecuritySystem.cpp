// SecuritySystem.cpp

#include "../include/SecuritySystem.h"

// SecuritySystem::SecuritySystem(const std::string name, const std::string serialNumber, const std::string license, const int securityCode) : Device(name, serialNumber, license), securityCode(securityCode) {}
SecuritySystem::SecuritySystem(const int securityCode) : securityCode(securityCode) {}

void SecuritySystem::setSecurityCode() {
    // set security code
    // input i/o
    // output i/o would be to save security code to file
};
