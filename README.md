# PlantPal

---

# NOTE

This project was originally started for FALLOUT and is now being transferred to Horizons with permission from both organizers.

No funding was received from FALLOUT, and the project was never approved there. Since FALLOUT uses Lookout, I kindly request that project hours be evaluated based on my submitted journal entries.

P.S. - Permission was taken from @phthallo for doing it this way.

---

# PlantPal

![PlantPal](PlantPal-main/photos/assembled_model_home.jpg)

PlantPal is a small solar-powered device that helps monitor the environment around a plant. It measures soil moisture, temperature, humidity, and light levels, then shows the plant's condition using simple emotions on a 0.96" OLED display.

Instead of opening an app or reading graphs, I wanted something that could sit next to a plant and immediately show whether it was doing well or needed attention.

---

# Why I Built This

I enjoy building embedded hardware projects, and I wanted to make something that combined electronics, firmware, CAD, and 3D printing into a single project.

While looking at existing plant monitors, I noticed that most of them display numbers or graphs. That works well if you understand the data, but I wanted something that anyone could understand with a quick glance.

The idea behind PlantPal was simple: let the plant "react" to its surroundings instead of expecting the user to interpret sensor readings.

Along the way I also wanted to learn more about enclosure design, low-power electronics, solar charging, and integrating multiple sensors into one device.

---

# Features

- Measures soil moisture
- Measures temperature and humidity
- Measures ambient light
- Displays plant emotions on a 0.96" OLED display
- RGB LED status indicator
- Solar-assisted charging
- Rechargeable 18650 battery
- ESP32 based hardware
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

---

# How It Works

PlantPal constantly checks four things around the plant:

- Soil moisture
- Temperature
- Humidity
- Light intensity

The ESP32 reads all of the sensors and compares the values with preset ranges stored in the firmware.

Instead of showing raw values on the display, the firmware chooses an emotion that represents the plant's current condition. For example, if the soil is too dry the plant will look unhappy, while healthy conditions display a happy face.

The RGB LED also changes status so the condition can be seen from a distance.

Power comes from a rechargeable 18650 battery. During the day, the attached solar panel recharges the battery through the CN3065 charging circuit, allowing the device to run without frequent charging.

---

# CAD Files

## Complete Assembly

- [STL File](PlantPal-main/cad/BODY_WITH_ELECTRONICS/Body_electronics.stl)
- [STEP File](PlantPal-main/cad/BODY_WITH_ELECTRONICS/Body_electronics.step)

## Individual Parts

The enclosure is split into individual printable parts, available here:

```text
PlantPal-main/cad/PARTS
```

The complete Fusion 360 design and STEP files are included so the enclosure can be modified or reused.

---

# Hardware

PlantPal is built around an ESP32 and combines sensing, power management, and display hardware inside a single enclosure that I designed specifically for this project.

| Component | Purpose |
| ------------------------------- | --------------------------------- |
| ESP32-WROOM-32 | Main Controller |
| Capacitive Soil Moisture Sensor | Soil Moisture Monitoring |
| AHT20 | Temperature & Humidity Monitoring |
| BH1750 | Light Intensity Monitoring |
| 0.96" OLED Display | Plant Emotion Display |
| RGB LED | Visual Status Indicator |
| 18650 Battery | Main Power Source |
| CN3065 Solar Charger | Solar Battery Charging |
| HT7333-A LDO Regulator | 3.3V Voltage Regulation |
| 5V 2W Solar Panel | Renewable Power Source |
| Custom 3D Printed Enclosure | Mechanical Housing |

---

# Bill of Materials

| Component | Cost (USD) |
| ------------------------------- | ---------: |
| ESP32-WROOM-32 Dev Board | $4.06 |
| Capacitive Soil Moisture Sensor | $0.65 |
| AHT20 | $1.34 |
| BH1750 | $1.42 |
| OLED Display | $1.69 |
| 18650 Battery | $0.73 |
| Battery Holder | $0.17 |
| CN3065 Solar Charger | $0.88 |
| HT7333-A LDO Regulator | $0.48 |
| 470uF Capacitor | $0.18 |
| Resistors | $0.24 |
| Solar Panel | $0.98 |
| Jumper Wires | $1.39 |
| Heat Set Inserts | $0.25 |
| M3 Screws | $0.28 |
| 3D Printed Enclosure | $3.50 |
| **Total** | **$18.39** |

A complete bill of materials with supplier links is available here:

- [Bom.csv](PlantPal-main/Bom.csv)

---
# Wiring Diagram

PlantPal uses a custom wiring setup rather than a PCB. I created the schematic in KiCad before assembling the electronics to make sure every connection was planned out and easy to troubleshoot.

![Wiring Diagram](PlantPal-main/wiring/Wiring_Diagram.jpg)

The wiring includes:

- ESP32-WROOM-32
- Capacitive Soil Moisture Sensor
- AHT20 Temperature & Humidity Sensor
- BH1750 Light Sensor
- 0.96" OLED Display
- RGB LED
- CN3065 Solar Charging Circuit
- HT7333-A Voltage Regulator
- 18650 Battery and Battery Holder
- Solar Panel

The complete wiring diagram is included in this repository so the project can be recreated without guessing any connections.

---

# Building PlantPal

This project was designed so that anyone with the required parts, a 3D printer, and basic soldering experience should be able to build it by following the files in this repository.

---

## 1. Print the Enclosure

Print all enclosure parts from:

```text
PlantPal-main/cad/PRINTING PARTS
```

The enclosure was designed specifically around the electronics used in this project, so every component has its own mounting location.

After printing, install the M3 brass heat-set inserts before starting assembly.

---

## 2. Gather the Components

Use the BOM as a checklist and collect all required parts.

Main components include:

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

Before soldering everything together, it's a good idea to test each module individually.

---

## 3. Assemble the Electronics

Mount each component inside the enclosure.

The enclosure includes dedicated mounting positions for:

- ESP32
- OLED Display
- Battery Holder
- Charging Circuit
- Voltage Regulator

Once everything is in place, begin routing the wires according to the wiring diagram.

I tried to keep the wiring as neat as possible so the enclosure can still be opened later if repairs or upgrades are needed.

---

## 4. Wire the Circuit

Use the wiring diagram as the reference while soldering.

Important connections include:

- I²C connections for the OLED, AHT20, and BH1750
- Soil moisture sensor input
- RGB LED outputs
- Battery power
- Solar charging circuit
- 3.3V power distribution

After completing the wiring, double-check every connection before connecting the battery.

---

## 5. Upload the Firmware

The firmware is located in:

```text
PlantPal-main/firmware
```

Upload it using Arduino IDE or PlatformIO.

The firmware is responsible for:

- Reading all sensors
- Calculating the plant's condition
- Displaying emotions on the OLED
- Controlling the RGB LED
- Managing the update cycle

---

## 6. Final Assembly

After confirming that the electronics work correctly:

- Secure every component using the mounting points
- Route the wires through the built-in channels
- Close the enclosure
- Tighten the M3 screws

The finished assembly should match the renders shown earlier in this README.

---

## 7. Place the Device

Insert the soil moisture sensor into the soil and position the solar panel where it receives sunlight.

After a few seconds the OLED should begin showing the plant's current condition.

---

# Using PlantPal

Using PlantPal is straightforward.

1. Insert the moisture sensor into the soil.
2. Place the device beside the plant.
3. Make sure the solar panel receives sunlight during the day.
4. Turn on the device.
5. Wait a few seconds for the first sensor readings.

The OLED will display the current emotion of the plant, while the RGB LED provides a quick visual indication of its condition.

The device continues monitoring automatically, so there is nothing else the user needs to do after setup.

---
