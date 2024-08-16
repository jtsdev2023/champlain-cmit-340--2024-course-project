// SecuritySystem.h

#pragma once

#include "Device.h"

class SecuritySystem : public Device
{
public:
    // SecuritySystem(const std::string name, const std::string serialNumber, const std::string license, const int securityCode);
    // ~SecuritySystem();
    // would securityCode be better as string?
    SecuritySystem();
    virtual ~SecuritySystem();

    // will Device::turnOn() and Device::turnOff() sufficient or
    // do i need to override them as arm() disarm() ?

    // i/o read security code from file
    // i/o write security code to file
    int securityInit(const std::string& inputFileName);
    int getSecurityCode();
    void setSecurityCode();
    void arm(int armCode);
    void disarm(int disarmCode);
    // void disarm();

    // call displayStatus() from arm() and disarm()?
    // void displayStatus();

    int securityCode;
    int userPassCode;

// private:
//     int securityCode;
//     // return isArmed from arm() and disarm()?
//     bool isArmed;
};
