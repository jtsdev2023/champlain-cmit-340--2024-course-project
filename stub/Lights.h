// Lights.h

#pragma once

#include "Device.h"

class Lights : public Device
{
public:
    Lights(const std::string name, const std::string serialNumber, const std::string license, const int activateTime, const int deactivateTime, std::string moodLighting);
    ~Lights();

    void turnOn() override;
    void setMoodLighting();

private:
    int activateTime;
    int deactivateTime;
    std::string moodLighting;
};