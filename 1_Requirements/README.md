# Requriments

# About the project WCS
## Description
*This Project is an __Wiper control (WCS) system__,a wiper control system for an automotive wiper controls the operational speed of a wiper in accordance with rain conditions.It useful in the automotive unit the main purpose of the system is to clean the windscreen sufficiently to provide suitable visibility at all times.

---

## Identifying features
*When the button is pressed once the car will start(__Ignition key postion at ACC__)
*When the button is pressed again the wiper will start(__Wiper On__)
*When the button is pressed again the wiper will off(__Wiper Off__)
*When the button is pressed thrice the car will stop(__Ignition key position at Lock__)

## State of art
*The main focus point is seeing the wiper control of the car.
*And also seeing the seep of the wiper system in the car
*Now this two features are explained in these project

---
## 5W's & 1H and S.W.O.T analysis is in the below table 

 | 5W's & 1H | 
 
*What -- wiper control system (WCS) 

*Where--Inside and out side the car 

*When--When the weather condition is bad (like in rain and snow) the wiper is activate and clean the car window 

*Who--Who is driving or controlling the car 

*How--By using STM like by multiple pushes on a button

 | S.W.O.T ANALYSIS | 

Strengths 

*No human interaction with car
*Manages all commands with one key automatically
*encryption in data

 Weaknesses
 
*Unable to monitor status of car
*Range is limited
*Wait for certain time after every command to press new command 

Opportunities

*The Scope of this sytem is huge in car control
*can be used where  the car need thesed command
*Less cost

Threats

*When new command is given without completing the current command it will not take current command 

---

## Requirements

### High Level Requirements

| ID | High Level Requirements |
| -------- | -------------- |
| HLR1 | It will start the car|
| HLR2 | It will start the wiper |
| HLR3 | It shall seen speed of the wiper work |
| HLR4 | It will stop the wiper |
| HLR5 | It will stop the car |

### Low Level Requirements

| ID | Low Level Requirements for HLR1|     
| ----- | ----- | 
| LLR1.1 | If the User button is pressed Once, the red LED will be on |      

| ID | Low Level Requirements for HLR2|
| ----- | ----- |
| LLR2.1 | If the User Button is pressed TWICE, Blue,Green,Orange LED's come ON at a time with set of frequency |

| ID | Low Level Requirements for HLR3| 
| -------- | -------------- |
| LLR3.1 |  If the User Button is pressed THIRD time, ON All LED's in CLOCKWISE manner an speeed will increase |  

| ID | Low Level Requirements for HLR4|
| -------- | -------------- |
| LLR4.1 | If the User Button is pressed FOURTH time ,all LED's on anticlock manner |

| ID | Low Level Requirements for HLR5|
| -------- | -------------- |
| LLR5.1 | If the User Button is pressed FIVTH times, the red LED will be off |
