// Device.h

#pragma once

#include <ctime>
#include <string>
#include <chrono>
#include <iostream>

class Device {
public:
    Device(const std::string name, const std::string serialNumber, const std::string license);
    virtual ~Device();

    virtual void turnOn();
    virtual void turnOff();
    virtual void displayDeviceInfo() const;
    auto getCurrentTime();
    // can Device call getCurrentTime()? and make the return value public variable?

private:
    std::string name;
    std::string serialNumber;
    std::string license;
    bool isOn;

};
