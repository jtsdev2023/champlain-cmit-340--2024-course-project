// SecuritySystem.cpp

#include "../include/SecuritySystem.h"

// SecuritySystem::SecuritySystem(const std::string name, const std::string serialNumber, const std::string license, const int securityCode) : Device(name, serialNumber, license), securityCode(securityCode) {}
// SecuritySystem::SecuritySystem(const int securityCode) : securityCode(securityCode) {}
SecuritySystem::SecuritySystem() {}

SecuritySystem::~SecuritySystem() {}

int SecuritySystem::getSecurityCode() {
    // get security code
    // input i/o
    // output i/o would be to read security code from file
    int userPassCode = 0;
    std::cout << "Enter Your Pass Code: ";
    std::cin >> userPassCode;

    return userPassCode;
};

int SecuritySystem::securityInit(const std::string& inputFileName)
{
    // get pass code
    // int code = getSecurityCode();

    std::string header_1 = "Device Name";
    std::string header_2 = "Serial Number";
    std::string header_3 = "License";
    std::string header_4 = "Security Code";

    io::CSVReader<4> in(inputFileName);
    // in.read_header(io::ignore_no_column);
    in.read_header(io::ignore_extra_column, header_1, header_2, header_3, header_4);
    std::string h_1; std::string h_2; std::string h_3; std::string h_4;
    std::vector<std::string> fileData;

    while(in.read_row(h_1, h_2, h_3, h_4))
    {
        // write output
        std::cout << header_1 << ": " << h_1 << std::endl;
        std::cout << header_2 << ": " << h_2 << std::endl;
        std::cout << header_3 << ": " << h_3 << std::endl;
        std::cout << header_4 << ": " << "######" << std::endl;
        std::cout << std::endl;
    }

    return std::stoi(h_4);

}

void SecuritySystem::arm(int armCode) {
    // arm security system
    int code = getSecurityCode();
    // if (code == std::stoi(h_4))
    if (code == armCode)
    {
        std::cout << "Security System Armed" << std::endl;
    }

    else
    {
        std::cout << "Invalid Pass Code" << std::endl;
    }
    
};

void SecuritySystem::disarm(int disarmCode) {
    // arm security system
    int code = getSecurityCode();
    if (code == disarmCode)
    {
        std::cout << "Security System Disarmed" << std::endl;
    }

    else
    {
        std::cout << "Invalid Pass Code" << std::endl;
    }
    
};

void SecuritySystem::setSecurityCode() {
    // set security code
    // input i/o
    // output i/o would be to save security code to file
};
