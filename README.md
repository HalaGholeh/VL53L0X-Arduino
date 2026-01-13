# VL53L0X Arduino LiDAR Distance Sensor 🚀
[![Arduino](https://img.shields.io/badge/Arduino-Project-blue)](https://www.arduino.cc/)
This project uses the **VL53L0X Time-of-Flight (ToF) LiDAR sensor** with Arduino to measure distance up to ~2 meters. Unlike traditional IR sensors, it **measures distance by timing laser pulses**, making it **less affected by ambient light**.

**Features**
- Measures distance in millimeters.
- Works in low and bright light.
- Can detect objects from 30mm to 2000mm.
- Easy I2C communication.

**Wiring Diagram**
![Wiring Diagram](images/wiring_diagram.jpg)

| Sensor Pin | Arduino Pin |
|------------|-------------|
| VIN        | 5V          |
| GND        | GND         |
| SDA        | A4          |
| SCL        | A5          |
| INT        | Optional    |
| SHUT       | Optional    |


