/*
 * Filename: SecuritySystem.h
 * Description: thermostat class header file.
 * Author: Jeremy Sizemore
 * Date: August 16, 2024
 * Version: 1.0
 * Copyright: (c) 2024 Jeremy Sizemore
 * Dependencies: Device.h
 * Change Log:
 *    - v1.0: Initial version
 */


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
    void securityInit(const std::string& inputFileName);
    int getSecurityCode();
    void setSecurityCode();
    void arm(int code, int armCode);
    void disarm(int code, int disarmCode);
    void systemArmDisarm(int inputCode);
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
