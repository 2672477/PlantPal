# 🌿 PlantPal

<<<<<<< HEAD
### Giving Plants a Voice

[Hero Render Here]

---

# 📖 What Is PlantPal?

PlantPal is a portable smart plant companion that helps users understand the needs of their plants through simple emotional feedback instead of confusing graphs and sensor readings.

The device continuously monitors:

* 💧 Soil Moisture
* ☀️ Light Intensity
* 🌡️ Temperature

and translates those conditions into expressive emotions displayed on a small OLED screen.

Instead of asking:

"Is my plant getting enough water?"

PlantPal simply shows how the plant feels.

---

# ❓ Why I Made This

I noticed that many people lose plants not because they do not care about them, but because they do not know what their plants need.

Most plant care advice is based on guesswork:

* Water when needed
* Give enough sunlight
* Keep temperatures suitable

The problem is that beginners often cannot tell when something is wrong until it is too late.

I wanted to create a device that could act as a translator between plants and people by turning environmental data into something intuitive and easy to understand.

---

# ✨ Features

* 🌱 Real-time plant monitoring
* 😊 Emotion-based OLED feedback
* 🌈 RGB status indicator
* ☀️ Solar-assisted charging
* 🔋 Rechargeable 18650 battery
* 📡 ESP32-based processing
* 🌿 Compact outdoor design
* ⚡ Low-power operation

---

# 🖼️ Renders

## Fully Assembled Device

[Insert Main Render]

## Internal Electronics Layout

[Insert Internal Render]

## Exploded View

[Insert Exploded View]

---

# ⚙️ Hardware

## Main Components

| Component            | Purpose                 |
| -------------------- | ----------------------- |
| ESP32-C3             | Main Controller         |
| DHT11                | Temperature Monitoring  |
| Soil Moisture Sensor | Soil Moisture Detection |
| LDR                  | Light Detection         |
| OLED Display         | Emotion Display         |
| RGB LED              | Quick Status Feedback   |
| 18650 Battery        | Power Source            |
| CN3065               | Solar Charging          |
| HT7333-A             | Voltage Regulation      |
| Solar Panel          | Renewable Charging      |

---

# 🔌 Wiring Diagram

[Insert KiCad Schematic Screenshot]

---

# 🧠 How It Works

1. Sensors collect environmental data.
2. ESP32 processes readings.
3. Health score is calculated.
4. OLED displays an emotion.
5. RGB LED provides quick visual feedback.
6. Solar panel helps recharge the battery.

---

# 📸 PCB / Electronics

[Insert PCB Screenshot]

or

[Insert Wiring Diagram]

---

# 🚀 Future Improvements

* Mobile app integration
* Historical plant data
* Multiple plant profiles
* Additional environmental sensors
* Wireless notifications

---

# 📂 Project Files

* CAD Models
* KiCad Schematics
* BOM
* Firmware
* Renders

---

# 🌿 Final Goal

PlantPal is designed to make plant care easier, more intuitive, and more engaging by giving plants a simple way to communicate their needs.
=======
### *Giving Plants a Voice — and People a Way to Listen*

---

# 📖 Overview

PlantPal is a smart plant companion system designed to solve a simple problem — plants do not communicate their needs in a way humans can easily understand.

Most people struggle with plant care not because they lack interest, but because they are forced to guess:

* when to water,
* how much light is enough,
* or why a plant is slowly declining.

PlantPal bridges this gap by continuously monitoring key environmental factors like:

* soil moisture 💧
* sunlight ☀️
* temperature 🌡️

through distributed sensor nodes connected to a central intelligent hub.

Instead of presenting raw data, PlantPal translates plant health into clear emotional states, making plant care intuitive and immediate.

By converting sensor readings into easy-to-understand emotional feedback, PlantPal removes uncertainty and replaces it with clarity. It acts as a translator between plants and people — sensing environmental conditions, interpreting them intelligently, and expressing them in a way that feels natural, simple, and alive.

---

# 🌟 I. What Makes PlantPal Unique?

PlantPal is not just a monitoring system — it is a translator that focuses on making plant care more intuitive, emotional, and adaptive.

### 🌱 Emotional Interface

Instead of overwhelming users with raw graphs and numbers, PlantPal translates plant health into simple emotional states.

### 🧠 Distributed Smart Architecture

A centralized intelligent hub manages multiple outdoor plant nodes simultaneously, creating a scalable ecosystem.

### 🎛️ Personalized Plant Profiles

Different plants have different needs. PlantPal supports customizable care priorities for:

* soil moisture
* light
* temperature

### 🔋 Autonomous Outdoor Nodes

Each node includes local processing and fallback intelligence, ensuring basic operation even when the hub connection is unavailable.

### 💡 Glanceable UX

OLED emotions and ambient LED indicators provide quick visual understanding without requiring users to analyze data.

### 🚨 Smart Alert System

Critical plant conditions are prioritized intelligently, reducing unnecessary notifications while ensuring urgent issues are noticed immediately.

---

## 🌿 In One Line

> PlantPal transforms plant care from data-heavy monitoring into a living, emotional, and intelligent experience.

---

# 🌱 II. What PlantPal Does

PlantPal is an IoT-based plant monitoring ecosystem that continuously tracks environmental conditions and converts them into meaningful, actionable insights.

### 🌱 Data Collection

Each plant is equipped with an outdoor sensor node that measures:

* soil moisture
* light intensity
* temperature

in real time.

### 📡 Wireless Transmission

Collected data is transmitted wirelessly to the central hub using low-latency communication.

### 🧠 Data Processing

The hub processes incoming sensor data using a weighted health model that evaluates overall plant condition using multiple parameters.

### 📊 Health Interpretation

Instead of displaying raw values directly, the system interprets plant health as a unified health score with trend awareness.

### 😊 Emotional Translation

The processed health state is converted into simple emotional feedback representing the plant’s condition intuitively.

### 🚨 Alerts & Feedback

When a plant reaches a critical state, the hub generates prioritized alerts while the node reflects the condition through OLED visuals and LED indicators.

### 🔁 Continuous Monitoring

The system continuously updates plant conditions in real time and adapts dynamically to changing environmental conditions.

---

# 🧠 III. System Architecture

PlantPal follows a distributed IoT architecture consisting of autonomous outdoor sensor nodes and a centralized intelligent hub.

---

## 🌱 Outdoor Node

Each plant is equipped with an independent sensor node responsible for local sensing and basic processing.

### Responsibilities

* Measures soil moisture, light intensity, and temperature
* Displays plant emotions through an OLED display
* Uses RGB LED indicators for quick visual recognition
* Performs basic local computation during fallback mode
* Operates using a hybrid battery + solar power strategy

---

## 🧠 Central Hub

The hub acts as the primary decision-making and control system.

### Responsibilities

* Collects real-time data from multiple nodes
* Processes sensor data using weighted health algorithms
* Maintains plant profiles and customization settings
* Converts health scores into emotional states
* Triggers alerts for critical plant conditions
* Provides a unified dashboard for all plants

---

## 🔁 Communication Flow

1. Sensor nodes collect environmental data
2. Data is transmitted wirelessly to the hub
3. Hub processes and evaluates plant health
4. Emotional state is generated per plant
5. Feedback is sent back to nodes and dashboard UI

---

## ⚡ Key Design Principles

PlantPal is built on a hybrid intelligence architecture where:

* Nodes handle sensing and fallback logic
* The hub performs centralized processing and decision-making
* The system continues limited operation even if connectivity is lost

---

# ⚙️ IV. Hardware & Tech Stack (Planned)

PlantPal is currently being designed using a modular hardware architecture focused on:

* scalability
* reliability
* low-power operation
* premium user experience

---

# 🌱 Outdoor Node

Each plant node is designed as a compact, low-power sensing unit.

## Planned Components

* **Microcontroller:** ESP32
* **Soil Moisture Sensor**
* **Light Intensity Sensor:** BH1750
* **Temperature Sensor:** AHT20
* **Display Unit:** 0.96" OLED Display
* **RGB LED Indicator Strip**
* **18650 Li-ion Battery**
* **TP4056 Charging Module**
* **ESP32 Deep Sleep Logic**
* **Voltage Regulation Module**
* **Solar Charging Module**

---

# 🧠 Central Hub

The central hub acts as the processing and control unit for the entire ecosystem.

## Planned Components

* **Main Controller:** ESP32-S3
* **Display Unit:** 6” TFT Capacitive Touchscreen
* **Internal Mini Speaker**
* **RGB LED Indicator Strip**
* **ESP-NOW Communication**
* **MicroSD Card Module**
* **USB-C Power Input**
* **Internal Voltage Regulation**
* **RTC Module:** DS3231

---

# 📡 Communication

* Wireless low-latency communication between nodes and hub
* Protocol to be finalized during implementation

---

# 🧑‍💻 Software Stack

* Embedded firmware for sensor nodes
* Centralized processing logic for health scoring
* Rule-based weighted decision engine
* Dashboard UI for monitoring multiple plants
* Communication and synchronization firmware

---

## ⚠️ Note

Component selection is currently in progress and will be finalized based on:

* power efficiency
* system stability
* performance
* scalability

---

# ✨ V. Features

* 🌱 Real-time monitoring of soil moisture, temperature, and sunlight
* 🧠 Central hub capable of managing multiple plant nodes simultaneously
* 😊 Emotion-based plant health feedback system
* 📡 Wireless communication between nodes and hub
* 🌈 Ambient RGB LED indicators for glanceable feedback
* 🔋 Low-power solar-assisted outdoor node design
* 🚨 Smart alerts for critical plant conditions
* 🔁 Fallback intelligence during communication loss
* 📊 Trend-aware health interpretation
* 🎛️ Personalized plant profiles and care settings

---

# 🚀 VI. Future Improvements

PlantPal is designed as a scalable ecosystem with several future expansion possibilities.

### Planned Enhancements

* 📱 Mobile / Remote Access
* ☁️ Cloud Integration
* 🤖 Smarter Intelligence Layer
* 🧠 Advanced Personalization
* 🌱 Expanded Sensor Ecosystem
* 🌐 Multi-device Ecosystem Expansion
* 📊 Long-term Trend Analytics
* 🔋 Battery Intelligence & Solar Efficiency Tracking

---

# 🛠️ VII. Setup Workflow

PlantPal is currently under active development. The following setup process represents the intended workflow for the complete system.

---

# 🌱 Outdoor Node Setup

1. Assemble the outdoor node with sensors and display modules
2. Mount the node near or on the plant
3. Power the node using the battery + solar setup
4. Ensure sensors are properly positioned in the soil and surrounding environment

---

# 🧠 Central Hub Setup

1. Power on the central hub
2. Initialize system firmware
3. Start wireless communication services
4. Wait for automatic detection of nearby nodes

---

# 📡 Node Pairing

* Each node broadcasts its presence automatically
* The hub detects and registers nodes using unique IDs
* Users assign plant profiles to connected nodes

---

# 🌿 Monitoring Process

Once setup is complete:

* Sensor data continuously streams from nodes
* The hub evaluates plant health in real time
* Emotional feedback is displayed on:

  * 🌱 Outdoor node OLED
  * 🧠 Central hub dashboard

---

# 🚨 Alerts & Interaction

* Critical plant conditions trigger smart alerts
* Nodes reflect plant state using OLED emotions and LED glow
* The system updates continuously without requiring manual interaction

---

## ⚠️ Note

This setup workflow represents the planned architecture and may evolve further during implementation.

---

# 🌿 Closing Vision

PlantPal is more than a monitoring system — it is an attempt to change how humans understand and interact with plants.

By transforming silent environmental data into meaningful emotional feedback, PlantPal makes plant care:

* simpler,
* more intuitive,
* more emotional,
* and more connected.

In the long term, the vision is to make every plant feel understood — not just monitored. 🌿✨
>>>>>>> b0115fdafb9de13c7d531473c61407898dc81328
