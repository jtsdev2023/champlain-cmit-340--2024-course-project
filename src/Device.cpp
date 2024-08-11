// Device.cpp


#include "../include/Device.h"
#include "../src/ReadCSVFile.cpp"


// Device::Device(const std::string name, const std::string serialNumber, const std::string license) : name(name), serialNumber(serialNumber), license(license){}
Device::Device() {}

Device::~Device() {}

void Device::turnOn() {
    // isOn = true;
}

void Device::turnOff() {
    // isOn = false;
}

auto Device::getCurrentTime() {
    // get current time
    auto time = std::chrono::system_clock::now();
    // convert to readable format
    std::time_t currentTime = std::chrono::system_clock::to_time_t(time);

    return currentTime;
}

// void Device::displayDeviceInfo() const {
//     // std::cout << "Device: " << name << std::endl;
//     // std::cout << "Serial Number: " << serialNumber << std::endl;
//     // std::cout << "License: " << license << std::endl;
//     // // use ternary operator
//     // std::cout << "Is On: " << (isOn ? "Yes" : "No") << std::endl;
//     readCSVFile();
// }
