# 🚀 C Programming Collection

A comprehensive collection of C programs for learning and reference. This repository contains various C programs designed to help beginners understand programming concepts and serve as a reference for more experienced programmers.

## 📋 Table of Contents

- [Overview](#overview)
- [Key Features](#key-features)
- [Program Categories](#program-categories)
- [Premium Features](#premium-features)
- [Getting Started](#getting-started)
- [Usage Examples](#usage-examples)
- [File Organization](#file-organization)
- [Contributing](#contributing)
- [License](#license)

## 🔍 Overview

This collection contains various C programs that demonstrate fundamental programming concepts, algorithms, data structures, and practical applications. The programs are well-commented and structured for easy understanding and learning.

## ✨ Key Features

- **Basic to Advanced Programs**: From simple "Hello World" to complex data structures
- **Interactive Programs**: User input-based calculations and operations
- **Pattern Printing**: Various pattern printing programs using loops
- **Mathematical Functions**: Factorial, sum of digits, and other mathematical operations
- **Data Structure Implementation**: Basic implementations of structures and memory allocation
- **Character Manipulation**: Case conversion and ASCII operations
- **Custom Functions**: Reusable functions for common operations

## 📚 Program Categories

### 1. Mathematical Operations
- **Calculator Programs**: Basic arithmetic operations with switch cases
- **Factorials**: Calculate factorial of a number
- **Sum of Digits**: Calculate sum of digits in a number using recursion
- **Natural Number Sums**: Calculate sum of natural numbers in a range

### 2. Pattern Printing
- **Alphabet Patterns**: Print patterns in the shape of alphabets
- **Star Patterns**: Various star pattern printing programs
- **Number Patterns**: Patterns made with numbers

### 3. Control Structures
- **Day of Week**: Determine day of the week using switch case
- **Even/Odd Checker**: Identify and sum odd numbers in a range
- **Divisibility Checker**: Find numbers divisible by specific values

### 4. Data Structures
- **Structure Implementation**: Student record management using structures
- **Dynamic Memory Allocation**: Memory allocation using malloc

### 5. Array Operations
- **Array Maximum**: Find maximum element in an array

## 💎 Premium Features

### Advanced Algorithm Implementations
Access to optimized implementations of common algorithms with detailed explanations.

### Interactive Learning Mode
Each program can be run in an interactive learning mode with step-by-step explanations.

### Code Optimization Techniques
Learn how to optimize your C code for better performance with our premium examples.

### Custom Problem Solver
Input your programming problem, and get guidance on how to solve it using C.

### Expert Support
Premium access includes one-on-one support for resolving programming challenges.

## 🚀 Getting Started

### Prerequisites
- GCC Compiler or any C compiler
- Basic understanding of programming concepts

### Compilation and Execution
```bash
# Compile a program
gcc program_name.c -o program_name

# Run the program
./program_name
```

## 📝 Usage Examples

### Calculator Program
```c
#include <stdio.h>
int main(){
    int a,b,n;
    int sum,sub,mul,mod;
    float div;

    printf("enter first integer");
    scanf("%d",&a);
    printf("enter second integer");
    scanf("%d",&b);
    printf("enter a number for operation (1-5)");
    scanf("%d",&n);

    switch(n){
        case 1: sum=a+b;
                printf("addition is %d",sum);
                break;
        case 2: sub=a-b;
                printf("subtraction is %d",sub);
                break;
        // ... other operations
    }
    return 0;
}
```

### Pattern Printing
```c
#include <stdio.h>
int main(){
    int i, j, k;
    for(i = 1; i <= 5; i++) {
        for(j = 5; j > i; j--) {
           printf(" ");
        }
        for(k = 1; k <= i; k++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
```

## 📁 File Organization

The C files in this collection are organized using a standardized naming convention to make it easier to find and understand each program's purpose:

### Mathematical Operations
- **calculator_functions.c**: Multi-operation calculator using functions
- **basic_calculator.c**: Simple calculator with arithmetic operations
- **factorial_do_while.c**: Factorial calculation using do-while loop
- **factorial_for_loop.c**: Factorial calculation using for loop
- **recursive_digit_sum.c**: Sum of digits using recursion

### Pattern Printing
- **hollow_square_pattern.c**: Pattern printing hollow square
- **triangle_pattern.c**: Triangle pattern with stars
- **alphabet_patterns.c**: Patterns that print alphabets

### Array Operations
- **array_maximum.c**: Find maximum value in an array

### Control Structures
- **weekday_switch.c**: Display day of week using switch case
- **odd_numbers_sum.c**: Print and sum odd numbers in a range

### Utilities
- **premium_utils.c**: A collection of utility functions to enhance C programs
- **premium_utils.h**: Header file for premium utility functions

To rename files according to this scheme, you can use the provided `rename_files.bat` script (Windows) or manually rename them following the guidelines in `file_naming_scheme.md`.

## 👥 Contributing

Contributions to enhance this collection are welcome. Please follow these steps:

1. Fork the repository
2. Create your feature branch (`git checkout -b feature/amazing-feature`)
3. Commit your changes (`git commit -m 'Add some amazing feature'`)
4. Push to the branch (`git push origin feature/amazing-feature`)
5. Open a Pull Request

## 📄 License

This project is licensed under the MIT License - see the LICENSE file for details.

---

© 2024 C Programming Collection. All Rights Reserved. 