
/**
 * @file Logger.h
 * @brief Contains the Logger class and logging levels.
 *
 * This file defines a simple logging system that can
 * display messages with different severity levels.
 */

#ifndef LOGGER_H
#define LOGGER_H

#include <iostream>
#include <string>
using namespace std ;

/**
 * @enum LogLevel
 * @brief Defines the available logging levels.
 *
 * The logging level determines the importance
 * and severity of a log message.
 */
enum LogLevel
{
    DEBUG,    /**< Detailed debugging information. */
    INFO,     /**< General information messages. */
    WARNING,  /**< Messages indicating potential problems. */
    ERROR     /**< Messages indicating errors. */
};

/**
 * @brief Provides logging functionality.
 *
 * The Logger class displays messages with their
 * corresponding logging levels.
 */
class Logger
{
private:
    string loggerName;

public:

    /**
     * @brief Constructs a Logger object.
     *
     * @param name Name assigned to the logger.
     */
    Logger(const string& name)
    {
        loggerName = name;
    }

    /**
     * @brief Displays a log message.
     *
     * @param level Severity level of the message.
     * @param message Message to be displayed.
     */
    void log(LogLevel level, const string& message)
    {
        string levelName;

        switch (level)
        {
            case DEBUG:
                levelName = "DEBUG";
                break;

            case INFO:
                levelName = "INFO";
                break;

            case WARNING:
                levelName = "WARNING";
                break;

            case ERROR:
                levelName = "ERROR";
                break;

            default:
                levelName = "UNKNOWN";
        }

        cout << "[" << levelName << "] "
                  << loggerName << ": "
                  << message << endl;
    }
};

#endif
