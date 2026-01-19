# 🖥️ `scanf()` and `printf()` in C

## ✅ 1. What are `scanf()` and `printf()`?

`scanf()` and `printf()` are **standard input/output functions** in C.

- `scanf()` → **input** (takes data from keyboard)
- `printf()` → **output** (prints data to screen)

Both are declared in the header file:

```c
#include <stdio.h>
```
### **📥 2. scanf() :- Input Function**

- Used to read values from the keyboard.

Example:
```c
int a;
scanf("%d", &a);
```
This reads an integer typed by the user.

### **📤 3. printf():-Output Function**

- Used to display values on the screen.

Example:
```c
int a = 10;
printf("%d", a);
```
Output:
`10`

---

### 🏷️ Format Specifiers for Different Data Types

| Data Type      | Meaning          | `scanf()` | `printf()` |
|----------------|------------------|-----------|------------|
| `int`          | integer          | `%d`      | `%d`       |
| `char`         | single character | `%c`      | `%c`       |
| `float`        | decimal number   | `%f`      | `%f`       |
| `double`       | double precision | `%lf`     | `%lf`      |
| `long int`     | bigger integer   | `%ld`     | `%ld`      |
| `unsigned int` | positive integer | `%u`      | `%u`       |
| `char[]`       | string (text)    | `%s`      | `%s`       |

Example:
```c
int age;
char ch;
float marks;

scanf("%d %c %f", &age, &ch, &marks);
printf("%d %c %f", age, ch, marks);
```

### **⚙️ 5. Are these input/output methods?**

✔ Yes, in standard C on PC/laptop systems:

`scanf()` = Input method

`printf()` = Output method

### **🧩 6. Use in Embedded Systems**

- **In embedded systems:**

❌ No keyboard  
❌ No monitor  
❌ No operating system  

- So normal scanf() and printf() are not commonly used.

## **Instead, I/O happens via:**

- UART (serial communication)  
- GPIO  
- ADC  
- I2C / SPI  
- Timers  
- LCD / OLED displays  
- Sensors & actuators  

#### **Therefore:**

`scanf()` → ❌ Not used in embedded

`printf()` → ✔ Sometimes used via UART for debugging

### **📝 Example: Using printf() over UART (Embedded)**

On STM32 / AVR / ESP32, developers redirect printf() to UART.

- Serial Terminal Output example:
```
Temperature = 30°C
Speed = 100 RPM
Sensor OK
```

- Used for debug logs.

### **📝 Example: Inputs in Embedded (Without scanf)**

Instead of keyboard:  
- Buttons → GPIO  
- ensors → ADC / I2C / SPI  
- PC/Bluetooth/WiFi → UART  

Example logic:

- If button == pressed → LED ON  
- If sensor > threshold → Motor OFF  

- No keyboard needed.

## **🧠 7. Why not use scanf() in embedded?**

### **Because:**

❌ No keyboard  
❌ No console  
❌ No OS  
❌ Text parsing is expensive  
❌ scanf() consumes more memory and CPU

### **Embedded systems focus on:**

✔ Small memory usage  
✔ Fast execution  
✔ Hardware-level control  

- So developers read values directly from registers — not from keyboard input.

