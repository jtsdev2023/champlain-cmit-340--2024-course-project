// Lights.h

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