# Reed Switch Module Interface with Arduino

#### Project Overview

This project demonstrates the interfacing of a reed switch module with an Arduino board. The reed switch module is used to detect the presence of a magnetic field, and the Arduino's LED is illuminated accordingly. Additionally, the analog output of the reed module is read and displayed on the Serial Monitor for monitoring purposes.

#### Components Needed

1. **Arduino Board**
2. **Reed Switch Module**
3. **LED**
4. **Resistor (for the LED)**
5. **Jumper Wires**

### Block Diagram



#### Pin Connections

- **Reed Switch Module:**
  - **Digital Pin**: Connect to Arduino digital pin 2
  - **Analog Pin**: Connect to Arduino analog pin A1

- **LED:**
  - **Anode (+)**: Connect to Arduino digital pin 12 through a current-limiting resistor (e.g., 220Ω)
  - **Cathode (-)**: Connect to Arduino GND

#### Instructions

1. **Set Up the Circuit:**
   - Connect the reed switch module's digital pin to digital pin 2 on the Arduino.
   - Connect the reed switch module's analog pin to analog pin A1 on the Arduino.
   - Connect an LED to digital pin 12 on the Arduino, with a resistor in series to limit current.
   - Ensure all components are properly grounded and connected to the 5V power supply.

2. **Initialize the System:**
   - Configure the digital pin for the reed module as an input and the LED pin as an output in the `setup()` function.
   - Start serial communication at a baud rate of 9600 to monitor the analog readings on the Serial Monitor.

3. **Read Digital Interface:**
   - Read the digital value from the reed module's digital pin using `digitalRead(digitalPin)`.
   - If a magnetic field is detected (digital value is HIGH), illuminate the LED.

4. **Read Analog Interface:**
   - Read the analog value from the reed module's analog pin using `analogRead(analogPin)`.
   - Print the analog value to the Serial Monitor for real-time monitoring.

5. **Output Results:**
   - Illuminate the LED based on the presence of a magnetic field.
   - Print the analog value to the Serial Monitor for analysis and troubleshooting.

#### Applications

- **Magnetic Field Detection:** Use the setup to detect the presence or absence of a magnetic field in various applications, such as door sensors, security systems, or proximity detectors.
- **Analog Sensor Monitoring:** Utilize the analog output of the reed module for monitoring environmental conditions or other analog signals.
- **Interactive Projects:** Incorporate magnetic field sensing into interactive projects or installations to trigger different responses based on the detected magnetic field.

---

🌐 [projectslearner.com](https://projectslearner.com)  
📧 [projectslearner@gmail.com](mailto:projectslearner@gmail.com)  
📸 [Instagram](https://www.instagram.com/projectslearner/)  
📘 [Facebook](https://www.facebook.com/projectslearner)  
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)  
📘 [LinkedIn](https://www.linkedin.com/in/projectslearner)  

Made for you with ❣️ from ProjectsLearner