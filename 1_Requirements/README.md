
## Introduction
Adjusting the temperature is often one of the first things we do when we get into a vehicle. Whether it's too hot or too cold outside, 
we want the climate in the car to be exactly how you like it. a developer should develop a circuit in such a way that it should work properly in extream temperature conditions.
In our project, the sensor will sense is the driver has been seated or not and if the driver seated then he need to set the temperature accordingly. Based on that our controller 
will set the heater to required temperature. 
The Heater will generate the heat and a USART display will show requested the temperature. In our project we have used ATmega328 microcontroller along with temperature 
sensor, Push button, Heat generator, LED and USART diplay,etc.

## Features
- The System should check whether driver is present or not.
- Driver should have the access to modify the temperature in the vehicle.
- As per Drivers request, Heater will generate the heat accordingly.
- Simple to size and select.
- Modular Approach.


## SWOT- Strengths, and Weakness, Opportunities Threats
### Strengths
- Control Temperature Remotely.
- Improve Energy Efficiency
- User Friendly
- Installing an Automated Temperature Control System.



### Weakness
- Low sensitivity.
- Its only applicable for those countries which are having low temperature.

### Opportunities
- In seed testing for incubation Used for maintaining the room temp. according to requirment
- Can be used in electric furnace and in food industry for humidity control also medical purpose- in Incubator

### Threats
- Not suitable for average or high temperature places.


## 4W's and 1'H
### **WHAT** : Seat_Temperature_Monitoring_System
### **WHERE** : Used in Automotive Industries
### **WHEN** : At low Temperature


## Detail requirements
### High Level Requirements
| High Level Requirements      | Description |
| ----------- | ----------- |
| HLR1      | Microcontroller   |
| HLR2   | Temperature Sensor|
| HLR3   | Heat Generation|
| HLR4   | Display|
| HLR5   | Software used|

### Low Level Requirements
| Low Level Requirements      | Description |
| ----------- | ----------- |
| HLR1_LLR1      | ATmega328     |
| HLR2_LLR1   | LM35 and ADC|
| HLR2_LLR2   | ADC with PWM-fast|
| HLR3_LLR1   | Thermoelectric module|
| HLR4_LLR1   |USART and LED|
| HLR5_LLR1   | Code Blocks with AVR GCC compiler |
| HLR5_LLR2   | SimulIDE |




