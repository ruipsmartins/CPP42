# Gemini Project Context: C++ Module 06 - C++ Casts

## Project Overview

This project is **C++ Module 06** from the 42 school curriculum. The primary learning objective is to understand and correctly use the different C++ type casting operators: `static_cast`, `dynamic_cast`, `reinterpret_cast`, and `const_cast`.

The project is divided into three exercises:
*   **ex00: Conversion of scalar types:** Convert a string literal into `char`, `int`, `float`, and `double` using the appropriate casts.
*   **ex01: Serialization:** Convert a pointer to an integer and back using `reinterpret_cast`.
*   **ex02: Identify real type:** Use `dynamic_cast` to determine the underlying type of an object in a class hierarchy.

The project must be compiled using C++98 standards.

## Building and Running

This is a C++ project using `make` for compilation. Each exercise is in its own directory (e.g., `ex00`, `ex01`).

To build and run an exercise (e.g., `ex00`):

```bash
# Navigate to the exercise directory
cd ex00

# Build the project
make

# Run the executable
# Note: The executable requires a command-line argument as per the subject PDF.
./ex00 <argument>

# Example from the PDF for ex00:
# ./ex00 0
# ./ex00 nan
# ./ex00 42.0f
```

### Makefile Commands

Common commands are available in each exercise's `Makefile`:

*   `make all`: Compiles the project (default).
*   `make clean`: Removes intermediate object files.
*   `make fclean`: Removes all build artifacts, including the final executable.
*   `make re`: Forces a full rebuild of the project.

## Development Conventions

*   **Language Standard:** C++98.
*   **Compiler Flags:** `-Wall -Wextra -Werror`.
*   **Class Naming:** `UpperCamelCase` (e.g., `ScalarConverter`).
*   **File Naming:** Class implementation files should match the class name (e.g., `ScalarConverter.hpp`, `ScalarConverter.cpp`).
*   **Headers:** Header guards must be used to prevent double inclusion.
*   **Forbidden Libraries/Features:**
    *   External libraries (like Boost) are not allowed.
    *   C++11 features (and later) are forbidden.
    *   Functions like `*printf()`, `*alloc()`, and `free()` are forbidden.
    *   STL Containers (`vector`, `map`, etc.) and Algorithms are not allowed in this module.
*   **Class Design:** Classes must generally follow the Orthodox Canonical Form unless specified otherwise.
