# Table of content 
1. About the 
    1. Description
    1. Identifying features
    1. State of art
    1. 5W’s & 1H and S.W.O.T analysis
2. Requirements
    1. High level requirements
    2. Low level requirements
3. Architecture
    1. Behavioural Diagram
    2. Structural Diagram
4. Test plan and Output
    1. High level test plan
    2. Low level test plan


# REQUIREMENTS
## i Description
 * This Project is an __Wiper control (WCS) system__,a wiper control system for an automotive wiper controls the operational speed of a wiper in accordance with rain conditions.It useful in the automotive unit the main purpose of the system is to clean the windscreen sufficiently to provide suitable visibility at all times.

---

## ii Identifying features
 * When the button is pressed once the car will start (__Ignition key postion at ACC__)
 * When the button is pressed again the wiper will start(__Wiper On__)
 * When the button is pressed again the wiper will off(__Wiper Off__)
 * When the button is pressed thrice the car will stop(__Ignition key position at Lock__)

## iii State of art
 * The main focus point is seeing the wiper control of the car.
 * And also seeing the seep of the wiper system in the car
 * Now this two features are explained in these project
---
## iv 5W's & 1H and S.W.O.T analysis is in the below table 

| 5W's & 1H | 

*__What__  -- wiper control system (WCS)

*__Where__ --Inside and out side the car

*__When__  --When the weather condition is bad (like in rain and snow) the wiper is activate and clean the car window

*__Who__   --Who is driving or controlling the car

*__How__   --By using STM like by multiple pushes on a button


| S.W.O.T ANALYSIS |

__Strengths__ 

*No human interaction with car

*Manages all commands with one key automatically

*encryption in data

__Weaknesses__

*Unable to monitor status of car

*Range is limited

*Wait for certain time after every command to press new command 

__Opportunities__

*The Scope of this sytem is huge in car control

*can be used where  the car need thesed command

*Less cost

__Threats__

*When new command is given without completing the current command it will not take current command


---

## 2 Requirements

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


# 3 Architecture
* ##  i Behavioral Diagram
    ![BD](https://github.com/sandhya0711/m3_wiper-control-system-wcs-/blob/fe6d54c170e235e0351a75a4e16fdec9fbab9c5b/2_Architecture/BEHAVIORAL%20DIAGRAM.png)
* ## ii Structural Diagram
    ![UML](https://github.com/sandhya0711/m3_wiper-control-system-wcs-/blob/fe6d54c170e235e0351a75a4e16fdec9fbab9c5b/2_Architecture/STRUCTURAL%20DIAGRAM.png)
---

# 4 Test plan and output

### Test plan is created and verified

## HIGH LEVEL TEST PLAN

| Test ID | Description | Input | Expected output | Actual Output | 
| --- | --- | --- | --- | --- | 
| 01 | START | USER BUTTON PRESS ONCE  | Shall Start the car at ACC position | Shall start the car at ACC position  | 
| 02 | WIPER ON | USER BUTTON PRESS TWICE | Wiper will on |  Wiper will on | 
| 03 | WIPER SPEED WHEN ON | USER BUTTON PRESS THIRD TIME | Speed of wiper incerese  | Speed of wiper incerese |
| 04 | WIPER OFF | USER BUTTON PRESS FOURTH TIME | wiper will off | wiper will off |
| 05 |  STOP | USER BUTTON PRESS FIVTH TIME | Stop the car | Stop the car |
| 06 |  ENCRYPTION | 1 OR 2 0R 3 0R 4 | encrypted data for 1/2/3/4 | encrypted data for 1/2/3/4 |


## LOW LEVEL TEST PLAN

| Test ID | Description | Input | Expected output | Actual Output | passed/not |
| --- | --- | --- | --- | --- | --- |
| 01 | Check for Start | USER BUTTON PRESS ONCE  | RED LED will be on | RED LED will be on | ✅ |
| 02 | Check for Wiper on | USER BUTTON PRESS TWICE  | Shall On 3 LED's as per ENCRYPTION | Shall OFF all LED's as per ENCRYPTION | ✅ |
| 03 | Check for Speed of wiper | USER BUTTON PRESS THREE TIMES | Shall ON LED's ONCE clockwise as per timers |  Shall ON LED's ONCE clockwise as per timers | ✅ |
| 04 | Check for Wiper off | USER BUTTON PRESS FOUR TIMES | Shall Off 3 LED's once anti-clockwise as per timers |  Shall off 3 LED's once anti-clockwise as per timers | ✅ |
| 015 | Check for Stop | USER BUTTON PRESS FIVTH TIME  | RED LED will be off | RED LED will be off | ✅ |
| 06 | Check for ENCRYPTION | 1/2/3/4  | 1244/1843/6789/5478 | 1244/1843/6789/5478 | ✅ |
| 07 | Check for btn_press() | counts no of button press  | 1/2/3/4/5 | 1/2/3/4/5 | ✅ |

