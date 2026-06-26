# PlantPal — Journal Export

- Exported at: 2026-06-20T16:10:05Z
- Project ID: 2370
- Entries: 23

## Entry 1
- ID: 5692
- Author: Dhruhin
- Created At: 2026-05-06T06:09:40Z

### Content

I finally got a clear and working plan for the project! I spent time planning the system architecture, focusing on the two-device setup between the Hub and the Nodes. I also added a reliable backup system to ensure the outdoor node still functions if the Hub fails to connect.

Next, I defined how the emotion system of the project works, making sure it's simple and easy to understand. Alongside that, I designed the Hub system to work with multiple Nodes and also defined how the Hub recognizes each Node.

When planning the Hub, I had to decide whether I should go with a physical device or just an app. For now, I’ve decided to proceed with a physical device, since it feels more practical for the current concept, but I’m keeping the app option open for the future if needed.

I also reviewed similar existing products, which helped me understand that my project falls in the Premium Gardening & Horticulture space . That insight influenced few design decisions.

Then I brainstormed a few hardware additions like LED accents and a magnetic back to improve both functionality and aesthetics . Finally, with the help of ChatGPT and Gemini, I put together an initial design for both the Outdoor Node and the Hub. 

So in short, I’ve mapped out how the entire project will function end-to-end.

![Hub Draft Design.jpeg](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MTE5MzIsInB1ciI6ImJsb2JfaWQifX0=--b8077042b4c28be3be387fe690534204a1df67d9/Hub Draft Design.jpeg)
![Node Draft Design.jpeg](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MTE5MzMsInB1ciI6ImJsb2JfaWQifX0=--0e997db2c5fec044c36159f07bcae2b41007744e/Node Draft Design.jpeg)


### Recording Links

- https://public.lapse-hackclub.link/timelapses/WK7xKbXs_DTZ/timelapse-WK7xKbXs_DTZ.mp4
- https://public.lapse-hackclub.link/timelapses/CL8EHu1k5XNz/timelapse-CL8EHu1k5XNz.mp4

## Entry 2
- ID: 5903
- Author: Dhruhin
- Created At: 2026-05-07T14:14:27Z

### Content

Today I created the GitHub repository for PlantPal and set up the initial project structure. I organized folders for firmware, simulation, and documentation so the project stays clean and manageable as development continues.

After setting up the repository, I worked on writing the first README draft. I focused on explaining the main idea behind PlantPal, how the Hub and Outdoor Nodes work together, and how the emotion-based system makes plant care more intuitive and interactive.

I also added sections for system architecture, planned hardware, features, and future improvements so the repository gives a clear overview of the project and its long-term vision.

In the end, I had a properly organized GitHub repository and a completed README draft, giving the project a solid foundation for future development.

![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MTI0MzYsInB1ciI6ImJsb2JfaWQifX0=--93835eca1df07d64db6bf0f5499130a6d7fce671/image.png)
![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MTI0MzcsInB1ciI6ImJsb2JfaWQifX0=--9484f114e52a9ec473cabbe9d0d091c58a8bae65/image.png)


### Recording Links

- https://public.lapse-hackclub.link/timelapses/dq0RUUBd83Fb/timelapse-dq0RUUBd83Fb.mp4
- https://public.lapse-hackclub.link/timelapses/vrku-IpqXvnG/timelapse-vrku-IpqXvnG.mp4

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

## Entry 4
- ID: 6094
- Author: Dhruhin
- Created At: 2026-05-08T14:53:58Z

### Content

Today I mainly worked on making the BOM  for the PlantPal outdoor node and planning the electronics properly. I listed out the main parts like the ESP32, soil moisture sensor, temperature sensor, BH1750 light sensor, OLED display, LED strip, charging module, voltage regulator, battery, and solar panel.

I also spent time trying to understand how everything connects instead of just picking parts randomly. I checked prices, compatibility, and availability to make sure the setup is actually realistic.

This honestly made the project feel way more real because I could finally picture how all the hardware would come together instead of it just being random ideas in my head. It also made me feel a lot more confident since I understand the structure and electronics of the PlantPal outdoor node way better now.

![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MTI4MzYsInB1ciI6ImJsb2JfaWQifX0=--1d1a0014fe9eae28681b17b88a9d97c2afae3abd/image.png)


### Recording Links

- https://public.lapse-hackclub.link/timelapses/8xWYj5SCap_P/timelapse-8xWYj5SCap_P.mp4

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

## Entry 6
- ID: 6145
- Author: Dhruhin
- Created At: 2026-05-08T19:38:48Z

### Content

Today I worked on planning the BOM for the PlantPal central hub. At first I thought it would be as same as the outdoor node in the context of difficulty and guess what I was right. It is such a struggle to find the right component for the right price and it also had to be available.

Most of the time I was just researching parts and figuring out what actually makes sense together. I looked at stuff like the ESP32, displays, power management, storage, RTC modules, connectors, and other small components. I also had to search the same product again and again since they were way to costly or unavailable.

This also helped me understand how everything connects together. By the end of the day the project felt way more real in my head and I feel a lot more confident about how it’s all going to work. Kudos to myself for actually completing the entire thing without breaking down!

![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MTMwMzIsInB1ciI6ImJsb2JfaWQifX0=--80eac02612d26049b6fad5ad91acd599e9e68bb0/image.png)


### Recording Links

- https://public.lapse-hackclub.link/timelapses/yDhH1sWmtQS9/timelapse-yDhH1sWmtQS9.mp4

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

## Entry 9
- ID: 6471
- Author: Dhruhin
- Created At: 2026-05-10T18:28:50Z

### Content

At first I wanted to directly start writing the code for the emotion logic, but while setting up PlatformIO IDE my IDE was lagging so much that I genuinely lost patience. Then I realized I could literally use that waiting time to start researching instead.

At first I thought the whole emotion logic system would be straightforward and simple, but the deeper I went, the harder it got. The real struggle started when I realized my math wasn’t exactly wrong… just very inaccurate. Like I was like are you kidding me I literally thought my math is perfect just to get humbled few days later. I spent forever trying to fix the formulas and eventually got them working properly, but I used AI’s help to clean them up.

After that I started the actual plant research and somehow ended up discovering that plants can basically be grouped by their water retention behavior.  I spent a lot of time reading documentation and trying to understand the different plant types, but it quickly became way too much information to process normally. So instead, I used AI to summarize the plant categories into smaller and easier explanations that I could actually work with.

By the end of it all, I finally managed to piece everything together and honestly the entire logic system makes way more sense in my head now.
![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MTM4MjMsInB1ciI6ImJsb2JfaWQifX0=--a816feaa8b70e9ab1ac65aa6b3ddfb12e477a5b3/image.png)


### Recording Links

- https://public.lapse-hackclub.link/timelapses/577JR8riJK8C/timelapse-577JR8riJK8C.mp4

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

## Entry 11
- ID: 6633
- Author: Dhruhin
- Created At: 2026-05-11T18:28:22Z

### Content

Hey, so finally my PlatformIO IDE was setup so now I could finally start the emotion logic, so I created the first part for the Central Hub. I basically started by setting up the PlatformIO ESP32-S3 project in VS Code and then organized the whole project into modular folders inside `lib/` so everything stays clean and easier to manage later. After that I created the main core system data structures inside `types.h` and built the overall `PlantProfile` blueprint structure which basically became the base for how plants work inside PlantPal.

Then I created the first real plant profile which was the  Xerophyte profile and added its sunlight ranges, moisture ranges, temperature ranges, and weight priorities for different environmental conditions. After that I built the `sensor_score_calculator` system to evaluate how suitable a condition is for a plant and connected it to the `score_calculator` system which calculates the final overall health score. Oh yeah so basically after yesterday's research I came to conclusion to make a score based on the readings of the sensors but guess what I forgot about it, but atleast I remembered it and did that too. So in short  I finally designed the full setup of the Emotion Logic of the Central Hub.

![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MTQzNTEsInB1ciI6ImJsb2JfaWQifX0=--a5a3de37c674920f1ab710b98c1c29bb13e6acb9/image.png)


### Recording Links

- https://public.lapse-hackclub.link/timelapses/xyRklBYikdzx/timelapse-xyRklBYikdzx.mp4

## Entry 12
- ID: 6764
- Author: Dhruhin
- Created At: 2026-05-12T11:58:54Z

### Content

Today while completing the setup for the emotion logic of the central hub, I realized I had somehow forgotten to add the normalizer part. The moment I noticed it I was just like “Really? After all this?” so I quickly added it in and continued writing the code.

Then came the part that genuinely confused me for a while. I started debating with AI about the implementation of my formulas because something still felt off in the outputs. At first I thought AI was saying I messed up Formula 1 — the sensor normalizing formula — and I was defending it because technically the formula itself was correct. Turns out Formula 1 wasn’t even the issue. I literally just forgot to finish Formula 2 somehow. 

So basically I had two formulas:
* the sensor normalizing formula
* the score converter formula

And somehow I only wrote the code for the first one. Which means the program could normalize sensor readings, but it never properly converted those normalized values into finalized scores. Yeah… AI was right the whole time apparently. Not because my formula was wrong, but because I literally forgot to complete the second half of the logic. The worst part is I literally spent like 30 minutes tweaking these formulas the other day

Moving on, after finally understanding the issue, I set up the missing score conversion logic and continued building the health score system. Then right as I was saving the code, I randomly decided to ask AI for one final review. Good thing I did because I had somehow forgotten to define the multiplier values and also hadn’t implemented the danger counting system yet. So yeah… I added those too.

But after all of that, I can finally say I’m done with the setup for the emotion logic of the central hub. Honestly, this whole thing felt like one giant chain of “fix one thing, discover another missing thing,” but somehow it all came together in the end.

Kudos to myself for actually finishing it — and hopefully I didn’t forget anything else this time.

![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MTQ4MDAsInB1ciI6ImJsb2JfaWQifX0=--9341d8c3d80b779c0756283fbb10acf90276cd20/image.png)

![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MTQ4MDEsInB1ciI6ImJsb2JfaWQifX0=--7fbe18572c907a6449e6b2e68fca7c45e1d0625d/image.png)


### Recording Links

- https://public.lapse-hackclub.link/timelapses/T-J5PLlt8xVm/timelapse-T-J5PLlt8xVm.mp4

## Entry 13
- ID: 6792
- Author: bhaveshtushar123
- Created At: 2026-05-12T16:30:58Z

### Content

Today I spent most of the time rechecking the full schematics for both the node and hub systems again. Went through the power flow, GPIO pins, charging modules, sensors, OLED, audio amplifier, and SD card connections because I wanted to make sure everything actually made sense before moving ahead. Found a few small mistakes and cleaned up some messy wiring too.
After that I checked the BOM and overall project cost properly and realised the build was becoming way more expensive than expected, especially after adding the hub hardware, audio system, display, and extra modules. I also started checking flight prices and visa costs for the Shenzhen plan which made the budget situation worse.
Then I had a pretty long discussion with my teammate about whether the hardware hub was actually worth keeping or not. After thinking about cost, complexity, portability, and time, we decided to completely remove the physical hub and instead convert the hub system into a mobile app.

![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MTQ4NTksInB1ciI6ImJsb2JfaWQifX0=--1c925175caef3e9f22e4fc795ae7d1b6a5d5e0db/image.png)
![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MTQ4NjAsInB1ciI6ImJsb2JfaWQifX0=--bb1825650c1fe3b62b837ed4a7d2443b40644900/image.png)
![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MTQ4NjEsInB1ciI6ImJsb2JfaWQifX0=--852dff70d41dd19b2e1fc11931f1bf08f12a2e2c/image.png)
![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MTQ4NjQsInB1ciI6ImJsb2JfaWQifX0=--ad17d650097965bf60a3505726b2dc2d53dee98c/image.png)


### Recording Links

- https://lookout.hackclub.com/api/media/8a91131a-500c-47d4-bbc7-44bb21372fc5/video.mp4

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

## Entry 15
- ID: 6964
- Author: Dhruhin
- Created At: 2026-05-13T18:20:26Z

### Content

Today was honestly one of the most satisfying sessions I’ve had on the project so far because I finally completed writing the emotion logic system for the central hub and most importantly no mishaps. After spending so much time building the structure, debugging formulas, fixing missing logic, and connecting all the scoring systems together, I finally reached the point where I have built the heart of the project.

Hey now I can finally see the logic flow correctly from sensor readings → normalized values → converted scores → emotional interpretation was honestly a really satisfying moment because for the first time the system actually behaved the way I originally imagined it. 

I also finished writing all the plant profiles for every plant type in the project. I thought this part would be quick, but it ended up taking way longer because I wanted each plant to have its own behaviors, preferences, and proper setup connected to the health/emotion system. Now I could finally include personalization of specific plant types much better and looks like I brought proper use to my  research on plant types.

At first I was just gonna make the emotion levels super simple with every 20 health score for each level, but later after AI explained non-linear growth to me, I realized a custom scale would actually make the emotions feel way more natural instead of super flat and repetitive.

So by the end of today, I finally completed:

- the emotion logic system
- all the plant profiles

Crazy how I manage to all that in just a short portion of time ! 

![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MTUyMjEsInB1ciI6ImJsb2JfaWQifX0=--1bada6a551a588c3229d2c16bf8c98a3e0881ba0/image.png)


### Recording Links

- https://lookout.hackclub.com/api/media/5151bebc-0cc5-4fe8-9795-6278d35b3cb5/video.mp4

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

## Entry 17
- ID: 7141
- Author: Dhruhin
- Created At: 2026-05-14T18:12:03Z

### Content

Today honestly felt like one of those sessions where the project started feeling more “alive” instead of just a collection of systems stitched together because I finally completed writing the connection logic and fallback logic for the central hub. After spending so much time thinking through all the possible failure cases, disconnects, retries, and recovery situations, I finally reached the point where the system could actually handle problems properly instead of instantly breaking the moment something went wrong.

After that, I moved on to working on the LED accent system which sounded extremely simple in my head at first… until I accidentally discovered how many shades of green exist. I genuinely thought it would just be “pick green” done. Absolutely not. Apparently there’s warm green, cool green, mint green, forest green, neon green, soft green, emerald green, muted green, and somehow every single one gave the entire setup a completely different mood. Finding the “right” green somehow became a side quest that took way longer than expected because even tiny adjustments completely changed how the LEDs felt. But once I finally started getting the accents looking the way I imagined, the whole setup instantly felt way more polished and alive.

And then came the humbling portion of today. At one point I asked AI to review my LED accent code because something felt off and I was convinced I probably messed up part of the logic. Turns out… I was correct. AI found bugs. So I fixed them. Then I asked it to check again. Another issue appeared.  So I fixed that too. Then another error showed up. And another.  At some point it honestly felt like every time I fixed one thing, the code unlocked a brand new problem just to keep me humble. Every time I thought - “Alright NOW it’s finally fixed.”  The code basically responded with  “Incorrect.”

But honestly, that entire process ended up helping a lot because every bug forced me to clean up the structure more properly instead of leaving hidden issues behind. By the end of it, the logic was not only working better, but the entire system also became cleaner and way more reliable than when I first started.

![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MTU2MDAsInB1ciI6ImJsb2JfaWQifX0=--38a885f25d2ee483198cf56e43e1edc40b791262/image.png)

![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MTU2MDEsInB1ciI6ImJsb2JfaWQifX0=--b582392e8d0e6d47d3b068e860cdb6c7ed272d58/image.png)

![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MTU2MDIsInB1ciI6ImJsb2JfaWQifX0=--9cd8a3f754afe40e78448cd824f5cfb0cb4de735/image.png)



### Recording Links

- https://public.lapse-hackclub.link/timelapses/c9ZRulISw00Y/timelapse-c9ZRulISw00Y.mp4

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

## Entry 19
- ID: 7298
- Author: Dhruhin
- Created At: 2026-05-15T18:10:01Z

### Content

Today honestly felt pretty huge Win because the project I finally started working on the smart and cool features . I finished building the node identity system, so now nodes can properly recognize themselves, reconnect correctly, and recover without completely confusing the network every time something disconnects. Seeing that finally work smoothly was way more satisfying than I expected.

After that I worked on the sleep-aware feature which sounded super easy in my head at first. I thought it would basically just be “if late at night, go idle.” Yeah no. Turns out there’s a massive difference between idle, sleeping, disconnected, partially active, and silently failing. I spent way longer than expected understanding and tweaking timings and behaviors because even tiny changes completely changed how natural the system felt.

Then I worked on the water recovery feature which was honestly more interesting than I expected. The system now slowly moves through different recovery states instead of instantly jumping back to normal, so the transitions actually feel natural. I spent some time tweaking the recovery timing and emotion progression logic so it wouldn’t feel too fast or weirdly robotic. Once it finally started moving smoothly from critical states back to thriving properly, the whole system felt way more alive and polished.

And then came the smart analysis feature which was also the feature that let AI humble me for the rest of the session. Every time I fixed one analysis issue, another edge case randomly appeared somewhere else. It genuinely felt like the system was exposing every bad assumption I had hidden in the code. But honestly that helped a lot because by the end of it, the entire structure became way cleaner and more reliable than when I started.


![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MTU5MzksInB1ciI6ImJsb2JfaWQifX0=--30cf365f64bd51fcb8efe5227ed7d41703aea2e8/image.png)
![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MTU5NDAsInB1ciI6ImJsb2JfaWQifX0=--36cf46d28c093572a7d612d705b789c087b4a780/image.png)
![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MTU5NDEsInB1ciI6ImJsb2JfaWQifX0=--3c76aa98b0b925804c7584e4fc4f6c92d4d9e6f0/image.png)
![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MTU5NDIsInB1ciI6ImJsb2JfaWQifX0=--b9b47edf622ac5e0867a972e7abce0078cab9814/image.png)


### Recording Links

- https://public.lapse-hackclub.link/timelapses/kkSCzfPPqANP/timelapse-kkSCzfPPqANP.mp4

## Entry 20
- ID: 9098
- Author: Dhruhin
- Created At: 2026-05-25T12:30:17Z

### Content

Today’s session honestly felt super chaotic but ironically productive at the same time.

I started by writing the code for all the sensor modules which ended up being way more annoying and repetitive than I expected. Every sensor had its own weird little issues, so fixing one thing usually meant that the same problem occurred in the other codes.

After that I worked on the hysteresis feature and got humbled by math for way longer than I expected. Tiny value changes completely changed how the system behaved, so I spent a lot of time adjusting thresholds and timings just to make everything feel stable instead of random.

The biggest part of the session was definitely the trend analysis feature. I seriously underestimated how long it would take. The hardest part was figuring out what actually counts as a real trend instead of just random fluctuations. But once it finally started working properly, the whole system felt way smarter because it could understand patterns instead of reacting instantly to every small change.

I also worked on the system intelligence logic to make the system more context aware and natural overall. By the end of the session everything felt more connected and realistic.

The funniest part was getting absolutely humbled by debugging the analysis system. Every time I fixed one issue, another edge case appeared out of nowhere and exposed some terrible assumption in my code.

Even though the whole session was exhausting, finally completing all the code felt really satisfying. The system genuinely feels smarter and more advanced now than it did before. 

![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MjAxNDEsInB1ciI6ImJsb2JfaWQifX0=--80536c103b4ef171bde000e58b936eac8681fa7d/image.png)
![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MjAxNDMsInB1ciI6ImJsb2JfaWQifX0=--99d3dcadc765a3d778fcb261f5e174c92c2233cb/image.png)
![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MjAxNDQsInB1ciI6ImJsb2JfaWQifX0=--822fca72750cbae36d08d9d9c9d06d07ab8ef99f/image.png)
![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MjAxNDYsInB1ciI6ImJsb2JfaWQifX0=--f381d40f033f3eea87622036a053861ee72f94bb/image.png)
![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MjAxNDcsInB1ciI6ImJsb2JfaWQifX0=--2da87077745690a396e681892a3e422a5bed1cdf/image.png)
![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MjAxNDgsInB1ciI6ImJsb2JfaWQifX0=--b42103799e50dcae09be9308e67dc48310e913a8/image.png)


### Recording Links

- https://public.lapse-hackclub.link/timelapses/YzPbqTXbEmDx/timelapse-YzPbqTXbEmDx.mp4
- https://public.lapse-hackclub.link/timelapses/nlDZXo2E7Mip/timelapse-nlDZXo2E7Mip.mp4

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
