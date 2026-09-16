1. Introduction :
The Energy Monitoring and Control System is an IoT-based system designed to monitor electrical energy consumption in real time. It measures important parameters such as voltage, current, power, and energy. The system uses an ESP32 as the main controller and a PZEM-004T energy meter for electrical measurements.

2. Problem Statement :
Manual energy monitoring is difficult and time-consuming.
Excessive energy consumption may not be noticed immediately.
Users need real-time information about electrical usage.
Automatic control is required when the load exceeds a predefined limit.
3. Objectives :
Monitor electrical parameters continuously.
Measure voltage, current, power, and energy consumption.
Display the collected information through a dashboard.
Detect high power or current conditions.
Automatically control the electrical load using a relay.
Support better energy management.
4. Proposed Solution :
The proposed system combines energy sensing, ESP32 processing, IoT communication, dashboard monitoring, and relay-based load control. The PZEM-004T measures the electrical parameters and sends the values to the ESP32. The ESP32 processes the data and communicates with the dashboard through Wi-Fi. The relay is used to control the connected electrical load.
5. System Architecture :
AC Supply → PZEM-004T → ESP32 → Wi-Fi → Cloud/Dashboard
ESP32 → Relay → Electrical Load
The sensor provides the electrical measurements to the controller. The controller sends the information to the dashboard and controls the load through the relay.
6. Hardware Components :
ESP32: Main controller and Wi-Fi communication.
PZEM-004T: Measures voltage, current, power, and energy.
Relay Module: Controls the connected electrical load.
AC Load: Appliance or electrical load being monitored.
Power Supply: Provides suitable power to the control circuit.
Connecting Wires: Used for circuit connections.
7. Software Components :
Arduino IDE
Embedded C/C++
ESP32 Wi-Fi
IoT/Cloud platform
Web Dashboard
8. Working Principle :
The PZEM-004T continuously measures the electrical parameters of the connected load. These measurements are received by the ESP32. The ESP32 processes the readings and sends them through Wi-Fi to the monitoring dashboard. The user can view the energy parameters in real time. When the measured value exceeds the predefined limit, the ESP32 can activate the relay to control the load.
9. Energy Monitoring :
The system monitors:
Voltage (V)
Current (A)
Power (W)
Energy (kWh)
These values help the user understand the electrical consumption of the connected appliance or load.
10. Load Control :
The ESP32 continuously checks the measured electrical values. A suitable power or current limit can be defined in the program. If the measured value exceeds the specified limit, the relay can disconnect the load. This provides automatic protection and helps avoid unnecessary energy consumption.
11. ESP32 Program :
The ESP32 program is developed using Embedded C/C++ in the Arduino IDE. The program:
Reads data from the PZEM-004T.
Processes voltage, current, power, and energy values.
Connects the ESP32 to Wi-Fi.
Sends data to the dashboard.
Checks the predefined limit.
Controls the relay according to the required condition.
12. Dashboard :
The dashboard provides a simple interface for monitoring the system. It can display:
Real-time voltage
Real-time current
Power consumption
Energy consumption
Load ON/OFF status
This allows the user to monitor the system without directly checking the hardware.
13. Results :
The developed system provides real-time monitoring of electrical parameters. The measured values can be displayed on the dashboard, while the relay provides automatic control of the connected load. The prototype demonstrates the integration of energy measurement, IoT communication, and load control.
14. Advantages :
Real-time energy monitoring.
Automatic load control.
Easy-to-understand dashboard.
Wi-Fi-based remote monitoring.
Helps identify excessive energy consumption.
Suitable for a small-scale IoT prototype.
15. Limitations :
Remote monitoring depends on Wi-Fi connectivity.
Measurement accuracy depends on the sensor.
Relay capacity limits the type of load that can be controlled.
Cloud-based features depend on the selected platform and its availability.
16. Future Scope :
Develop a dedicated mobile application.
Add AI/ML-based energy consumption prediction.
Monitor multiple appliances independently.
Add automatic energy scheduling.
Generate daily, weekly, and monthly energy reports.
Integrate renewable energy sources such as solar power.
17. Conclusion :
The Energy Monitoring and Control System provides a practical IoT-based approach for monitoring and controlling electrical energy. By combining PZEM-004T, ESP32, Wi-Fi, dashboard monitoring, and relay control, the system can provide real-time energy information and automatic load control. The prototype can be further developed into a smart energy-management solution for homes, laboratories, and small-scale applications.