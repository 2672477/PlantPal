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

## July 2nd

Today was mostly focused on making the sensor readings actually reliable instead of just accepting whatever values came in. I started working on the ADC filtering module because the raw readings from the soil moisture sensor were way noisier than I expected. Even when the sensor wasn't moving, the values would randomly jump around, which made the plant's condition change way too often. I tried a few different filtering methods before settling on one that smoothed out the noise without making the readings feel delayed.

After that I moved on to the sensor calibration module. This ended up taking longer because every sensor behaves a little differently, especially the soil moisture sensor. I didn't want the firmware to rely on random raw numbers, so I worked on converting them into values that actually made sense for the rest of the system. It took a lot of testing with dry and wet soil just to figure out good calibration points.

There were definitely a few moments where I thought I had everything working, only to notice some weird reading that completely threw things off. After a bit more tweaking though, everything finally started behaving much more consistently. It doesn't look like a huge feature from the outside, but getting clean and calibrated sensor data feels like a really important step since every other part of the firmware depends on it.

<img width="1482" height="663" alt="image" src="https://github.com/user-attachments/assets/d014bcd3-8398-4d77-9ca6-5a841ba6adab" />
<img width="1476" height="617" alt="image" src="https://github.com/user-attachments/assets/2a29a1a8-fbfd-43c6-9f6c-0c8d2b1aafdb" />

**Total time spent: 1h 45m**

## July 3rd

Today I worked on the sensor diagnostics module, and it turned out to be a lot more interesting than I first thought. At the beginning I assumed it would just check if a sensor was connected or not, but I quickly realized there were way more situations to handle. A sensor could still be connected but return impossible values, get stuck on the same reading, or suddenly start giving random spikes that didn't make any sense.

I spent most of the time thinking about how the firmware should tell the difference between an actual environmental change and a sensor that was starting to fail. I added different checks to catch suspicious readings without being too aggressive, since I didn't want the system constantly reporting false errors whenever a value changed quickly.

And in the end I had finally completed it.

<img width="1487" height="666" alt="image" src="https://github.com/user-attachments/assets/201c244e-5970-4cee-b057-2c98196931da" />

**Total time spent: 1h 01m**

## July 4th

Today I worked on three modules that are all connected in one way or another, even though they each have a different job. I started with the sensor reliability module because I realized not every sensor reading should automatically be trusted. Sometimes a reading can be technically valid but still look suspicious compared to previous values. I spent some time figuring out how to rate the reliability of each sensor instead of treating everything equally, which should help the rest of the firmware make better decisions.

After that I moved on to the stress analysis module. This one was actually pretty fun to build because I didn't want the plant to instantly become "stressed" the moment one reading went out of range. Instead, I worked on making stress build up gradually if bad conditions lasted for a while and slowly disappear once things improved. It made the whole system feel a lot more realistic instead of reacting to every tiny change.

The last thing I worked on was the weight manager. At first it sounded like a simple settings module, but I quickly realized it controls how much influence each environmental factor has on the final health score. I spent quite a while adjusting the different weights and testing how changing one value affected the overall result. By the end of the day everything felt much more balanced, and the health calculations finally started behaving the way I originally imagined.

<img width="1487" height="666" alt="image" src="https://github.com/user-attachments/assets/76799071-6c3a-48c1-ab01-67a8dd014d95" />
<img width="1487" height="663" alt="image" src="https://github.com/user-attachments/assets/9bb079dd-bc50-433c-b69f-559216358559" />
<img width="1482" height="657" alt="image" src="https://github.com/user-attachments/assets/12c993f3-09e2-4845-87da-ba440591cccd" />

**Total time spent: 1h 11m**

## July 5th

Today, I worked on the health confidence system and the adaptive health curve. Both turned out to be much more complicated than I expected. At first, I thought I could just calculate a health score and be finished, but then I realized that not every sensor reading should be trusted equally. Sometimes the readings fluctuate or change suddenly. If I treated every value as completely accurate, the plant would change its mood for no good reason.

So, I started building the health confidence logic to measure how much the system should trust the current health calculation. I spent a lot of time testing different situations and adjusting the values. I didn’t want the confidence to drop too easily, but I also didn’t want it to ignore real problems. Finding that balance took more trial and error than I anticipated.

After that, I moved on to the adaptive health curve. This was actually pretty fun. Instead of letting the health score jump around whenever a sensor changed, I made it adjust more naturally. If the plant suddenly gets a slightly better reading, it doesn’t instantly become perfectly healthy. The same goes for bad conditions. The health now changes gradually, which makes the whole system feel much more realistic. It no longer acts like it’s constantly overreacting.

The hardest part was getting both systems to work together. Sometimes the confidence score indicated that the readings weren't very reliable, while the adaptive curve still wanted to change the health too quickly. I had to keep adjusting the calculations until both features agreed with each other. It took several test runs, but once everything finally started behaving consistently, the health updates looked much smoother and more believable.

<img width="1482" height="660" alt="image" src="https://github.com/user-attachments/assets/a5376c48-5282-45cc-9342-4eaaa297b4cc" />
<img width="1486" height="665" alt="image" src="https://github.com/user-attachments/assets/cdbf8946-ed51-437d-9cdc-ec974f2697c2" />

**Total time spent: 1h 31m**

## July 6th

Today, I spent most of my time working on the dynamic recovery system. The main idea was to have the plant recover gradually after its conditions improve instead of jumping back to a healthy state all at once. At first, I thought I could use a simple timer to slowly increase the health score. However, as I started writing the logic, I realized it needed to be much more intelligent.

I had to consider different situations, like what should happen if the plant was only slightly unhealthy versus being in a really bad state for a long time. It didn't make sense for both to recover at the same speed. I began experimenting with different recovery rates so that the system felt more natural and didn’t seem like it was cheating by fixing everything immediately.

I also spent some time testing what occurs when the environment changes while the plant is recovering. For instance, if the soil starts drying out again or the light levels suddenly drop, the recovery shouldn't continue as if nothing happened. Getting that behavior right required a lot of trial and error because even a small change in the recovery logic could drastically affect how the plant reacted overall.

Most of today was about testing different scenarios and fine-tuning numbers until everything felt right. It was one of those days when I probably changed the same few lines of code dozens of times just to see how the system responded. By the end, the recovery felt much smoother and more believable, and the plant now reacts in a way that resembles how a real plant would slowly bounce back instead of magically becoming healthy all at once.

<img width="1485" height="665" alt="image" src="https://github.com/user-attachments/assets/49b08c0e-1ca4-419f-8505-e5b5390da6b9" />

**Total time spent: 1h 29m**

## July 6th

Today was one of those days where I ended up working on multiple features that all depended on each other. I started by improving the dynamic recovery system because I wanted the plant to recover in a way that actually made sense instead of instantly bouncing back after the conditions improved. I tweaked the recovery logic so it reacts differently depending on how unhealthy the plant was before. It took a bit of experimenting, but the gradual recovery ended up feeling much smoother and a lot more realistic.

After that I moved on to the trend prediction feature. The goal was to let the system look at previous health values and figure out whether the plant was likely to improve, stay stable, or get worse. It sounded pretty simple at first, but once I started testing it, I realized random sensor fluctuations could completely confuse the predictions. I had to spend quite a while filtering out those small changes so the predictions weren't constantly changing every few seconds.

Once the prediction logic was working reasonably well, I added trend prediction confidence. I didn't want the system making bold predictions when there wasn't enough reliable data, so I created a confidence value that tells how trustworthy the prediction actually is. Getting that balance right took a lot of tweaking because I didn't want the confidence to always be too high or too low.

I wrapped up the day by working on environmental stability. Instead of only looking at the latest sensor readings, the system now also considers how consistent the environment has been over time. I liked this feature because it rewards stable growing conditions instead of reacting to every tiny change. After testing everything together, the predictions felt much smarter, recovery looked more natural, and the overall health system finally started behaving the way I had imagined when I first planned this project.

<img width="1482" height="647" alt="image" src="https://github.com/user-attachments/assets/76bc0862-5911-4825-ac0e-7b20be4218b5" />
<img width="1487" height="666" alt="image" src="https://github.com/user-attachments/assets/97e96b59-ba82-4734-9ffc-eed952248ac3" />

**Total time spent: 1h 59m**

## July 7th

Today I worked on a bunch of modules that don't really show up on the OLED, but they make the whole system run a lot better behind the scenes. I started with the scheduler because there were quite a few tasks that needed to happen at different times, like reading sensors, updating the display, checking the plant's health, and handling other background processes. At first I was just calling everything one after another, but that quickly became messy. Setting up a proper scheduler made the firmware feel much more organized, even though getting all the timings right took longer than I expected.

Once that was working, I moved on to trend classification. I already had data showing whether the plant's health was changing, but I wanted the system to describe those changes in a simple way like improving, stable, or declining. The tricky part was preventing tiny fluctuations from constantly switching between states, so I ended up tweaking the thresholds until the classifications felt much more consistent.

After that I worked on the smart alert manager. I didn't want the system to keep repeating the same alerts every time it checked the sensors, so I added logic to prioritize important alerts and avoid unnecessary notifications. I tested different situations where multiple problems happened at the same time, and it was pretty satisfying to see the manager choose the most important alert instead of flooding the user with messages.

I finished the day by improving the debug module. Even though users will never see it, it ended up saving me a lot of time while testing everything else. I cleaned up the debug output so it was easier to follow what each module was doing without filling the serial monitor with random information. By the end of the day, tracking bugs became much easier, and the firmware overall felt far more organized and predictable than it did before.

<img width="1482" height="662" alt="image" src="https://github.com/user-attachments/assets/23c17729-6ee4-4386-a27b-3888f0f74025" />
<img width="1482" height="660" alt="image" src="https://github.com/user-attachments/assets/dbef4b3a-053a-4c19-b56b-16174e8b6a88" />

**Total time spent: 1h 52m**

## July 7th

Today I decided to spend some time improving the project README instead of writing more firmware. At first I thought it would just be a quick documentation update, but once I started reading through everything, I realized there were a lot of things that needed to be explained more clearly. Since the project has grown quite a bit, I wanted anyone looking at the repository to understand how everything fits together without having to dig through the code.

The biggest thing I worked on was documenting all of the firmware modules and writing a short description for what each one does. There are a lot of different parts now, and keeping track of their individual roles has started to get confusing, even for me. Writing everything down actually helped me organize the project better and made me notice a few places where I could improve the structure later.

I also added the firmware pipeline to show how data moves through the system. Instead of just listing features, I wanted to explain the order in which everything happens, starting from reading the sensors all the way to calculating the plant's health, choosing an emotion, and finally updating the OLED display and RGB LED. Putting that flow into the README made the whole project feel much easier to understand.

Even though I didn't write a lot of new code today, I still felt like it was a productive session. Good documentation is something I usually leave until the end, but working on it now made me appreciate how much the project has grown. The README is starting to look much more complete, and I think it'll make it a lot easier for other people to understand how PlantPal works without having to read every single source file.

<img width="1115" height="900" alt="image" src="https://github.com/user-attachments/assets/9f3ed001-70d7-4afc-b1aa-9e7b7bf10015" />

**Total time spent: 51m**

## July 16th

Today I focused on two features that are closely connected: condition analysis and water recommendation. I already had all the sensor data coming in, but I wanted the system to actually understand what those readings meant instead of treating each sensor separately. That turned out to be more challenging than I expected because a single bad reading doesn't always mean the plant is unhealthy.

I started by building the condition analysis module. The idea was to combine things like the overall health score, environmental stability, stress, and recent trends to figure out what was really happening to the plant. I spent a lot of time testing different combinations because I didn't want the system to overreact whenever one sensor briefly changed. After tweaking the logic quite a bit, the final result felt much more reliable and gave a better picture of the plant's actual condition.

Once that was working, I moved on to the water recommendation feature. Instead of simply saying the soil was dry, I wanted the system to make a smarter recommendation based on multiple factors. The recommendation now takes into account the moisture level along with the plant's overall health and other environmental conditions before deciding whether watering is actually needed. It took a few rounds of testing because I didn't want it suggesting water too often or ignoring situations where the plant genuinely needed attention.

Most of today was spent adjusting thresholds and checking different scenarios to make sure both modules worked well together. It was a lot of trial and error, but seeing the condition analysis feed into more meaningful watering recommendations made the whole project feel much smarter. The system is starting to make decisions that feel less like simple sensor checks and more like it's actually understanding how the plant is doing.

<img width="1487" height="666" alt="image" src="https://github.com/user-attachments/assets/84269b38-ae99-47d2-9b89-81343ff2e541" />
<img width="1482" height="662" alt="image" src="https://github.com/user-attachments/assets/1208c301-3fb2-4cd4-8e93-bc5ef32d187a" />

**Total time spent: 1h 53m**

## July 16th

Today I worked on the seasonal adjustment and power management modules, and they both ended up making the project feel a lot more practical. I started with seasonal adjustment because I realized that plants don't always need the exact same conditions throughout the year. The health calculations shouldn't stay completely fixed if the surrounding environment naturally changes with the seasons, so I added logic that lets the system adjust its thresholds depending on the current season.

Getting those adjustments to feel reasonable took quite a bit of tweaking. If the changes were too aggressive, the plant would look healthy when it really wasn't, but if I barely adjusted anything, there wasn't much point in having the feature at all. I spent a while testing different values until the health calculations felt more balanced without making the system unpredictable.

After that I switched over to power management. Since PlantPal runs on a rechargeable 18650 battery with solar-assisted charging, I wanted to make sure it wasn't wasting power by constantly running every task at full speed. I worked on reducing unnecessary processing and making different parts of the firmware run only when they actually needed to. I also adjusted how often sensors are sampled and when certain background tasks should be executed so the ESP32 isn't doing extra work all the time.

Most of the afternoon was spent testing different update intervals and checking that nothing important was being skipped while trying to save power. It was a bit of a balancing act because making the system too aggressive with power saving could make the display or sensor updates feel slow. After a lot of trial and error, I found settings that kept everything responsive while still improving overall efficiency. It felt good knowing the project is becoming not only smarter but also better suited for running on battery power for longer periods.

<img width="1480" height="658" alt="image" src="https://github.com/user-attachments/assets/41c9b3fb-1041-4d4c-a31e-7bb4c160fcb2" />
<img width="1485" height="667" alt="image" src="https://github.com/user-attachments/assets/ae11c588-b720-43e8-8a4e-71cfab859f7c" />

**Total time spent: 1h 02m**

## July 17th

Today was probably one of the biggest milestones for PlantPal because I finally started putting all the separate modules together into the main firmware program. Until now, most of the features were being developed and tested individually, but today was about making everything communicate properly as one complete system.

I started by creating the main program structure and connecting all the modules together. This meant bringing in the sensor drivers, calibration, filtering, reliability checks, health calculations, recovery, prediction, alerts, LED control, and debugging systems all into one place. Seeing the list of modules grow inside the main file was honestly kind of crazy because it showed how much the project had developed from just reading a few sensors.

The hardest part was not writing the functions themselves, but making sure everything happened in the correct order. The data had to flow properly from the physical sensors, then through filtering and calibration, then into health calculations, and finally into things like emotions, predictions, and alerts. One wrong order or missing update could completely change the output, so I spent a lot of time checking the pipeline and fixing small integration issues.

I also worked on the scheduler system so different tasks could run at different intervals instead of everything happening at the same time. Sensor updates, health calculations, trend analysis, alerts, LED updates, and debugging all have different timing requirements, so separating them made the firmware much cleaner.

The debug system was really useful during this stage because it let me watch the health score, stress level, confidence, predictions, and alerts while the firmware was running. Seeing actual values changing instead of just testing individual functions made the project feel much more real.

There are still some unfinished parts like the OLED and WiFi integration, but getting the core intelligence pipeline working was a huge achievement. Today was the moment where PlantPal stopped feeling like a collection of modules and started feeling like an actual intelligent plant monitoring system.

<img width="1482" height="663" alt="image" src="https://github.com/user-attachments/assets/cce5025f-097a-4409-bee9-28870823e994" />

**Total time spent: 1h 54m**
