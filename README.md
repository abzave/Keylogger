# Keylogger in C++ (Windows API)

This project is a simple keylogger developed in C++ to learn the basics of the Windows C++ library (WinAPI). The goal of the project is to understand how to use Windows-specific APIs for low-level system interaction and event handling.

## Table of Contents
1. [Project Overview](#project-overview)
2. [Features](#features)
3. [Requirements](#requirements)
4. [How to Compile and Run](#how-to-compile-and-run)
5. [Usage](#usage)

## Project Overview

This keylogger project hooks into the Windows system to capture keystrokes and logs them to a local file. The application uses Windows APIs such as `GetAsyncKeyState`, and other low-level functions to intercept and record keyboard events.

## Features

- **Key Logging**: Records key presses and stores them in a log file.
- **Minimal User Interface**: Runs silently in the background without user interaction.
- **Uses WinAPI**: Leverages the Windows API for system-level access.

## Requirements

- **C++ Compiler**: A C++ compiler supporting the C++11 standard or higher (e.g., MSVC or MinGW).
- **Windows OS**: This project is intended to run on a Windows platform due to its reliance on Windows-specific APIs.
- **Libraries**: The project uses standard Windows libraries like windows.h and winsock.h.

## How to Compile and Run

An already compiled version of the program is present in the repository. If you need to compile a new version of the project you can follow the next steps:

### Step 1: Clone the repository

``` bash
git clone https://github.com/abzave/Keylogger.git
cd Keylogger
```

### Step 2: Compile the project

If you are using **Visual Studio**, you can open a new `.sln` file in Visual Studio and build the project.
Alternatively, for **MinGW**, you can compile the source file using:

``` bash
g++ -o keylogger Keylogger.cpp -luser32 -lgdi32
```

### Step 3: Run the program

Once compiled, run the keylogger executable. It will run silently in the background and log keystrokes to a file in the same directory as the executable.

## Usage

The keylogger runs in the background and logs key presses to a file (`log.txt`). To stop the keylogger, you can terminate the process manually through Task Manager or other process management tools.
