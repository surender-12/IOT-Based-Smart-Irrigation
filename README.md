# Smart Irrigation System using IoT

## Overview
This project automates plant watering using an Arduino-based system. It monitors soil moisture levels and activates a water pump when the soil is dry, ensuring optimal irrigation.

## Components Used
- **Arduino Uno** – Main microcontroller
- **Soil Moisture Sensor** – Detects soil dryness
- **Relay Module** – Controls the water pump
- **Water Pump** – Pumps water to plants
- **18650 Battery** – Powers the pump
- **ESP8266 (optional)** – Enables IoT connectivity for remote monitoring

## Working Principle
1. The **soil moisture sensor** measures the moisture content in the soil.
2. If the soil is dry, the **Arduino** triggers the **relay module**, turning on the **water pump**.
3. Once the soil reaches the desired moisture level, the pump turns off.
4. (Optional) An **ESP8266 module** can be integrated for remote monitoring via a web dashboard.

## Future Enhancements
- Add **WiFi connectivity** with **ESP8266** for real-time monitoring.
- Implement a **mobile app or web dashboard** for remote control.
- Integrate **weather forecasting** to optimize water usage.

## How to Use
1. Connect all components as per the circuit diagram.
2. Upload the code to your Arduino.
3. Power the system using the 18650 battery.
4. Monitor the soil moisture and let the system handle irrigation.
