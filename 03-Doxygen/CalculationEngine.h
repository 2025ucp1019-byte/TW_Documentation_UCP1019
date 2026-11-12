
/**
 * @file CalculationEngine.h
 * @brief Contains the CalculationEngine class.
 */

#ifndef CALCULATION_ENGINE_H
#define CALCULATION_ENGINE_H

#include "Logger.h"
#include <cmath>
#include <stdexcept>

/**
 * @class CalculationEngine
 * @brief Performs mathematical calculations.
 *
 * @details
 * This class provides basic mathematical operations
 * such as addition, subtraction, multiplication,
 * division and power calculation.
 *
 * It also uses the Logger class to display
 * information about calculation operations.
 */
class CalculationEngine
{
private:
    Logger logger;

public:

    /**
     * @brief Constructs a CalculationEngine object.
     */
    CalculationEngine()
        : logger("CalculationEngine")
    {
        logger.log(INFO, "Calculation Engine initialized.");
    }

    /**
     * @brief Adds two numbers.
     *
     * @param a First number.
     * @param b Second number.
     * @return Sum of the two numbers.
     */
    double add(double a, double b)
    {
        logger.log(INFO, "Addition performed.");
        return a + b;
    }

    /**
     * @brief Subtracts two numbers.
     *
     * @param a First number.
     * @param b Second number.
     * @return Difference between the two numbers.
     */
    double subtract(double a, double b)
    {
        logger.log(INFO, "Subtraction performed.");
        return a - b;
    }

    /**
     * @brief Multiplies two numbers.
     *
     * @param a First number.
     * @param b Second number.
     * @return Product of the two numbers.
     */
    double multiply(double a, double b)
    {
        logger.log(INFO, "Multiplication performed.");
        return a * b;
    }

    /**
     * @brief Divides two numbers.
     *
     * @param a Dividend.
     * @param b Divisor.
     * @return Quotient of the division.
     */
    double divide(double a, double b)
    {
        if (b == 0)
        {
            logger.log(ERROR, "Division by zero attempted.");
            throw std::invalid_argument("Division by zero");
        }

        logger.log(INFO, "Division performed.");
        return a / b;
    }

    /**
     * @brief Calculates the power of a number.
     *
     * @param base The base number.
     * @param exponent The exponent value.
     * @return Result of raising base to exponent.
     *
     * @todo Add support for additional mathematical operations.
     */
    double power(double base, double exponent)
    {
        logger.log(INFO, "Power calculation performed.");
        return std::pow(base, exponent);
    }
};

#endif
