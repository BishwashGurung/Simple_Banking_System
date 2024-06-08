# Banking System Project

This is a simplified banking system project implemented in C++ to demonstrate the use of object-oriented programming concepts such as classes, inheritance, polymorphism, and encapsulation.

## Project Structure

The project is organized into the following directories:

- **include/**: Contains the header files with class declarations.
- **src/**: Contains the source files with class definitions.
- **main/**: Contains the main.cpp file that drives the program.
- **Makefile**: Build instructions for the project.
- **README.md**: Project documentation.

## Classes
- **BankAccount**: The base class representing a general bank account.
- **SavingsAccount**: A derived class representing a savings account with an interest rate.
- **CheckingAccount**: A derived class representing a checking account with an overdraft limit.

## How to Build and Run

### Prerequisites
- A C++ compiler (e.g., g++)
- Make utility

### Building the Project
1. Clone the repository or download the project files.
2. Navigate to the project directory in your terminal.
3. Run `make` to build the project.
```bash
make
```

### Running the Project
After building the project, run the executable:
```bash
./BankingSystem
```

### Cleaning Up
To remove the build files, run:
```bash
make clean
```

