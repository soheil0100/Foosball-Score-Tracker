## ⚽ Foosball Score Tracker with Arduino Mega 2560

This project is a digital **Foosball scoring system** built using an **Arduino Mega 2560**. It uses **IR sensors** to detect goals, **7-segment displays** to show player scores, and a **start button** to begin the game. The system updates scores automatically and displays them in real-time using **7448** and **ULN2803** driver ICs.

---

### 📌 Features

* Start button to initialize the game
* Automatic goal detection using **IR sensors** in each goal
* Real-time score display for both players on **7-segment displays**
* Driver ICs used: **7448** (BCD to 7-segment) and **ULN2803** (current driver)
* Code written in **C++** using the Arduino framework

---

### ⚙️ Hardware Components

* Arduino Mega 2560
* 2x IR Sensors (one per goal)
* 2x 7-Segment Displays
* 7448 BCD to 7-Segment Decoder IC
* ULN2803 Driver IC
* Push Button (Start Game)
* Resistors, wires, breadboard or PCB
* Optional: Enclosure for a finished product look

---

### 🧠 How It Works

1. The game starts when the **Start** button is pressed.
2. Each time a player scores (i.e., the ball enters the goal), the respective **IR sensor** detects the ball.
3. The system adds 1 point to the **opponent's score**.
4. The updated scores are shown on the 7-segment displays in real-time.

---

### 🛠️ Software Details

* Written in **Arduino C++**
* Uses digital input pins for IR sensor readings
* Controls 7-segment displays via **7448** and **ULN2803** ICs
* Debouncing logic for the start button (if needed)

---

### 📁 Project Structure

```
Foosball-Score-Tracker/
│
├── code/
│   └── foosball_score.ino         ← Arduino code
│
├── README.md
└── ...
```

---

### ✅ How to Run

1. Open `foosball_score.ino` in Arduino IDE
2. Upload the code to your **Arduino Mega 2560**
3. Connect the hardware components as per your circuit
4. Press the **Start** button to begin
5. Each goal will automatically be detected and scored!

---

### 📜 License

This project is licensed under the **MIT License** — feel free to use, modify, and share. Please retain credit to the original author.

---

### 🤝 Contributions

Pull requests, suggestions, or feature ideas (like sound effects, LCD integration, wireless scoreboard, etc.) are always welcome.

---
