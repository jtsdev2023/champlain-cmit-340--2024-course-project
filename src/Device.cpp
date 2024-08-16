// Device.cpp


// #include "../include/csv.h"
#include "../include/Device.h"
// #include "../src/ReadCSVFile.cpp"


// Device::Device(const std::string name, const std::string serialNumber, const std::string license) : name(name), serialNumber(serialNumber), license(license){}
Device::Device() {}
Device::~Device() {}

// void Device::turnOn() {
//     // isOn = true;
// }

// void Device::turnOff() {
//     // isOn = false;
// }

auto Device::getCurrentTime() {
    // get current time
    auto time = std::chrono::system_clock::now();
    // convert to readable format
    std::time_t currentTime = std::chrono::system_clock::to_time_t(time);

    return currentTime;
}

// void Device::displayDeviceInfo() {
//     std::cout << "Device: " << name << std::endl;
//     std::cout << "Serial Number: " << serialNumber << std::endl;
//     std::cout << "License: " << license << std::endl;
//     // use ternary operator
//     std::cout << "Is On: " << (isOn ? "Yes" : "No") << std::endl;
// }


// std::vector<std::string> Device::readFile(const std::string& inputFileName)
// {
//     std::ifstream inputFile(inputFileName);
//     // std::string line;
//     // std::string fileContents;

//     // if (inputFile.is_open()) {
//     //     while (std::getline(inputFile, line)) {
//     //         fileContents += line + "\n";
//     //     }
//     //     inputFile.close();
//     // } else {
//     //     std::cout << "Unable to open file" << std::endl;
//     // }

//     io::CSVReader<3> in(inputFileName);
//     in.read_header(io::ignore_no_column);
//     std::string h_1; std::string h_2; std::string h_3; std::string h_4; std::string h_5;
//     std::vector<std::string> fileData;

//     return fileData;
// }

// void Device::displayDeviceInfo(const std::string& inputFileName)
// {
//     std::string header_1;
//     std::string header_2;
//     std::string header_3;
//     std::string header_4;
//     std::string header_5;

//     io::CSVReader<3> in(inputFileName);
//     // in.read_header(io::ignore_no_column);
//     in.read_header(io::ignore_extra_column, header_1, header_2, header_3);
//     std::string h_1; std::string h_2; std::string h_3; std::string h_4; std::string h_5;
//     std::vector<std::string> fileData;

//     std::cout << header_1 << "  " << header_2 << "  " << header_3 << " " << header_4 << " " << header_5 << std::endl;
//     while(in.read_row(h_1, h_2, h_3, h_4, h_5))
//     {
//         // write output
//         std::cout << header_1 << ":      " << h_1 << std::endl;
//         std::cout << header_2 << ":    " << h_2 << std::endl;
//         std::cout << header_3 << ":   " << h_3 << std::endl;
//         std::cout << header_4 << ":   " << h_4 << std::endl;
//         std::cout << header_5 << ":   " << h_5 << std::endl;
//         std::cout << std::endl;
//     }
// }

void Device::displayDeviceInfo(const std::string& inputFileName)
{
    std::string header_1 = "Device Name";
    std::string header_2 = "Serial Number";
    std::string header_3 = "License";

    io::CSVReader<3> in(inputFileName);
    // in.read_header(io::ignore_no_column);
    in.read_header(io::ignore_extra_column, header_1, header_2, header_3);
    std::string h_1; std::string h_2; std::string h_3;
    std::vector<std::string> fileData;

    // std::cout << header_1 << "  " << header_2 << "  " << header_3 << std::endl;
    while(in.read_row(h_1, h_2, h_3))
    {
        // write output
        std::cout << header_1 << ": " << h_1 << std::endl;
        std::cout << header_2 << ": " << h_2 << std::endl;
        std::cout << header_3 << ": " << h_3 << std::endl;
        std::cout << std::endl;
    }
}
