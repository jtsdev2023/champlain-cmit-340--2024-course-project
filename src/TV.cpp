// TV.cpp

#include "../include/TV.h"

// TV::TV(const std::string name, const std::string serialNumber, const std::string license, int desiredChannel, int desiredVolume) : Device(name, serialNumber, license), desiredChannel(desiredChannel), desiredVolume(desiredVolume) {}

TV::TV(int desiredChannel, int desiredVolume) : desiredChannel(desiredChannel), desiredVolume(desiredVolume) {}

void TV::setChannel() {
    // set channel
};

void TV::setVolume() {
    // set volume
};