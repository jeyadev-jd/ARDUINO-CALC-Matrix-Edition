# ⚡ ARDUINO CALC: Matrix Edition ⚡

*Von Neumann Calculator with Real-time Web Serial Interface*

---

**Arduino Calc: Matrix Edition** is a visually striking calculator built for the Computer Organization & Architecture (COA) course.  
It implements Von Neumann CPU architecture concepts on Arduino Uno and features a futuristic web-based serial interface — no Serial Monitor required!

---

## 🚀 Features

- Von Neumann Architecture Mapping (Registers, Control Unit, ALU, I/O)
- Real-time Web Serial API Interface (works in-browser)
- Matrix-Styled Animated Web UI
- Instant Result Display (keypad & keyboard input)
- Basic Arithmetic (+, −, ×, ÷) with division by zero protection
- Resource Efficient (uses only 8% flash, 9% RAM)
- Cross-platform (Windows, Linux, Android USB-OTG)

---

## 📸 Screenshots

| Calculator Interface | Connection Status |
|:-------------------:|:----------------:|
| ![Interface Preview](link-to-your-calculator-image) | ![Connection Status](link-to-your-status-image) |

---

## 🧩 Architecture Overview

| Concept      | Implementation         |
|--------------|-----------------------|
| Control Unit | `detectKey()`         |
| ALU          | `calculate()`         |
| Registers    | `Num1`, `Num2`, `Number`, `action` |
| I/O Interface| Web Serial API, HTML5 UI |

### Data Flow

> **User → Web App → Serial → Arduino:CU+ALU → Serial → Web App → User**

---

## 🛠️ How To Run

### Hardware
- Arduino Uno (ATmega328P)
- Standard USB cable (Type A/B)
- (Optional: Android device + USB-OTG)

### Software
- Arduino IDE 1.8 or higher
- Chrome or Edge browser (Web Serial API support)

### Steps
1. **Upload Sketch**
   - Open `calculator.ino` in Arduino IDE
   - Upload to the board
2. **Launch Web Calculator**
   - Open `calculator.html` in your browser
   - Click “Connect Arduino” and select your Arduino port
3. **Enjoy!**
   - Operate calculator using on-screen buttons or your keyboard
   - Watch instant results, powered by Arduino logic

---

## 📂 Folder Structure

ARDUINO-CALC-Matrix-Edition/
├─ LICENSE
├─ README.md
├─ calculator.ino # Arduino sketch (core logic)
├─ calculator.html # Web interface
└─ media/ # Images, demo screenshots

---

## 🌱 Future Improvements

- Scientific functions (sin, cos, log, sqrt)
- Physical keypad input / OLED display
- Operation history / memory functions
- Mobile app version
- Bluetooth/cloud support

---

## 📄 License

This project is licensed under the MIT License.

---

**Made by Jeyadev R | B.Tech AIDA, 2nd Year**  
“Bringing COA theory to interactive life.”

