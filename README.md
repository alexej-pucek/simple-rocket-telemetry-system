# Rocket Telemetry and Control System

A modular C++ console application simulating a pre-flight verification and launch sequence for a suborbital launch vehicle. This project serves as a practical implementation of fundamental C++ concepts, focused on structural efficiency, compile-time safety, and function overloading.

## Features

* Security Verification: A PIN-based access control system featuring managed input validation and limited retry attempts.
* Sequence Automation: A robust countdown loop executing pre-flight time management.
* Telemetry Processing (Function Overloading): 
    * Energy Evaluation: Calculates spacecraft kinetic energy based on mass and velocity vectors ($E_k = \frac{1}{2}mv^2$).
    * Structural Load Analysis: Processes real-time acceleration data into G-force metrics, triggering systemic evacuation protocols if structural limits ($> 4.0\text{ G}$) are exceeded.

## Core Concepts Implemented

* Function Overloading: Utilizing compile-time polymorphism to define identical function identifiers with distinct signature parameters.
* Memory Optimization: Implementation of C++17 `std::string_view` for high-efficiency string referencing, avoiding dynamic memory allocation overhead.
* Compile-Time Constants: Utilization of `constexpr` for immutable configuration limits and system states to maintain data integrity.
* Project Architecture: Separation of interface declarations from execution logic using modern header guards (`#pragma once`).

## Directory Structure

* main.cpp - Core runtime logic and application execution flow.
* rocket.cpp - Low-level implementation of validation routines and mathematical calculations.
* rocket.h - Architectural declarations, interface prototypes, and global constants.
