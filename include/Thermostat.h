/*
 * Filename: Thermostat.h
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

class Thermostat : public Device
{
public:
    // Thermostat(const std::string name, const std::string serialNumber, const std::string license, int dayDesiredTemp, int nightDesiredTemp, int currentTemp);
    Thermostat(int dayDesiredTemp, int nightDesiredTemp, int currentTemp);
    virtual ~Thermostat();

    void setDesiredTemp();
    // need logic to get current time
    // need logic to get current temp
    // if time is between 6am and 5pm, use dayDesiredTemp
    // if time is between 5pm and 6am, use eveningDesiredTemp
    // maybe should change to "nightDesiredTemp" or add a nightDesiredTemp... *changed
    // which is distinct from eveningDesiredTemp
    //
    // if day time and current temp is less than the desired temp, turn on heater
    // if day time and current temp is greater than the desired temp, turn on A/C
    // same for evening and night (if do night)
    //
    // simulate a temperature sensor by just passing the current temp as a parameter?

    virtual void displayCurrentTemp() const;
    virtual void displayDesiredTemp() const;

    int dayDesiredTemp;
    int nightDesiredTemp;
    int currentTemp;
};
