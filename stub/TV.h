// TV.h

#pragma once

#include "Device.h"

class TV : public Device
{
    public:
        TV(const std::string name, const std::string serialNumber, const std::string license, int desiredChannel, int desiredVolume);
        ~TV();

        // i/o save channel and volume to file
        // read channel and volume from file
        void setChannel();
        void setVolume();

    private:
        int desiredChannel;
        int desiredVolume;
};
