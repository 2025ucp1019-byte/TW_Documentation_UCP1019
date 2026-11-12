
/**
 * @file main.cpp
 * @brief Main application entry point.
 *
 * @mainpage Doxygen Assignment
 *
 * @section intro Introduction
 * This project demonstrates how Doxygen can be used
 * to generate documentation for a multi-file C++ project.
 *
 * @section features Features
 * - Logging using different severity levels.
 * - Mathematical calculations.
 * - Documentation of classes and functions.
 *
 * @section usage Usage
 * Compile and execute the program to see the
 * mathematical operations and logging output.
 */

#include <iostream>
#include "Logger.h"
#include "CalculationEngine.h"

/**
 * @brief Main function of the application.
 *
 * Creates a CalculationEngine object and performs
 * different mathematical operations.
 *
 * @return 0 if the program executes successfully.
 */
int main()
{
    Logger logger("Main");
    CalculationEngine calculator;

    logger.log(INFO, "Starting application.");

    double a = 10;
    double b = 5;

    std::cout << "\nAddition: "
              << calculator.add(a, b) << std::endl;

    std::cout << "Subtraction: "
              << calculator.subtract(a, b) << std::endl;

    std::cout << "Multiplication: "
              << calculator.multiply(a, b) << std::endl;

    std::cout << "Division: "
              << calculator.divide(a, b) << std::endl;

    std::cout << "Power: "
              << calculator.power(a, b) << std::endl;

    logger.log(INFO, "Application completed.");

    return 0;
}
