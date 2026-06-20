# 🧠 PLANTPAL NODE CONNECTIONS

### ESP32-C3 DEV BOARD
* **3.3V Pin** <- **HT7333-A VOUT** (Direct low-power supply)
* **GND** <- Common GND
* **470µF Capacitor (+)** -> Solder directly to ESP32 **3.3V Pin**
* **470µF Capacitor (-)** -> Solder directly to ESP32 **GND Pin**

---

### SOIL MOISTURE SENSOR (Power-Gated)
* **VCC** -> **IO2** (ESP32 pin controls power ON/OFF)
* **GND** -> GND
* **DO** -> Not Connected
* **AO** -> **IO0**

---

### LIGHT INTENSITY SENSOR (LDR)
* **Top Pin** -> **3.3V Pin**
* **Bottom Pin** -> **IO1**
* **IO1** -> 10kΩ Resistor -> GND

---

### DHT11 TEMPERATURE + HUMIDITY SENSOR (Power-Gated)
* **1(VDD)** -> **IO3** (ESP32 pin controls power ON/OFF)
* **2(DATA)** -> **IO4**
* **4(GND)** -> GND
* **DATA** -> 10kΩ Resistor -> **IO3** (Pull-up connects to gated power)

---

### RGB LED
* **1(GND)** -> GND
* **2(RED)** -> 220Ω Resistor -> **IO5**
* **3(GREEN)** -> 220Ω Resistor -> **IO6**
* **4(BLUE)** -> 220Ω Resistor -> **IO7**

---

### 0.96" OLED DISPLAY (Power-Gated)
* **1(GND)** -> GND
* **2(VCC)** -> **IO10** (ESP32 pin controls power ON/OFF)
* **3(SCL)** -> **IO8**
* **4(SDA)** -> **IO9**

---

### SOLAR PANEL
* **+VE** -> **CN3065 VIN**
* **-VE** -> **CN3065 GND**

---

### SOLAR CHARGING MODULE (CN3065)
* **TEMP** -> GND
* **ISET** -> 2kΩ Resistor -> GND
* **GND** -> GND
* **VIN** -> Solar Panel +
* **BAT** -> Battery +
* **FB** -> BAT
* **VIN** -> 10µF Capacitor -> GND
* **BAT** -> 10µF Capacitor -> GND
* **VIN** -> 1kΩ Resistor -> LED -> DONE
* **VIN** -> 1kΩ Resistor -> LED -> CHRG

---

### TP4056 BATTERY CHARGING MODULE (USB-C Backup)
* **TEMP** -> GND
* **PROG** -> 1kΩ Resistor -> GND
* **GND** -> GND
* **VCC** -> USB-C 5V
* **BAT** -> Battery +
* **CE** -> VCC
* **EPAD** -> GND Copper Plane
* **VCC** -> 1kΩ Resistor -> LED -> STDBY
* **VCC** -> 1kΩ Resistor -> LED -> CHRG

---

### 18650 BATTERY
* **+VE** -> TP4056 BAT+ / CN3065 BAT+ / **HT7333-A VIN**
* **-VE** -> GND

---

### HT7333-A LDO REGULATOR 
* **Pin 1 (GND)** -> Common GND
* **Pin 2 (VIN)** -> **Battery +**
* **Pin 3 (VOUT)** -> **ESP32 Dev Board 3.3V Pin**

---

### 🔌 COMMON GROUND
ALL GND CONNECTIONS MUST BE CONNECTED TOGETHER:
* ESP32
* TP4056
* Battery (-)
* OLED
* RGB LED
* DHT11
* LDR (via 10kΩ Resistor)
* Moisture Sensor
* Solar Charging Module
* HT7333-A (Pin 1)
* 470µF Buffer Capacitor (-)
