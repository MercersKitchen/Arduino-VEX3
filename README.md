# Arduino-VEX3
Exploration

CAUTION: Develop Motor Program
- sensor programs are working in Arduino Only
- Still need to execute sensor programs in VSC to utilize Co-Pilote that is built in

Delete this note when done

---

Reminder in Arduino IDE: Open Serial Monitor

Hyperlinks
- Exploration of PlatformIO, <a href="https://github.com/MercersKitchen/Arduino-VEX3?tab=readme-ov-file#arduino-vex3">Text Here</a>
- VEX Ultrasonic, <a href="https://github.com/MercersKitchen/Arduino-VEX3/tree/main?tab=readme-ov-file#vex-ultrasonic">Text Here</a>
    - <a href="https://github.com/MercersKitchen/Arduino-VEX3/blob/main/Vex_ultrasound/Vex_ultrasound.ino">Code Here</a>
    - See Folder above for Images
- TBA, <a href="">Text Here</a>
- TBA, <a href="">Code Here</a>


** Note:** forked and alternate from Mr. Rutter
- https://github.com/NickRutterUalberta/Arduino-VEX3

---

# Exploration of PlatformIO
- Install PlatformIO as an Extension
- Create a New Project from a ```.ino file```
- Select Accurate Board (i.e. Arudino Uno)

When opening again
- In Folder ```scr``` open ```.ino```
- CAUTION: delete any main.cpp, etc
- Then open PlatformIO / Open / Navigate to platformio.ino / Open Project
- Switch to the Arduino Program
- Note: add ``` #include <arduino.h>``` library

To open a new Folder: File / New Window OR Open Folder

---

# Converting Arduino to VSC-PlatformIO
- In Github Desktop / Open VSC

### Notes to include
- New Project
- Choose Board
- Name File
- PlatformIO will create contents of folder
- copy .ino to source
- delete main.cpp
- execute by checkmark, arrow, and clicking the pulg in (serial monitor, in the PlatformIO bottom-picker)

---

# VEX Ultrasonic
- Black: ground
- Red: 5V Power
- digital output means triggering a sensor between 0 & 1

Trigger (OUTPUT): Orange, Pin-9

Echo (INPUT): Yellow, Pin-10

---

# VEX Shaft Encoder
- Black: ground
- Red: 5V (CAUTION current image illustrates 3.3V)
- digital output means triggering a sensor between 0 & 1

Outer White Wire = 3 Pin

Inner White Wire = 5 Pin

If Power connected to 3.3V program runs but sensor does not output or input distance

---

# Line Follower
- **See Folder for PDFs** about sensor desgin and hints.
- Black: ground
- Red: 5V

- analog means reading a specifc number

- line sensor: what is the darkest number, what is the birghtest number
- how does this correspond in "real-life"

Google Search: https://www.vexrobotics.com/276-2154.html?___store=vexroboticsca&___from_store=vexrobotics&srsltid=AfmBOopOWOMtHZChHNC3Sl_xxSmBXaDxidMMMvo1M1As8EO_jG4Fgu_r#attr-vex_compatability
- Sensor Search numbers on sesnor: Vex3 2442BB [276-2154]

---

# Potentiometer

Video Support: https://youtu.be/Wa8CjGsOFzY?si=0STN7rZC84WG9xFl
- https://docs.arduino.cc/learn/electronics/potentiometer-basics/

### Rearch
- https://kb.vex.com/hc/en-us/articles/360039090591-Using-the-V5-3-Wire-Potentiometer
- https://wiki.purduesigbots.com/vex-electronics/vex-sensors/3-pin-adi-sensors/potentiometer
- https://www.vexforum.com/t/potentiometer/45361
- https://kb.vex.com/hc/en-us/articles/360039090591-Using-the-V5-3-Wire-Potentiometer

--- 

# Bump Switch


Ideas
- https://kb.vex.com/hc/en-us/articles/360038026831-Using-the-V5-3-Wire-Bumper-Switch-v2-Limit-Switch
- https://www.vexforum.com/t/programming-bumper-switches/23430


---

# Limit Switch


---

# VEX Motor 393 with Motor Controller 29

## To Do List
- Powering Ardino from 9V Battery, Barrel required
   - https://forum.arduino.cc/t/powering-my-uno-r3/565905
   - https://forum.arduino.cc/t/power-with-9v-battery/892709
   - https://www.amazon.ca/Extra-Power-Supply-Adapter-Arduino/dp/B09T6VNPF8
- DDM voltages of different int-values for motor
- Power Arudino from Barell connetor (old laptops) to breadboard
- Create prototyping board using 2-prong and 3-prong connectors & hookup wire
   - Purpose: prototyping board is discarded, everything is unplugged from prototyping board
   - https://www.digikey.ca/en/products/detail/te-connectivity-amp-connectors/640250-3/259225?gclsrc=aw.ds&&utm_adgroup=General&utm_source=google&utm_medium=cpc&utm_campaign=PMax%20Shopping_Product_Zombie%20SKUs&utm_term=&productid=259225&utm_content=General&utm_id=go_cmp-17855401585_adg-_ad-__dev-c_ext-_prd-259225_sig-EAIaIQobChMIob7hmLGUjAMVEyutBh2EUwA1EAQYAiABEgJkEPD_BwE&gad_source=1&gclid=EAIaIQobChMIob7hmLGUjAMVEyutBh2EUwA1EAQYAiABEgJkEPD_BwE
   - 3 Rectangular Connectors - Housings Receptacle Natural 0.156" (3.96mm)
- TBA

- Re-execute all code in VSC with PlatformIO
- Ability to use Co-pilot

CAUTION: Develop Motor Program
- sensor programs are working in Arduino Only
- Still need to execute sensor programs in VSC to utilize Co-Pilote that is built in

Delete this note when done

## Errors and Debugging

ERROR: Arduino IDE
- Display: Downloading package-index.tar.bz2
- Solution: close the serial monitor

Sparkfun's VEX Motor Library: https://github.com/sparkfun/vexMotor
- ERROR: header file issue
    - Solution: downgrade to Arduino v1.8.9
- Cannot happen on School Computers

## Developing Motor Code

---

Video: https://www.youtube.com/watch?v=N2LpwizZARw
- Copy Code off Video
- Ruth developing, will share when complete

---

Description of Code: https://www.vexforum.com/t/using-a-vex-motor-in-arduino/112472/3
Images and Code: https://forum.arduino.cc/t/vex-motor-code-help-need/1088689/34?page=2

Comments & Code:
- https://forum.arduino.cc/t/vex-motor-code-help-need/1088689/8
- https://forum.arduino.cc/t/vex-motor-code-help-need/1088689/9

Comments and Code, alternate: 
- https://forum.arduino.cc/t/arduino-with-vex-motor/187302/2

---

## Basic Breadboard Connection

### Arduino
- USB to computer: download and power arduino
   - Alternate Arduino Power In: barrel from BATT+ & BATT-
- GRD to BATT-
- Pin-9 (Digital) to WHITE-wire Motor-29, 3-prong

### Motor-29, 3-prong
- ORANGE to BATT+
- BLACK to BATT-
- WHITE to Arduino-Pin-9 (Digital)

## Motor-29 to Motor, 2-Pronge
- direct connection

---

Connectors Required
- Tamiya Female Connectors, <a href="https://www.amazon.ca/dp/B06XRW21GN/ref=sspa_dk_detail_1?psc=1&pd_rd_i=B06XRW21GN&pd_rd_w=iKSfx&content-id=amzn1.sym.516c2169-755e-413a-a38a-68230f4ab66f&pf_rd_p=516c2169-755e-413a-a38a-68230f4ab66f&pf_rd_r=EH4F3875ETBZ61EB81Y0&pd_rd_wg=YvfSs&pd_rd_r=d1584f56-5fd2-448d-9635-e373a72f1ad9&s=toys&sp_csd=d2lkZ2V0TmFtZT1zcF9kZXRhaWw">here</a>
   - Battery side connector should always be the male
   - Charger or Breadboard side should be the female connector
- VEX EDR Motor 393 Website, <a href="https://www.vexrobotics.com/393-motors.html">here</a>
- VEX Motor Controller 29 Website, <a href="https://www.vexrobotics.com/276-2193.html">here</a>
- Reminder in Arduino IDE: Open Serial Monitor

# You Tube 
- URL: https://www.youtube.com/watch?v=N2LpwizZARw
- ERROR: 9V is going to the breadboard
   - Arduino is stepping-down the 9V to 5V
   - The current is also decreased a lot
   - Solutin: Connect higher amp battery
- ERROR: mirrored motor turn opposite ways to turn in the same way
   - Soution: switch polarity
   - Solution: change the code to a negative value

---

Ideas
- https://kb.vex.com/hc/en-us/articles/360038026831-Using-the-V5-3-Wire-Bumper-Switch-v2-Limit-Switch



--- 

# Arduino Uno Playlist

https://youtu.be/Wa8CjGsOFzY?si=0STN7rZC84WG9xFl


---

# To Include
- find design ideas for sensor
- design self-driving car | apply to cars already made

---

# To Explore
- https://github.com/michaellatman/Arduino-VEX
- https://forum.arduino.cc/t/vex-kit-controller-usage/1158279/2
- https://learn.sparkfun.com/blog/1593
- https://forum.arduino.cc/t/problems-incorporating-vex-into-arduino/520665
- 

---

# Motor Explore Solution
https://www.google.com/search?q=arduino+analogWrite%28motorPin%2C+motorSpeed%29%3B&sca_esv=2020710c914fca4d&rlz=1C1GCEA_enCA1147CA1147&ei=cNfuZ9vlMs6-0PEP-tmk6QQ&ved=0ahUKEwjb3fX2wryMAxVOHzQIHfosKU0Q4dUDCBA&uact=5&oq=arduino+analogWrite%28motorPin%2C+motorSpeed%29%3B&gs_lp=Egxnd3Mtd2l6LXNlcnAiKmFyZHVpbm8gYW5hbG9nV3JpdGUobW90b3JQaW4sIG1vdG9yU3BlZWQpOzIHECEYoAEYCjIHECEYoAEYCkiIFlCaBlj7CHABeAGQAQCYAaEBoAGJAqoBAzAuMrgBA8gBAPgBAfgBApgCA6ACugLCAgoQABiwAxjWBBhHwgINEAAYgAQYsAMYQxiKBcICDhAAGLADGOQCGNYE2AEBwgIWEC4YgAQYsAMYQxjlBBjIAxiKBdgBAcICDRAAGIAEGLEDGEMYigXCAhAQLhiABBixAxhDGOUEGIoFwgINEC4YgAQYQxjlBBiKBcICChAAGIAEGEMYigXCAhAQABiABBixAxhDGIMBGIoFmAMAiAYBkAYRugYGCAEQARgJkgcDMS4yoAfvD7IHAzAuMrgHrgI&sclient=gws-wiz-serp&safe=active&ssui=on

---
