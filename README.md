# MCU LAB1: LED Animation

## Introduction

I am a student of the Microcontroller course at HCMUT. In this lab, I practiced using STM32CubeIDE for embedded development and Proteus for circuit simulation. The target microcontroller used throughout the lab is the STM32F103C6. Through a series of exercises, I learned to write and debug code for the STM32 microcontroller, focusing on solving each problem with only a single `HAL_Delay(1000)` function for timing. This lab helped me become more familiar with both the development environment and simulation tools.

## Proteus Schematic Image

The schematic below is fully pre-wired and designed to support all 10 exercises in this lab. It provides the necessary connections for the STM32 microcontroller and peripheral components, allowing each exercise to be tested without modifying the circuit.
<img width="1050" height="817" alt="image" src="https://github.com/user-attachments/assets/9880892c-a01a-457e-bff9-6149acbd7874" />

<!-- Replace 'your_schematic_image.png' with the actual schematic image filename in the PROTEUS folder -->

---

## .ioc File Image (STM32CubeMX)

The pin configuration in this .ioc file is set up to support all 10 exercises in the lab. All necessary connections are defined and fully synchronized with the Proteus schematic above, ensuring consistency between the hardware simulation and the project setup.
<img width="712" height="742" alt="image" src="https://github.com/user-attachments/assets/90eeee8a-ec09-4b5d-b340-21fa6a1e8114" />

<!-- If you want to display an image, take a screenshot of the .ioc file and save it as an image, e.g., 'ioc_screenshot.png', then insert like this: -->
<!-- ![.ioc File](ioc_screenshot.png) -->

---

## Lab 1 Ideas & Conclusion
This lab centers on building foundational familiarity with STM32 GPIO and timing by creating a sequence of LED animation patterns. I configured multiple MCU pins as push-pull digital outputs and then orchestrated different visual behaviors (single blink, shifting, chasing, symmetrical patterns, accumulation, etc.) using only a fixed timing primitive: a single HAL_Delay(1000) call as the base time unit. By deliberately avoiding more advanced peripherals (timers, interrupts, RTOS) and sticking to blocking delay logic, I reinforced core concepts: clock initialization from CubeMX, GPIO mode selection (output, speed, pull configuration), and structured function organization per exercise. Each exercise incrementally reuses the same hardware abstraction while varying only the bit manipulation logic that writes to the port. The constraint of a constant 1-second delay encouraged clean state progression between steps instead of ad‑hoc timing tweaks. Overall, the lab helped me internalize how low-level pin control maps to higher-level visual behavior, strengthened my confidence in using STM32CubeIDE + Proteus together, and set a solid base for later migration to timer interrupts and non-blocking designs. 
<!-- Summarize the main idea of each exercise (ex1 to ex10), briefly explain the function, algorithm, and general conclusion about the lab. -->

---

## src/ folder structure
## Source Folder Structure

The main code for each exercise is organized in the `Core/Src/` directory as follows:
```
Core/
│
├── Src/                    # Main embedded source code
│   ├── ex1.c               # Exercise 1 implementation
│   ├── ex2.c               # Exercise 2 implementation
│   ├── ex3.c               # Exercise 3 implementation
│   ├── ex4.c               # Exercise 4 implementation
│   ├── ex5.c               # Exercise 5 implementation
│   ├── ex6.c               # Exercise 6 implementation
│   ├── ex7.c               # Exercise 7 implementation
│   ├── ex8.c               # Exercise 8 implementation
│   ├── ex9.c               # Exercise 9 implementation
│   ├── ex10.c              # Exercise 10 implementation
│   ├── main.c              # Entry point, macro to select exercise
│   ├── stm32f1xx_hal_msp.c # HAL MSP init
│   ├── stm32f1xx_it.c      # Interrupt handlers
│   ├── syscalls.c          # System call stubs
│   ├── sysmem.c            # System memory allocation
│   └── system_stm32f1xx.c  # System clock/config
│
├── Inc/                    # Header files for each exercise and main
│   ├── ex1.h
│   ├── ex2.h
│   ├── ex3.h
│   ├── ex4.h
│   ├── ex5.h
│   ├── ex6.h
│   ├── ex7.h
│   ├── ex8.h
│   ├── ex9.h
│   ├── ex10.h
│   ├── main.h
│   ├── stm32f1xx_hal_conf.h
│   └── stm32f1xx_it.h
│
└── Startup/
    └── startup_stm32f103c6ux.s   # Startup assembly code
```

**Explanation:**

- Each exercise is implemented in its own `.c` file (e.g., `ex1.c`, `ex2.c`, ...), with a corresponding header file in `Inc/` (e.g., `ex1.h`, `ex2.h`, ...). This makes it easy for instructors to review and grade each solution separately.
- Although the macro in `main.c` selects which exercise to run (by calling the corresponding function inside the main `while(1)` loop), each exercise file also contains its own `while(1)` loop to handle the logic for that specific problem. The program flow is: enter the main `while(1)` loop, call the selected exercise function, and then stay in that function’s `while(1)` loop until the program ends.
- Some files are included and connected as needed, but all exercises are ultimately linked through `main.c`.
- The use of macros in `main.c` allows for easy switching between exercises for demonstration and clarity during class presentations.
<!-- Add contact information, references, or further documentation if needed -->

---
## How to Build & Run Each Exercise

- Each exercise (ex1 to ex10) is selected via a macro in the `main.c` file.
- To run the desired exercise:
  1. Open the file `Core/Src/main.c`.
  2. Several `#define` lines are already provided for each exercise. Simply **uncomment** the line for the exercise you want to demo, and make sure all other exercise defines are commented out.
     ```c
     // #define EXERCISE_1
     // #define EXERCISE_2
     #define EXERCISE_3   // ← Uncomment this line to run exercise 3
     // #define EXERCISE_4
     // ...
     ```
  3. After building, update the path to the generated `.hex` file in your Proteus simulation to match the new build output.
  4. Rebuild the project and flash it to the board or load the `.hex` file into Proteus.
  5. **Note:** Since the code uses `HAL_Delay` and some pins/LEDs are shared for demo purposes, only run one exercise at a time (i.e., only one `#define` should be active before building) to ensure correct operation.

<!-- You can add more specific build instructions for your environment (STM32CubeIDE, makefile, etc.) -->

---


