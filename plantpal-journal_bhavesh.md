# NOTE: The remaining journal entries are of my teammate, thus are not included in my journal as fallout takes both together in one. Also, I have included a random project(modular_navigator) in my hackatime as 3 hrs are required before submitting. PLS DO NOT CONSIDER THOSE HRS. I DO NOT WANT TO GET FLAGGED BY @FRAUD SQUAD. I have taken permission from Horizons team to do this. Thank you!
## Total time spend
### FALLOUT HRS-37.9 hrs
### HACKATIME HRS-0.9
## TOTAL=38.8 HRS

# PlantPal — Journal Export

- Exported at: 2026-06-20T16:10:05Z
- Project ID: 2370
- Entries: 23

## Entry 3
- ID: 5917
- Author: bhaveshtushar123
- Created At: 2026-05-07T16:06:18Z

### Content

today was mostly focused on understanding the electronics and planning side of the new project with Dhruhin <3. we finalized a rough component list for both the PlantPal node and hub systems, which honestly made the whole idea feel way more real instead of just random thoughts on paper. we discussed how sensors, displays, power modules, and communication between the two ESP32 boards would work together.

i also spent time learning schematics properly and understanding how components connect logically before actually wiring anything. after that i downloaded KiCAD for the first time and started exploring the software for making schematics and future pcb work. ngl it looked super confusing at first bruh, but after watching tutorials and clicking around it slowly started making sense.

not a huge building day physically, but definitely important because now i understand the project architecture and electronics workflow way better yay.


![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MTI0NjksInB1ciI6ImJsb2JfaWQifX0=--173ff8342590277c1e4235dc39fee8d64728fffb/image.png)


### Recording Links

- https://lookout.hackclub.com/api/media/5ab33579-50ad-4a1c-97a9-db52b238f06b/video.mp4

## Entry 5
- ID: 6108
- Author: bhaveshtushar123
- Created At: 2026-05-08T16:37:24Z

### Content

Today I worked on the KiCad schematic again. Added the ESP32, OLED display, RGB LED, moisture sensor, temperature sensor, light sensor, solar charging module, battery charging module, and battery. Did most of the GND connections too, which took longer than expected because of all the wires crossing everywhere.

Also connected some parts of the solar panel circuit to the charging module. Added resistors and capacitors where needed. Mostly spent time moving things around and checking connections because some stuff was connected wrong the first time.

Overall, it was just schematic work for most of the day.

Schmatics-:

![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MTI4ODUsInB1ciI6ImJsb2JfaWQifX0=--a30476a2f7fed72b6fb7bb9e359ce71ef569304a/image.png)


### Recording Links

- https://lookout.hackclub.com/api/media/1f7b8eaa-c1c9-4452-80d6-fc069befb9ee/video.mp4
- https://lookout.hackclub.com/api/media/6279dd45-151a-4eea-8f6b-39d9115646f6/video.mp4

## Entry 7
- ID: 6278
- Author: bhaveshtushar123
- Created At: 2026-05-09T15:53:52Z

### Content

Today I’ve been working on the TP4056 charging circuit in KiCad. Connected the battery, 5V input, GND and the BAT pin connections correctly. Also added the charging and standby LEDs with the resistors so that the charging status can be shown physically later.

Spent most of the time checking the pin connections as the TP4056 pins were easy to mix up. Had to redo some wires after seeing a couple of mistakes in the layout. wired up the PROG pin resistor as well, and did some cleanup of the schematic to make the wiring look less confusing.

I mostly worked on charging circuits today and fixed small connection problems.

![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MTMzNDAsInB1ciI6ImJsb2JfaWQifX0=--1fd2ef60e85c2f1d5899b5fac2fca2a3ecc024af/image.png)
![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MTMzNDEsInB1ciI6ImJsb2JfaWQifX0=--ad7eba8a94721a6879a439637da6a320daccad95/image.png)


### Recording Links

- https://lookout.hackclub.com/api/media/37b36937-bbb7-4d18-b73c-07ce0e945bd3/video.mp4

## Entry 8
- ID: 6447
- Author: bhaveshtushar123
- Created At: 2026-05-10T16:13:37Z

### Content

Today was mostly wiring work for the PlantPal schematic. Connected almost all the remaining parts including the sensors, OLED display, RGB LED, TP4056 module, solar charging module, battery, and boost converter with the ESP32. Spent a lot of time routing wires properly because the schematic was getting messy and some connections kept overlapping.

After that I went back and rechecked the whole circuit again to make sure the current flow and power connections actually made sense. Also had to decide GPIO pins properly depending on analog support, I2C, PWM, and avoiding ESP32-C3 boot issue pins. Found and fixed a few wrong connections during checking too.

Also helped another Hack Cluber for a bit because she DM’d me asking about KiCad and wiring problems.

SCHEMATICS-
![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MTM3NzQsInB1ciI6ImJsb2JfaWQifX0=--5eba2bf739f1cf80b76c0b8aaca9d76b17a466ff/image.png)

NOTEPAD-
![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MTM3NzUsInB1ciI6ImJsb2JfaWQifX0=--0173190e3eb35267d7eb056f6eace0fac3de8341/image.png)
![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MTM3NzYsInB1ciI6ImJsb2JfaWQifX0=--dcc548715b1923fa874ecfa1ed825a996eec04cf/image.png)


### Recording Links

- https://lookout.hackclub.com/api/media/7065059a-00b2-42a5-b121-e7af8bd39af5/video.mp4
- https://lookout.hackclub.com/api/media/04546d30-af83-4f61-9567-41a2cfead865/video.mp4


## Entry 10
- ID: 6610
- Author: bhaveshtushar123
- Created At: 2026-05-11T16:34:08Z

### Content

Journal Entry, Day __

Today, I color-coded much of the node wiring in KiCad to make the schematic easier to read. The wires became confusing after I added all the sensors, charging modules, OLED, RGB LED, and power connections. Then, I rechecked the entire node schematic to confirm the current flow, GPIO pins, and power routing were correct.

After that, I completed most of the hub schematic, including the audio amplifier, speaker, OLED, MicroSD, regulator, TP4056, and ESP32 connections. I spent some time double-checking all the connections because there were many overlapping communication and power lines.

I also exported the schematic files and organized them in the file explorer before starting CAD tomorrow.
NODE-
![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MTQyODIsInB1ciI6ImJsb2JfaWQifX0=--a4f24d42f192e0302ecbc424065076f9e5ee0784/image.png)

HUB-
![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MTQyODMsInB1ciI6ImJsb2JfaWQifX0=--78720a5e69a59630c99054f5ff75cc892dd096b4/image.png)


### Recording Links

- https://lookout.hackclub.com/api/media/11ef0c32-c5c4-484f-8737-61aee74f9471/video.mp4
- https://lookout.hackclub.com/api/media/53a89df3-de79-4e76-8606-135fc017e0b2/video.mp4
- https://lookout.hackclub.com/api/media/eacdf0fa-082c-4c86-b559-8ba7f5f7aea2/video.mp4

## Entry 14
- ID: 6958
- Author: bhaveshtushar123
- Created At: 2026-05-13T17:38:13Z

### Content

Today I started making a rough layout of the project in Paint first so I could plan where all the electronics would actually fit before doing proper CAD. It helped me figure out spacing and placement for the ESP32, battery, sensors, OLED, charging module, boost converter, and wiring paths without making the Autodesk file messy immediately.
After that I started adding all the electronics into Autodesk and placing components roughly inside the model. Most of the time went into checking dimensions, arranging parts so they would physically fit, and trying to keep wiring space available. Also had to keep changing placements because some components were overlapping or taking more space than expected.
![Untitled.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MTUyMTQsInB1ciI6ImJsb2JfaWQifX0=--d792d57022ce8b70cfefbb8730f16476e203bb41/Untitled.png)
![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MTUyMTUsInB1ciI6ImJsb2JfaWQifX0=--80440e83b845bd95d16e023a3ea3472cd48414e8/image.png)
![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MTUyMTYsInB1ciI6ImJsb2JfaWQifX0=--27a35b1e6783ea0efd71449dd162b7e3f13648e1/image.png)


### Recording Links

- https://lookout.hackclub.com/api/media/19227290-0214-49de-aecf-73635e859d86/video.mp4
- https://lookout.hackclub.com/api/media/39ec9275-5b34-49c3-b704-0bd5c9d1d179/video.mp4

## Entry 16
- ID: 7079
- Author: bhaveshtushar123
- Created At: 2026-05-14T13:52:37Z

### Content

Today I worked more on the Autodesk model and started adding some of the main electronics into the enclosure. Added the OLED display, ESP32, MT3608 boost converter, 18650 battery, and AMS1117 regulator roughly in their positions to check spacing and layout. Had to move parts around a lot because some components were larger than expected and the wiring space was getting cramped.

Also made an internal platform/support structure inside the model so more electronics could be mounted properly instead of everything floating around randomly. Spent some time adjusting heights and placements so components could stack better and still leave space for wires and future additions.
![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MTU1MjAsInB1ciI6ImJsb2JfaWQifX0=--7fdfdc5f4012d8a5f45c6f59ad5e46021130c0cd/image.png)
![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MTU1MjEsInB1ciI6ImJsb2JfaWQifX0=--adcd3d57110f4852fdb10b6083404b68baa075ac/image.png)
![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MTU1MjIsInB1ciI6ImJsb2JfaWQifX0=--131ac3992fa297f5c99cc4177ecd3a557f070db5/image.png)
![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MTU1MjMsInB1ciI6ImJsb2JfaWQifX0=--ae2a0594902a92c26010a010b1221bb82206c242/image.png)


### Recording Links

- https://lookout.hackclub.com/api/media/3a23301c-8656-4666-a354-427e7738438a/video.mp4

## Entry 18
- ID: 7276
- Author: bhaveshtushar123
- Created At: 2026-05-15T15:57:34Z

### Content

Today, I focusd mainly on the CAD model and completed most of the main structure for the node. I added more components to the enclosure, including the DHT11 sensor, LDR, solar panel, and the Hack Club logo to the design. I spent a lot of time adjusting placements and dimensions to ensure everything fit well without overlapping internally. I also created holes and cutouts for wires, screws, sensors, and mounting points since the enclosure was mostly solid before. I changed the render and material settings too, making the model look cleaner and easier to visualise. Most of the CAD work is done now, aside from a few small adjustments and final details. Also added lid, forgot that part.

ELECTRONICS-
![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MTU4ODYsInB1ciI6ImJsb2JfaWQifX0=--a688a37a5c5aaca0f999992ad2c77efbe392fdc2/image.png)
LID-
![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MTU4ODcsInB1ciI6ImJsb2JfaWQifX0=--3941ec2647038709e5f751afcd001dd08ab4c2e8/image.png)
MAIN-
![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MTU4ODgsInB1ciI6ImJsb2JfaWQifX0=--26401787aaaea6fceccbcf4af161c77d5f80f91f/image.png)


### Recording Links

- https://lookout.hackclub.com/api/media/62b85ff0-1776-4982-bd3c-866d370d4d17/video.mp4
- https://lookout.hackclub.com/api/media/e16ffa62-e9bf-44ba-a7a8-ef37866cbf37/video.mp4
- https://lookout.hackclub.com/api/media/b78c2c9e-9d7b-4c64-90aa-9508c52582d8/video.mp4

## Entry 21
- ID: 14029
- Author: bhaveshtushar123
- Created At: 2026-06-14T17:11:51Z

### Content

Today I started working on the Zine for the project. Since I had never really made one before, a lot of the time went into figuring out how everything should be laid out and what information was actually important to include. I worked on organizing the content, planning pages, and trying to make it look less cluttered while still explaining the project properly.

During Fallout Lock-In 2, I also learned how to use Figma from Rehan. He showed me some of the basics, like working with frames, arranging elements, and making designs look cleaner. I used some of those things while working on the Zine.

Apart from that, I spent time hanging out with Renran and a few other people during the event. We talked, messed around, and had a lot of fun while working, which made the whole session much more enjoyable.

zine-
![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MzMzNTIsInB1ciI6ImJsb2JfaWQifX0=--56f260a76b7c9b02164ec1d74c25082f3c8428f2/image.png)


### Recording Links

- https://lookout.hackclub.com/api/media/140d17be-c9f9-49db-b658-40af07913806/video.mp4
- https://lookout.hackclub.com/api/media/5c043b82-5789-4a20-974e-6d6c678c438f/video.mp4

## Entry 22
- ID: 14574
- Author: bhaveshtushar123
- Created At: 2026-06-16T17:07:38Z

### Content

Journal Entry — Day __

Today I worked more on the CAD model and made a few important design changes before moving closer to a final version. I went through the enclosure again and checked that all the screw holes were properly placed and aligned so the different parts could be assembled securely. I also adjusted some dimensions and placements to make sure the components would fit correctly inside the enclosure.

On the electronics side, I updated the design by simplifying the power system. I removed the MT3608 boost converter and AMS1117 regulator from the project and replaced them with an HT7333-A LDO regulator along with a 16V radial electrolytic capacitor. This made the circuit simpler, reduced the number of components, and helped save space inside the enclosure. After making the changes, I updated the CAD layout to match the new electronics arrangement and checked that everything still fit properly.

![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MzQ1NzMsInB1ciI6ImJsb2JfaWQifX0=--5edb8bb7268bd5380275469a4e01483d72ee1dec/image.png)

### Recording Links

- https://lookout.hackclub.com/api/media/3869ff6c-a1b9-4fa5-9c12-3c610f5561af/video.mp4

## Entry 23
- ID: 15568
- Author: bhaveshtushar123
- Created At: 2026-06-20T12:16:36Z

### Content

Today was mostly focused on documentation and final project organization. I spent a good amount of time going through the entire project again and updating the README so it accurately reflected the current version of PlantPal. Since the hub had been removed from the project, I had to rewrite several sections, update the hardware list, BOM, architecture, setup instructions, and add proper descriptions for how the device works.

I also organized the repository structure, added links to the CAD files, wiring diagrams, and project assets, and made sure all the renders and images were included in the documentation. A lot of time went into deciding what information was actually important and removing sections that were either outdated or repetitive.

Along with that, I reviewed the BOM again, checked component selections, and verified that the documentation matched the latest CAD and electronics design. By the end of the day, the project felt much more complete and easier for someone new to understand without needing to open additional files.
![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MzcxODQsInB1ciI6ImJsb2JfaWQifX0=--b4fe0c42fbd3b3c944c7a68ea547524a02f35efd/image.png)


### Recording Links

- https://lookout.hackclub.com/api/media/ad1d62ed-e7c8-4d50-b121-b4235400ed38/video.mp4
- https://lookout.hackclub.com/api/media/1b7cbb93-9836-4f7b-9f13-83dcc30274e4/video.mp4
