# Doxygen Documentation

## 1. Introduction

Doxygen is an open-source documentation generation tool used for documenting programming projects. It is commonly used with programming languages such as C, C++, Java, and Python.

Doxygen extracts specially formatted comments from source code and automatically generates documentation in formats such as HTML and LaTeX.

## 2. Objectives

The main objectives of this practical were:

- To understand the purpose of Doxygen.
- To learn how to write documentation comments in C++.
- To document classes, functions, parameters, and return values.
- To understand Doxygen commands and tags.
- To configure Doxygen using a Doxyfile.
- To generate HTML documentation.
- To document a multi-file C++ project.

## 3. Introduction to Doxygen

Doxygen reads source code containing specially formatted comments and converts them into structured documentation.

Some important features include:

- Automatic documentation generation.
- Class and function documentation.
- File and project documentation.
- HTML and LaTeX output generation.
- Source code browsing.
- Navigation between classes, files, and functions.


## 4. Doxygen Documentation Commands

Doxygen provides special commands that are used inside documentation comments.

| Command | Purpose |
|---|---|
| `@file` | Documents a source file |
| `@brief` | Provides a short description |
| `@class` | Documents a class |
| `@param` | Describes a function parameter |
| `@return` | Describes the return value |
| `@details` | Provides detailed information |
| `@todo` | Adds a task or pending improvement |
| `@enum` | Documents an enumeration |
| `@mainpage` | Creates the main documentation page |

These commands help organize source code documentation in a readable format.

## 5. Writing Documentation Comments

Doxygen supports special comment formats.

Example:

```cpp
/**
 * @brief Adds two numbers.
 *
 * @param a First number.
 * @param b Second number.
 * @return Sum of the two numbers.
 */
double add(double a, double b)
{
    return a + b;
}
```

Here:

- `@brief` describes the function.
- `@param` explains the input parameters.
- `@return` explains the returned result.

## 6. Practical Assignment: Multi-file C++ Project

The practical assignment involved generating documentation for a C++ project containing two main classes.

### 6.1 Logger Class

The `Logger` class provides logging functionality.

It supports four logging levels:

- DEBUG
- INFO
- WARNING
- ERROR

The class contains:

- A constructor that accepts the logger name.
- A `log()` function that displays messages with their corresponding severity levels.

### 6.2 CalculationEngine Class

The `CalculationEngine` class performs mathematical calculations and uses the Logger class to display operation messages.

It supports the following operations:

- Addition
- Subtraction
- Multiplication
- Division
- Power calculation

The division function also handles division by zero by logging an error and throwing an `invalid_argument` exception.

## 7. Project File Structure

The project contains the following files:

```text
Doxygen_Assignment/
│
├── Logger.h
├── CalculationEngine.h
├── main.cpp
├── Doxyfile
│
├── html/
│   └── index.html
│
└── latex/
```

### Description of Files

| File | Description |
|---|---|
| Logger.h | Contains the Logger class and logging levels |
| CalculationEngine.h | Contains mathematical operations |
| main.cpp | Contains the main program |
| Doxyfile | Configuration file for Doxygen |
| html/ | Contains generated HTML documentation |
| latex/ | Contains generated LaTeX documentation |

## 8. Doxyfile Configuration

A Doxyfile is a configuration file that controls how Doxygen generates documentation.

Some important configuration settings used in the practical assignment are:

```text
PROJECT_NAME = "Doxygen Assignment"
PROJECT_NUMBER = 1.0

INPUT = Logger.h \
        CalculationEngine.h \
        main.cpp

FILE_PATTERNS = *.h *.cpp

EXTRACT_ALL = YES
EXTRACT_PRIVATE = YES

GENERATE_HTML = YES
HTML_OUTPUT = html

GENERATE_LATEX = YES
LATEX_OUTPUT = latex

SOURCE_BROWSER = YES
INLINE_SOURCES = YES
```

These settings specify the project name, input files, documentation extraction options, and output formats.

## 9. Generating Documentation

The following steps were performed to generate the documentation:

1. Created the C++ source files.
2. Added Doxygen documentation comments.
3. Created and configured the Doxyfile.
4. Specified the input source files.
5. Enabled HTML documentation generation.
6. Executed Doxygen using the configuration file.
7. Opened the generated HTML documentation in a web browser.

Command used:

```bash
doxygen Doxyfile
```

After successful execution, Doxygen generated the documentation inside the configured output directories.

## 10. Generated HTML Documentation

Doxygen generated an HTML documentation website for the project.

The generated documentation contains:

- Main Page
- Introduction
- Features
- Usage
- Class documentation
- File documentation
- Source code references

The HTML documentation can be opened by navigating to:

```text
html/index.html
```

This allows users to explore the project through a web browser.

## 11. Advantages of Doxygen

- Automatically generates documentation from source code.
- Makes large software projects easier to understand.
- Supports multiple programming languages.
- Generates HTML and LaTeX documentation.

## 12. Conclusion

Doxygen is an effective tool for generating technical documentation from source code.

Through this practical assignment, I learned how to write structured documentation comments, use Doxygen commands, configure a Doxyfile, and generate HTML documentation for a multi-file C++ project.

---

