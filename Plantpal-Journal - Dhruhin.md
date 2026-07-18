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
