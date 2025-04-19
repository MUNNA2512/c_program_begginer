# C File Naming Scheme

Below is a suggested naming scheme for your C files based on their functionality. These new names better reflect the purpose of each program and make it easier to navigate your collection.

## Mathematical Operations

| Current Filename | Suggested Filename | Description |
|-----------------|-------------------|-------------|
| function.c      | calculator_functions.c | Multi-operation calculator using functions |
| operation.c     | basic_calculator.c | Simple calculator with arithmetic operations |
| Q2.c            | factorial_do_while.c | Factorial calculation using do-while loop |
| factorial.c     | factorial_for_loop.c | Factorial calculation using for loop |
| Q3.c            | two_digit_sum.c | Sum of digits for a two-digit number |
| sum_digit.c     | recursive_digit_sum.c | Sum of digits using recursion |
| sum_of_natural_number.c | natural_number_sum.c | Sum of natural numbers in a range |
| div.c           | divisibility_checker.c | Check numbers divisible by 3 or 7 |

## Pattern Printing

| Current Filename | Suggested Filename | Description |
|-----------------|-------------------|-------------|
| q1.c            | hollow_square_pattern.c | Pattern printing hollow square with 'S' |
| ch.c            | triangle_pattern.c | Triangle pattern with stars |
| name.c          | alphabet_patterns.c | Patterns that print alphabets |

## Array Operations

| Current Filename | Suggested Filename | Description |
|-----------------|-------------------|-------------|
| largest_array.c | array_maximum.c | Find maximum value in an array |

## Control Structures

| Current Filename | Suggested Filename | Description |
|-----------------|-------------------|-------------|
| days.c          | weekday_switch.c | Display day of week using switch case |
| odd.c           | odd_numbers_sum.c | Print and sum odd numbers in a range |

## Data Structures

| Current Filename | Suggested Filename | Description |
|-----------------|-------------------|-------------|
| dsa.c           | student_struct.c | Student record management using structures |

## Other Files

For files like Q4.c, Q5.c, and others that I haven't analyzed yet, I recommend examining their functionality and renaming them according to the following pattern:

1. Use lowercase letters and underscores for readability (snake_case)
2. Include the primary functionality in the name (e.g., `factorial_calculator.c`)
3. If multiple files serve the same purpose but use different methods, differentiate them (e.g., `factorial_recursive.c`, `factorial_iterative.c`)
4. Group related files with common prefixes (e.g., `pattern_square.c`, `pattern_triangle.c`)

## Implementation Steps

1. Make a backup of your current files
2. Use the following command to rename each file (in Windows Command Prompt):
   ```
   ren old_filename.c new_filename.c
   ```
3. Update any references to these files in your README or other documentation

This naming scheme will make your C programming collection more organized and easier to navigate. 