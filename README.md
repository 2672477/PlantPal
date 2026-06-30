# PlantPal

---

# NOTE

This project was originally started for FALLOUT and is now being transferred to Horizons with permission from both organizers.

No funding was received from FALLOUT, and the project was never approved there. Since FALLOUT uses Lookout, I kindly request that project hours be evaluated based on my submitted journal entries.

AI tools were used during the initial planning and brainstorming phase of this project. All hardware design, firmware development, CAD modeling, assembly, testing, and documentation reflect own work.

P.S. - Permission was taken from @phthallo for doing it this way.

---

# Overview

![PlantPal](PlantPal-main/photos/assembled_model_home.jpg)

PlantPal is a solar-powered device that monitors the environment around a plant. It measures soil moisture, temperature, humidity, and light levels using an ESP32 and displays the plant's condition on a 0.96" OLED display.

Instead of showing raw sensor values, PlantPal displays simple expressions that make it easy to tell when a plant is healthy or needs attention. The goal was to make something that could be understood with a quick glance instead of opening an app or reading graphs.

The device runs from a rechargeable 18650 battery, while a small solar panel helps recharge it during the day.

---

# Why I Built It

I wanted to build a project that combined electronics, firmware, CAD, and 3D printing into one complete system.

While looking at existing plant monitoring projects, I noticed that most of them focused on displaying sensor values. That works well if you know what the numbers mean, but I wanted to try a different approach. Instead of expecting the user to interpret moisture percentages or light levels, PlantPal converts those readings into simple expressions on the display.

This project also gave me the opportunity to design my own enclosure, integrate solar charging, and build a complete embedded system instead of only testing sensors on a breadboard.

---

# Features

- Measures soil moisture
- Measures temperature and humidity
- Measures ambient light
- Displays the plant's condition on a 0.96" OLED display
- RGB LED status indicator
- Rechargeable 18650 battery
- Solar-assisted charging
- ESP32-WROOM-32 based hardware
- Custom designed 3D printed enclosure

---

# Project Gallery

## Fully Assembled Device

![Main Assembly](PlantPal-main/photos/assembled_model_home.jpg)

## Side View

![Side View](PlantPal-main/photos/assembled_model_side.jpg)

## Exploded View

![Exploded View](PlantPal-main/photos/exploded_view.jpg)

## Exploded View (Front)

![Exploded Front](PlantPal-main/photos/exploded_view_home.jpg)

## Exploded View (Side)

![Exploded Side](PlantPal-main/photos/exploded_view_side.jpg)

These renders were useful while checking the fit of the internal components before printing the final enclosure.

---

# How It Works

PlantPal uses four sensors to monitor the plant's surroundings:

- Capacitive Soil Moisture Sensor
- AHT20 Temperature Sensor
- AHT20 Humidity Sensor
- BH1750 Light Sensor

Every few seconds, the ESP32 reads all four sensors and compares the values against predefined thresholds in the firmware.

Based on those readings, the firmware selects an expression that reflects the plant's overall condition. For example, dry soil or poor lighting will display an unhappy expression, while good growing conditions display a happy one.

The RGB LED also changes colour to match the current status, making it easy to check the plant from a distance.

Power is supplied by a rechargeable 18650 battery. A CN3065 solar charging board recharges the battery whenever the solar panel is exposed to sunlight.

---

# CAD Files

Designing the enclosure took several iterations because I needed to fit the battery, ESP32, display, charging circuit, sensors, and wiring into a compact space while keeping the device easy to assemble and service.

## Complete Assembly

- [STL File](PlantPal-main/cad/BODY_WITH_ELECTRONICS/Body_electronics.stl)

- [STEP File](PlantPal-main/cad/BODY_WITH_ELECTRONICS/Body_electronics.step)

## Individual Parts

All printable enclosure parts are available in:

```text
PlantPal-main/cad/PARTS
```

The repository also includes the source CAD files so the design can be modified or improved in the future.

---

# Hardware

PlantPal is built around an ESP32-WROOM-32 and uses commonly available components.

| Component | Purpose |
| ------------------------------- | --------------------------------- |
| ESP32-WROOM-32 | Main Controller |
| Capacitive Soil Moisture Sensor | Soil Moisture Measurement |
| AHT20 | Temperature & Humidity Measurement |
| BH1750 | Ambient Light Measurement |
| 0.96" OLED Display | Displays Plant Status |
| RGB LED | Visual Status Indicator |
| 18650 Battery | Main Power Source |
| CN3065 Solar Charger | Solar Battery Charging |
| HT7333-A LDO Regulator | 3.3V Voltage Regulation |
| 5V 2W Solar Panel | Solar Power Input |
| Custom 3D Printed Enclosure | Houses All Components |

---

# Bill of Materials

A complete list of components, supplier links, quantities, and prices is available here:

- [Bom.csv](PlantPal-main/Bom.csv)

The total hardware cost for this project is approximately **$18.39 USD**, excluding tools used during assembly.

---
# Wiring Diagram

I decided not to design a PCB for this version of PlantPal. Instead, all of the electronics are connected using hand wiring.

Before assembling everything, I recreated the circuit in KiCad to make sure all of the power and signal connections were correct. That made assembly much easier and helped catch mistakes before I started soldering.

![Wiring Diagram](PlantPal-main/wiring/Wiring_Diagram.jpg)

The wiring diagram includes:

- ESP32-WROOM-32
- Capacitive Soil Moisture Sensor
- AHT20 Temperature & Humidity Sensor
- BH1750 Light Sensor
- 0.96" OLED Display
- RGB LED
- CN3065 Solar Charging Circuit
- HT7333-A LDO Regulator
- 18650 Battery
- Solar Panel

Everything shown in the diagram matches the hardware used in the finished build.

---

# Building PlantPal

This repository includes the firmware, CAD files, wiring diagram, BOM, and assembly resources needed to recreate the project.

---

## 1. Print the Enclosure

Print all enclosure parts from:

```text
PlantPal-main/cad/PRINTING PARTS
```

After printing, install the M3 brass heat-set inserts into the enclosure.

The enclosure is designed around the components used in this build, making assembly straightforward while still allowing access for maintenance.

---

## 2. Prepare the Electronics

Use the BOM as a checklist and gather all required components.

Main components:

- ESP32-WROOM-32
- Capacitive Soil Moisture Sensor
- AHT20
- BH1750
- 0.96" OLED Display
- RGB LED
- CN3065 Solar Charger
- HT7333-A Regulator
- 18650 Battery
- Battery Holder
- Solar Panel

I tested each sensor individually before final assembly to avoid troubleshooting after everything was mounted.

---

## 3. Assemble the Hardware

Begin installing the components inside the enclosure.

The enclosure includes mounting locations for:

- ESP32
- OLED Display
- Battery Holder
- Charging Board
- Voltage Regulator

Fitting everything inside the enclosure took several layout revisions. The final design leaves enough room for wiring and can still be opened later if a component needs replacing.

---

## 4. Complete the Wiring

Follow the wiring diagram while soldering the connections.

Main connections include:

- I²C bus for the OLED, AHT20, and BH1750
- Soil moisture sensor output
- RGB LED outputs
- Battery connections
- Solar charging circuit
- 3.3V power rail

Double-check all power connections and verify there are no shorts before connecting the battery.

---

## 5. Upload the Firmware

The firmware is located in:

```text
PlantPal-main/firmware
```

Upload it using Arduino IDE or PlatformIO.

The firmware handles:

- Reading all sensors
- Processing the sensor values
- Choosing the correct plant expression
- Updating the OLED display
- Controlling the RGB LED

Once uploaded, the ESP32 starts monitoring automatically.

---


# Using PlantPal

After startup, the device continuously monitors the plant and updates the display every few seconds.

1. Insert the soil moisture sensor into the plant pot.
2. Place the device where the solar panel can receive sunlight.
3. Power on the device.
4. Wait a few seconds for the first sensor readings.

Once running, PlantPal updates automatically.

The OLED displays the current condition of the plant, while the RGB LED provides a quick status indication that can be seen from a distance.

No app or additional setup is required after powering on.

---
