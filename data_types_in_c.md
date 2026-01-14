# 📘 Why Do We Need Data Types in C?

Data types define **what kind of data** a variable can store and **how much memory** it will occupy.

### ✔ Why are data types important?

- To tell the compiler what kind of data is being handled
- To allocate correct memory space
- To prevent invalid operations (e.g., adding a number to a string)
- To ensure correct interpretation of bits

---

# 🧩 Types of Data Types in C

C has **two major categories** of data types:

Data Types
- Primitive (Built-in)
- Non-Primitive (User-defined)
---

## 🟦 1) Primitive Data Types

Primitive types are basic types supported directly by the language.

They are divided into two subcategories:

Primitive Data Types

- Integral (whole numbers
- Real / Floating (decimal numbers)

### **🧱 Integral Types**

| Type  | Meaning                                |
|-------|----------------------------------------|
| `char`| Character (uses ASCII internally)      |
| `int` | Whole number (signed/unsigned)         |

### 🧮 Real Types

| Type     | Meaning                  |
|----------|--------------------------|
| `float`  | Decimal (low precision)  |
| `double` | Decimal (high precision) |

---

## 🟩 2) Non-Primitive Data Types

These are user-defined or derived types:

| `struct` | `union` | `enum` | `typedef` | `array` |
|----------|---------|--------|-----------|---------|


---

# ❓ What Happens When a Variable Is Declared?

When you write:

```c
int x;
 ```
Three things happen:

Compiler allocates memory (based on data type)

Variable gets an address in RAM

Type rules apply (allowed values & operations)

---

### **🔤 char Data Type in C**
char stores a single character

✔ Why is char an “integral” type?
Because internally it stores a number (ASCII), not a letter.

📟 ASCII Example
### 🔤 Character to ASCII Mapping

| Character | ASCII |
|----------|--------|
| `A`      | 65     |
| `B`      | 66     |
| `a`      | 97     |


📏 Size of char
```c
sizeof(char) = 1 byte = 8 bits

```
📟 ASCII System (Important)
ASCII uses 7 bits

Value range: 0 to 127

Fits inside 1 byte

### ⏎ Escape Sequences in C

| Escape | Meaning  | ASCII |
|--------|----------|--------|
| `\n`   | New line | 10     |
| `\t`   | Tab      | 9      |
| `\0`   | Null     | 0      |


🧪 Example
```c
Copy code
#include <stdio.h>

int main() {
    char ch = 'A';
    printf("Character: %c\n", ch);
    printf("ASCII: %d\n", ch);
    return 0;
}
```

---

### ***🔢 Int (Integer) Data Type in C***
int stores whole numbers (no decimals).

📝 Declaration Examples
c
```c
int a;          // declaration
int b = 10;     // initialization
signed int c;   // signed integers (default)
unsigned int d; // positive only

```

**🧱 Size of int (Compiler + Architecture Dependent)**

System	Size

| System             | Size     |
|--------------------|----------|
| 16-bit systems     | 2 bytes  |
| 32/64-bit systems  | 4 bytes  |


Check using:
``` c
printf("%zu", sizeof(int));
```
### 📊 Common Integer Sizes & Ranges

| Size     | Bits | Signed Range                      | Unsigned Range        |
|----------|------|-----------------------------------|------------------------|
| 2 bytes  | 16   | −32,768 to +32,767                | 0 to 65,535            |
| 4 bytes  | 32   | −2,147,483,648 to +2,147,483,647  | 0 to 4,294,967,295     |


**🧪 Example**

``` c
#include <stdio.h>
int main() {
    signed int a = -10;
    unsigned int b = 10;
    printf("Signed: %d\n", a);
    printf("Unsigned: %u\n", b);
    return 0;
}

```
---

### **🔹 float, double & long double**
- **🧮 float**

Stores decimal numbers

Lower precision (~6–7 digits)

Size: 4 bytes
``` c
Input: scanf("%f", &x);
Output: printf("%f", x);
``` 

- **🧮 double**
   
Higher precision than float

Size: 8 bytes

Precision: ~15–16 digits
``` c
Input: scanf("%lf", &y);
Output: printf("%lf", y);
``` 

- **🧮 long double**
  
Highest precision (system dependent)

Size: 10/12/16 bytes (depends on compiler)
```c
Input: scanf("%Lf", &z);
Output: printf("%Lf", z);
``` 

📊 Comparison Table
### 📏 Float, Double & Long Double Comparison

| Type          | Size (Common) | Precision       | `scanf` | `printf` |
|---------------|---------------|-----------------|---------|----------|
| `float`       | 4 bytes       | ~6–7 digits     | `%f`    | `%f`     |
| `double`      | 8 bytes       | ~15–16 digits   | `%lf`   | `%lf`    |
| `long double` | 10–16 bytes   | higher          | `%Lf`   | `%Lf`    |
