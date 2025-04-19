/**
 * @file premium_utils.h
 * @brief Header file for premium utility functions
 * @author Your Name
 * @version 1.0
 * @date 2024
 */

#ifndef PREMIUM_UTILS_H
#define PREMIUM_UTILS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/**
 * @brief Color codes for console output
 */
#define RED "\x1B[31m"
#define GREEN "\x1B[32m"
#define YELLOW "\x1B[33m"
#define BLUE "\x1B[34m"
#define MAGENTA "\x1B[35m"
#define CYAN "\x1B[36m"
#define WHITE "\x1B[37m"
#define RESET "\x1B[0m"
#define BOLD "\x1B[1m"

/**
 * @brief Error codes
 */
#define SUCCESS 0
#define ERROR_INVALID_INPUT -1
#define ERROR_DIVISION_BY_ZERO -2
#define ERROR_MEMORY_ALLOCATION -3
#define ERROR_FILE_OPERATION -4
#define ERROR_ARRAY_BOUNDS -5

/**
 * @brief Debug mode flag
 */
#ifndef DEBUG
#define DEBUG 0
#endif

/**
 * @brief Debug print macro
 */
#define debug_print(fmt, ...) \
    do { if (DEBUG) fprintf(stderr, "%s:%d:%s(): " fmt, __FILE__, \
                            __LINE__, __func__, __VA_ARGS__); } while (0)

/**
 * @brief Type for history entry
 */
typedef struct {
    char operation[100];
    time_t timestamp;
} HistoryEntry;

/**
 * @brief Validates an integer input
 * @param prompt The prompt to display
 * @param min Minimum valid value
 * @param max Maximum valid value
 * @return The validated integer
 */
int validateInteger(const char *prompt, int min, int max);

/**
 * @brief Validates a float input
 * @param prompt The prompt to display
 * @param min Minimum valid value
 * @param max Maximum valid value
 * @return The validated float
 */
float validateFloat(const char *prompt, float min, float max);

/**
 * @brief Safe memory allocation
 * @param size Size in bytes to allocate
 * @return Pointer to allocated memory
 */
void *safeAlloc(size_t size);

/**
 * @brief Prints an error message
 * @param errorCode The error code
 */
void printError(int errorCode);

/**
 * @brief Prints a success message
 * @param message The message to print
 */
void printSuccess(const char *message);

/**
 * @brief Prints a warning message
 * @param message The message to print
 */
void printWarning(const char *message);

/**
 * @brief Prints information message
 * @param message The message to print
 */
void printInfo(const char *message);

/**
 * @brief Adds an entry to operation history
 * @param operation The operation description
 */
void addToHistory(const char *operation);

/**
 * @brief Displays the operation history
 */
void displayHistory();

/**
 * @brief Clears the console screen
 */
void clearScreen();

/**
 * @brief Shows a progress bar
 * @param current Current progress
 * @param total Total work to be done
 * @param width Width of the progress bar
 */
void showProgress(int current, int total, int width);

/**
 * @brief Measures execution time of a function
 * @param func Function pointer to measure
 * @return Execution time in seconds
 */
double measureExecutionTime(void (*func)(void));

/**
 * @brief Saves result to a file
 * @param filename File to save to
 * @param format Format string
 * @param ... Additional arguments for format
 * @return 0 on success, error code on failure
 */
int saveToFile(const char *filename, const char *format, ...);

/**
 * @brief Loads data from a file
 * @param filename File to load from
 * @param buffer Buffer to store data
 * @param size Size of buffer
 * @return 0 on success, error code on failure
 */
int loadFromFile(const char *filename, char *buffer, size_t size);

/**
 * @brief Displays a menu and gets user choice
 * @param title Menu title
 * @param options Array of option strings
 * @param num_options Number of options
 * @return User's choice (1-based index)
 */
int displayMenu(const char *title, const char *options[], int num_options);

/**
 * @brief Gets current date and time as a string
 * @param buffer Buffer to store the date string
 * @param size Size of buffer
 */
void getCurrentDateTime(char *buffer, size_t size);

/**
 * @brief Generates a random integer in a range
 * @param min Minimum value (inclusive)
 * @param max Maximum value (inclusive)
 * @return Random integer
 */
int getRandomInt(int min, int max);

/**
 * @brief Swaps two integers
 * @param a Pointer to first integer
 * @param b Pointer to second integer
 */
void swapInt(int *a, int *b);

/**
 * @brief Finds maximum in an array
 * @param arr Array of integers
 * @param size Size of array
 * @return Maximum value
 */
int findMax(const int arr[], int size);

/**
 * @brief Finds minimum in an array
 * @param arr Array of integers
 * @param size Size of array
 * @return Minimum value
 */
int findMin(const int arr[], int size);

/**
 * @brief Calculates average of an array
 * @param arr Array of integers
 * @param size Size of array
 * @return Average value
 */
float calculateAverage(const int arr[], int size);

/**
 * @brief Checks if a string is a palindrome
 * @param str String to check
 * @return 1 if palindrome, 0 otherwise
 */
int isPalindrome(const char *str);

/**
 * @brief Reverses a string in place
 * @param str String to reverse
 */
void reverseString(char *str);

/**
 * @brief Visualizes an array as a bar chart
 * @param arr Array to visualize
 * @param size Size of array
 * @param highlight Index to highlight (or -1 for none)
 */
void visualizeArray(const int arr[], int size, int highlight);

/**
 * @brief Displays a help message about a program
 * @param program_name Name of the program
 * @param description Description of the program
 * @param usage Usage instructions
 */
void showHelp(const char *program_name, const char *description, const char *usage);

#endif /* PREMIUM_UTILS_H */ 