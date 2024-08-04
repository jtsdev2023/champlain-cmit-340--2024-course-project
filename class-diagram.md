<!-- diagram -->
## Class Hierarchy

```
Devices
├── SmartThermostat
├── Television
├── Lights
└── SecuritySystem
```

## Accessors and Mutators

- `Device` class:
    - `name`: string (private)
    - `serial number`: string (private)
    - `license`: string (private)
    - `isOn`: bool (private)

- `Thermostat` class:
    - `dayDesiredTemp`: int (private)
    - `nightDesiredTemp`: int (private)
    - `isOnHeat`: bool (private)
    - `isOnCooling`: bool (private)
    - `isOnFan`: bool (private)
    <!-- if have time could do stuff like air filter life/status and humidifer etc. -->

- `Television` class:
    - `channel`: int (private)
    - `volume`: int (private)
    <!-- maybe add some DVR functionality if i have time -->

- `Lights` class:
    - `activateTime`: int (private)
    - `deactivateTime`: int (private)
    <!-- maybe do mood lighting? -->
    - `moodLightingCool`: bool (private)
    - `moodLightingWarm`: bool (private)

- `SecuritySystem` class:
    - `isArmed`: bool (private)
    <!-- maybe do stuff like cameras, infrared sensors, and zones etc. -->

## Member Functions / Methods

- `Device` class:
    - `Device(string)`: constructor
    - `~Device()`: destructor
    - `turnOn()`: member function
    - `turnOff()`: member function
    <!-- i think get time can be `Device` level funct -->
    <!-- maybe pass time to via public var -->
    - `getCurrentTime()`: member funciton
    <!-- display serial no. and license info etc. -->
    - `displayDeviceInfo()`: member function

- `Thermostat` class:
    - `setDayDesiredTemp()`: member function
    - `setnightDesiredTemp()`: member function
    - `heatingActivate()`: member function
    - `coolingActivate()`: member function
    - `fanActivate()`: memebr function

- `Television` class:
    - `setChannel()`: member function
    - `setVolume()`: member function

- `Lights` class:
    - `turnOn()`: member function
    - `turnOff()`: member function
    - `moodLightingCoolActivate()`: member function
    - `moodLightingWarmActivate()`: member function

- `SecuritySystem` class:
    - `activateAlarm()`: member function
