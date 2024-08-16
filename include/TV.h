/*
 * Filename: TV.h
 * Description: TV class header file.
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

class TV : public Device
{
    public:
        // reading name, serialNumber, and license from file
        // TV(const std::string name, const std::string serialNumber, const std::string license, int desiredChannel, int desiredVolume);
        TV(int desiredChannel, int desiredVolume);
        virtual ~TV();

        // i/o save channel and volume to file
        // read channel and volume from file
        void setChannel();
        void setVolume();

    private:
        int desiredChannel;
        int desiredVolume;
};
