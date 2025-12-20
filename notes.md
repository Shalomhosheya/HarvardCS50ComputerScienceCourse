########################Notes to CS50###########################################

preprocessing - packages,functions scanning
compiling - comiples human lan to assembly(which are instrustions)
assembling - assembly to machine code (0-1)
linking - linking all the machine code together to build a program

# 🧠 CS50 Notes – How a Program Is Built

---

## 🔹 Overview

When you run a C program (or most compiled languages), your code goes through **four important stages** before becoming an executable program.

```
Source Code → Preprocessing → Compiling → Assembling → Linking → Program
```

---

## 1️⃣ Preprocessing

📌 **What happens here?**

* Handles **header files**, **macros**, and **definitions**
* Scans your code before actual compilation

📦 Examples:

* `#include <cs50.h>`
* `#include <stdio.h>`
* `#define PI 3.14`

🧠 **Result:**

* A modified C file with all includes expanded

---

## 2️⃣ Compiling

📌 **What happens here?**

* Converts **human‑readable C code** into **assembly language**
* Checks for **syntax errors**

🧠 Assembly = low‑level instructions close to hardware

⚠️ Errors here are usually **syntax errors**

---

## 3️⃣ Assembling

📌 **What happens here?**

* Converts **assembly code** into **machine code**
* Machine code is made of **0s and 1s**

🧠 **Result:**

* Object files (`.o` files)

---

## 4️⃣ Linking

📌 **What happens here?**

* Links all object files together
* Adds code from **libraries** you used

📦 Example:

* Functions like `printf()` or `get_string()` are linked here

🧠 **Final Result:**

* One complete **executable program** 🎉

---

## 🧩 Simple Memory Trick

🅿️ **Preprocessing** → 📘 Prepare code
🅲 **Compiling** → 🧾 C → Assembly
🅰️ **Assembling** → 🤖 Assembly → Machine Code
🅻 **Linking** → 🔗 Build final program

---

## ✅ Key Takeaway

> Your code does **not** directly become a program. It passes through **multiple transformation steps** to communicate with the computer hardware.

---




## 🔹 Debugger
   * debug50 ./filename
   ---
   #⏯️ continue - run code
   ---
   #🔂 step over - excute code phase line when click
   ---
   #⬆️ step into - excute line when click
   ---
   #⬇️ step out - excute previous line when click
   ---