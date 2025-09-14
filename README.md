# MCU LAB1: LED Animation

## Introduction

I am a student of the Microcontroller course at HCMUT. In this lab, I practiced using STM32CubeIDE for embedded development and Proteus for circuit simulation. Through a series of exercises, I learned to write and debug code for the STM32 microcontroller, focusing on solving each problem with only a single `HAL_Delay(1000)` function for timing. This lab helped me become more familiar with both the development environment and simulation tools.

## Proteus Schematic Image

The schematic below is fully pre-wired and designed to support all 10 exercises in this lab. It provides the necessary connections for the STM32 microcontroller and peripheral components, allowing each exercise to be tested without modifying the circuit.
<img width="1050" height="817" alt="image" src="https://github.com/user-attachments/assets/9880892c-a01a-457e-bff9-6149acbd7874" />

<!-- Replace 'your_schematic_image.png' with the actual schematic image filename in the PROTEUS folder -->

---

## .ioc File Image (STM32CubeMX)

The pin configuration in this .ioc file is set up to support all 10 exercises in the lab. All necessary connections are defined and fully synchronized with the Proteus schematic above, ensuring consistency between the hardware simulation and the project setup.

<!-- If you want to display an image, take a screenshot of the .ioc file and save it as an image, e.g., 'ioc_screenshot.png', then insert like this: -->
<!-- ![.ioc File](ioc_screenshot.png) -->

---

## Exercise Ideas & Conclusion
<!-- Summarize the main idea of each exercise (ex1 to ex10), briefly explain the function, algorithm, and general conclusion about the lab. -->

---

## How to Build & Run Each Exercise (using macro)
- Each exercise (ex1 to ex10) is selected via a macro in the `main.c` file.
- To run the desired exercise:
  1. Open the file `Core/Src/main.c`.
  2. Find the macro line that defines the exercise number, for example:
     ```c
     #define EXERCISE 1 // Select exercise 1
     ```
  3. Change the number (1-10) to match the exercise you want to run.
  4. Rebuild the project and flash it to the board/simulator.

<!-- You can add more specific build instructions for your environment (STM32CubeIDE, makefile, etc.) -->

---

## Contact & More Information
<!-- Add contact information, references, or further documentation if needed -->
