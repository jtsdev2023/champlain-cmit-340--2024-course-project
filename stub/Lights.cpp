// Lights.cpp

#include "Lights.h"

Lights::Lights(const std::string name, const std::string serialNumber, const std::string license, const int activateTime, const int deactivateTime, std::string moodLighting) : Device(name, serialNumber, license), activateTime(activateTime), deactivateTime(deactivateTime), moodLighting(moodLighting) {}

void Lights::turnOn() {
    // check activateTime against current time from Device
    // if current time is greater than or equal to activateTime, turn on lights
    // will i need some kind of timer to periodically check?
    // Device gets the time once... will i need to periodically check?
    // if current time is greater than equal to deactivateTime, turn off lights
    // do i need "activate" and "deactivate" times ?
    // maybe just activate time and work from that ?
    // what about a duration value instead of deactivateTime?
};