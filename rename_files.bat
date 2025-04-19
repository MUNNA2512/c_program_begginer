@echo off
echo C File Renaming Script
echo =============================================
echo This script will rename your C files according to the suggested naming scheme.
echo Please make sure you have a backup of your files before proceeding.
echo.
pause

echo.
echo Renaming files...
echo.

REM Mathematical Operations
if exist function.c (
    ren function.c calculator_functions.c
    echo Renamed: function.c to calculator_functions.c
)

if exist operation.c (
    ren operation.c basic_calculator.c
    echo Renamed: operation.c to basic_calculator.c
)

if exist Q2.c (
    ren Q2.c factorial_do_while.c
    echo Renamed: Q2.c to factorial_do_while.c
)

if exist factorial.c (
    ren factorial.c factorial_for_loop.c
    echo Renamed: factorial.c to factorial_for_loop.c
)

if exist Q3.c (
    ren Q3.c two_digit_sum.c
    echo Renamed: Q3.c to two_digit_sum.c
)

if exist sum_digit.c (
    ren sum_digit.c recursive_digit_sum.c
    echo Renamed: sum_digit.c to recursive_digit_sum.c
)

if exist sum_of_natural_number.c (
    ren sum_of_natural_number.c natural_number_sum.c
    echo Renamed: sum_of_natural_number.c to natural_number_sum.c
)

if exist div.c (
    ren div.c divisibility_checker.c
    echo Renamed: div.c to divisibility_checker.c
)

REM Pattern Printing
if exist q1.c (
    ren q1.c hollow_square_pattern.c
    echo Renamed: q1.c to hollow_square_pattern.c
)

if exist ch.c (
    ren ch.c triangle_pattern.c
    echo Renamed: ch.c to triangle_pattern.c
)

if exist name.c (
    ren name.c alphabet_patterns.c
    echo Renamed: name.c to alphabet_patterns.c
)

REM Array Operations
if exist largest_array.c (
    ren largest_array.c array_maximum.c
    echo Renamed: largest_array.c to array_maximum.c
)

REM Control Structures
if exist days.c (
    ren days.c weekday_switch.c
    echo Renamed: days.c to weekday_switch.c
)

if exist odd.c (
    ren odd.c odd_numbers_sum.c
    echo Renamed: odd.c to odd_numbers_sum.c
)

REM Data Structures
if exist dsa.c (
    ren dsa.c student_struct.c
    echo Renamed: dsa.c to student_struct.c
)

REM Additional files could be added here as needed

echo.
echo Renaming complete!
echo Please check the file_naming_scheme.md file for details about the renamed files.
echo.
pause 