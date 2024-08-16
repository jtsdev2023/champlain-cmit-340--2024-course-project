/*
 * Filename: Lights.h
 * Description: lights class header file.
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

class Lights : public Device
{
public:
    // Lights(const std::string name, const std::string serialNumber, const std::string license, const int activateTime, const int deactivateTime, std::string moodLighting);
    // Lights(const int activateTime, const int deactivateTime, std::string moodLighting);
    Lights();
    virtual ~Lights();

    void turnOn();
    void displayStatus();

    std::string lightsOn;
// private:
//     int activateTime;
//     int deactivateTime;
//     std::string moodLighting;
};