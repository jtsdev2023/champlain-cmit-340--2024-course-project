// TV.cpp

#include "../include/TV.h"

// TV::TV(const std::string name, const std::string serialNumber, const std::string license, int desiredChannel, int desiredVolume) : Device(name, serialNumber, license), desiredChannel(desiredChannel), desiredVolume(desiredVolume) {}

TV::TV(int desiredChannel, int desiredVolume) : desiredChannel(desiredChannel), desiredVolume(desiredVolume) {}

TV::~TV() {}

void TV::setChannel() {
    // set channel
    std::cout << "Desired Channel: " << desiredChannel << std::endl;
};

void TV::setVolume() {
    // set volume
    std::cout << "Desired Volume: " << desiredVolume << std::endl;
};