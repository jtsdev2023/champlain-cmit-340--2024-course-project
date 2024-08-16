/*
 * Filename: Device.h
 * Description: device class header file.
 * Author: Jeremy Sizemore
 * Date: August 16, 2024
 * Version: 1.0
 * Copyright: (c) 2024 Jeremy Sizemore
 * Dependencies: include/csv.h from CSV libary https://github.com/ben-strasser/fast-cpp-csv-parser
 * Change Log:
 *    - v1.0: Initial version
 */


#pragma once

#include <ctime>
#include <string>
#include <vector>
#include <chrono>
#include <fstream>
#include <iostream>

#include "csv.h"
// #include "../src/ReadCSVFile.cpp"
// #include "../include/ReadCSVFile.h"


class Device {
public:
    // Device(const std::string name, const std::string serialNumber, const std::string license);
    Device();
    virtual ~Device();

    // virtual void turnOn();
    // virtual void turnOff();
    // virtual void displayDeviceInfo();

    auto getCurrentTime();
    // can Device call getCurrentTime()? and make the return value public variable?

    // std::vector<std::string> readFile(const std::string& inputFileName);

    // void displayDeviceInfo();
    void displayDeviceInfo(const std::string& inputFileName);


private:
    // std::string name;
    // std::string serialNumber;
    // std::string license;
    // bool isOn;

};
