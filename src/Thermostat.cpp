// Thermostat.cpp


#include "../include/Thermostat.h"


// Thermostat::Thermostat(const std::string name, const std::string serialNumber, const std::string license, int dayDesiredTemp, int nightDesiredTemp, const int currentTemp)
//     : Device(name, serialNumber, license), dayDesiredTemp(dayDesiredTemp), nightDesiredTemp(nightDesiredTemp), currentTemp(currentTemp) {}
Thermostat::Thermostat(int dayDesiredTemp, int nightDesiredTemp, const int currentTemp)
    : dayDesiredTemp(dayDesiredTemp), nightDesiredTemp(nightDesiredTemp), currentTemp(currentTemp) {}

Thermostat::~Thermostat() {}

void Thermostat::setDesiredTemp() {
    // check current time public var from Device
    // if between 6am and 5pm, use dayDesiredTemp
    // if current temp is less than dayDesiredTemp, turn on heater
    // if current temp is greater than dayDesiredTemp, turn on A/C
    // if between 5pm and 6am, use eveningDesiredTemp
    // if current temp is less than eveningDesiredTemp, turn on heater
    // if current temp is greater than eveningDesiredTemp, turn on A/C

    // return isOn true or false accordingly
};

// void Thermostat::turnOn() {
//     isOn = true;
// }

// void Thermostat::turnOff() {
//     isOn = false;
// }

void Thermostat::displayCurrentTemp() const
{
    std::cout << "Current Temp: " << currentTemp << std::endl;
};
void Thermostat::displayDesiredTemp() const
{
    std::cout << "Desired Temp: " << dayDesiredTemp << std::endl;
};
